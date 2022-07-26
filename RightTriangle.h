/*
	The RightTriangle.h defines members and member functions of the RightTriangle derived class.
*/

#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H
#include <iostream>
#include "Shape.h"
#include "Triangle.h"

using std::ostream;
using std::string;

class RightTriangle : public Triangle
{
    int height;
    int width;

public:
    //special member functions
    RightTriangle(int base, string name = "Ladder", char pen = '*');
    RightTriangle(const RightTriangle &source) = default;         //default copy ctor
    RightTriangle(RightTriangle &&source) = default;              //default move ctor
    RightTriangle &operator=(const RightTriangle &rhs) = default; //default copy op=
    RightTriangle &operator=(RightTriangle &&rhs) = default;      //default move op=
    virtual ~RightTriangle();                                     //destructor

    virtual int getHeight() const override;       //returns height of bounding box
    virtual double perimeterGeo() const override; //computes and returns geometric perimeter of shape
    virtual double areaScr() const override;      //computes and returns # characters forming textual image
    virtual double perimeterScr() const override; //computes and returns # characters forming the borders of the textual image
};

#endif
#pragma once