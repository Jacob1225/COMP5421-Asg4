/*
	The AcuteTriangle.h defines members and member functions of the AcuteTriangle derived class.
*/

#ifndef ACUTETRIANGLE_H
#define ACUTETRIANGLE_H
#include <iostream>
#include "Triangle.h"

using std::ostream;
using std::string;

class AcuteTriangle : public Triangle
{
    int height;
    int width;

public:
    //special member functions
    AcuteTriangle(int base, string name = "Wedge", char pen = '*');
    AcuteTriangle(const AcuteTriangle &source) = default;         //default copy ctor
    AcuteTriangle(AcuteTriangle &&source) = default;              //default move ctor
    AcuteTriangle &operator=(const AcuteTriangle &rhs) = default; //default copy op=
    AcuteTriangle &operator=(AcuteTriangle &&rhs) = default;      //default move op=
    virtual ~AcuteTriangle();                                     //destructor

    virtual int getHeight() const override;       //returns height of bounding box
    virtual double perimeterGeo() const override; //computes and returns geometric perimeter of shape
    virtual double areaScr() const override;      //computes and returns # characters forming textual image
    virtual double perimeterScr() const override; //computes and returns # characters forming the borders of the textual image
};

#endif
#pragma once