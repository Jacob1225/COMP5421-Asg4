/*
	The Shape.h defines members and member functions of the Shape base class.
*/

#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>

using std::ostream;
using std::string;

class Shape
{
    friend ostream &operator<<(ostream &out, const Shape &shape); //overload << operator

private:
    string name;
    char pen;
    static int identityNumber;

public:
    //special member functions
    Shape(char pen, string name);
    Shape(const Shape &source) = default;         //default copy ctor
    Shape(Shape &&source) = default;              //default move ctor
    Shape &operator=(const Shape &rhs) = default; //default copy op=
    Shape &operator=(Shape &&rhs) = default;      //default move op=
    virtual ~Shape();                             //destructor

    //Accessor methods for the three attributes
    int getIdentity() const;
    char getPen() const;
    string getName() const;

    //Mutator methods to set name and pen
    void setName(string name);
    void setPen(char pen);

    string toString() const; //string representation of shape object

    //Accessor methods for bounding box
    virtual int getHeight() const = 0; //returns height of bounding box
    virtual int getWidth() const = 0;  //return width of bounding box

    virtual double areaGeo() const = 0;      //computes and returns geometric area of shape
    virtual double perimeterGeo() const = 0; //computes and returns geometric perimeter of shape
    virtual double areaScr() const = 0;      //computes and returns # characters forming textual image
    virtual double perimeterScr() const = 0; //computes and returns # characters forming the borders of the textual image
};

#endif
#pragma once