/*
	The Rhombus.h defines members and member functions of the Rhombus derived class.
*/

#ifndef RHOMBUS_H
#define RHOMBUS_H
#include <iostream>
#include "Shape.h"

using std::ostream;
using std::string;

class Rhombus : public Shape
{

private:
    int diagonal;

public:
    //special member functions
    Rhombus(int diagonal, string name = "Diamond", char pen = '*');
    Rhombus(const Rhombus &source) = default;         //default copy ctor
    Rhombus(Rhombus &&source) = default;              //default move ctor
    Rhombus &operator=(const Rhombus &rhs) = default; //default copy op=
    Rhombus &operator=(Rhombus &&rhs) = default;      //default move op=
    virtual ~Rhombus();                               //destructor

    virtual int getWidth() const override;        //returns width of bounding box
    virtual int getHeight() const override;       //returns height of bounding box
    virtual double areaGeo() const override;      //computes and returns geometric area of Rhombus
    virtual double perimeterGeo() const override; //computes and returns geometric perimeter of shape
    virtual double areaScr() const override;      //computes and returns # characters forming textual image
    virtual double perimeterScr() const override; //computes and returns # characters forming the borders of the textual image
};

#endif
#pragma once