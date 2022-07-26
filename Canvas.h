/*
	The Canvas.h defines members and member functions of the Canvas derived class.
*/

#ifndef CANVAS_H
#define CANVAS_H
#include <iostream>
#include <vector>

using std::ostream;
using std::string;

class Canvas
{
    friend ostream &operator<<(ostream &sout, const Canvas &can);

public:
    //special member functions
    Canvas() = default;
    Canvas(const Canvas &source) = default;         //default copy ctor
    Canvas(Canvas &&source) = default;              //default move ctor
    Canvas &operator=(const Canvas &rhs) = default; //default copy op=
    Canvas &operator=(Canvas &&rhs) = default;      //default move op=
    virtual ~Canvas();                              //destructor

    Canvas(int rows, int columns, char fillChar = ' ');
    int getRows() const;             // returns height of this Canvas object
    int getColumns() const;          // returns width of this Canvas object
    Canvas flip_horizontal() const;  // flips this canvas horizontally
    Canvas flip_vertical() const;    // flips this canvas vertically
    void print(ostream &) const;     // prints this Canvas to ostream
    char get(int r, int c) const;    // returns char at row r and column c, 0-based;
    void put(int r, int c, char ch); // puts ch at row r and column c, 0-based;

    // draws text starting at row r and col c on this canvas
    void drawString(int r, int c, const std::string text);

    // copies the non-blank characters of "can" onto the invoking Canvas object;
    // maps can’s origin to row r and column c on the invoking Canvas object
    void overlap(const Canvas &can, size_t r, size_t c);

protected:
    vector<vector<char>> grid{};           //only data member
    bool check(int r, int c) const;        //validates row r and columnc, 0-based
    void resize(size_t rows, size_t cols); //resizes this canvas dimensions
};

#endif
#pragma once