/*
	The Triangle.h defines members and member functions of the Triangle abstract base class.
*/

#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <iostream>
#include "Shape.h"

using std::ostream;
using std::string;

class Triangle : public Shape
{

private:
    int base;

public:
    //special member functions
    Triangle(int base, char pen, string name);
    Triangle(const Triangle &source) = default;         //default copy ctor
    Triangle(Triangle &&source) = default;              //default move ctor
    Triangle &operator=(const Triangle &rhs) = default; //default copy op=
    Triangle &operator=(Triangle &&rhs) = default;      //default move op=
    virtual ~Triangle();                                //destructor

    //Accessor method for base
    int getBase() const; //returns object base

    //Mutator method for base
    void setBase(int base);

    //Accessor methods for bounding box
    virtual int getHeight() const = 0; //returns height of bounding box
    int getWidth() const;              //return width of bounding box

    double areaGeo() const;                  //computes and returns geometric area of shape
    virtual double perimeterGeo() const = 0; //computes and returns geometric perimeter of shape
    virtual double areaScr() const = 0;      //computes and returns # characters forming textual image
    virtual double perimeterScr() const = 0; //computes and returns # characters forming the borders of the textual image
};

#endif
#pragma once