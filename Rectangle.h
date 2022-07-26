/*
	The Rectangle.h defines members and member functions of the Recatangle derived class.
*/

#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
#include "Shape.h"

using std::ostream;
using std::string;

class Rectangle : public Shape
{

private:
    int height;
    int width;

public:
    //special member functions
    Rectangle(int height, int width, string name = "Rectangle", char pen = '*');
    Rectangle(const Rectangle &source) = default;         //default copy ctor
    Rectangle(Rectangle &&source) = default;              //default move ctor
    Rectangle &operator=(const Rectangle &rhs) = default; //default copy op=
    Rectangle &operator=(Rectangle &&rhs) = default;      //default move op=
    virtual ~Rectangle();                                 //destructor

    virtual int getWidth() const override;        //returns width of bounding box
    virtual int getHeight() const override;       //returns height of bounding box
    virtual double areaGeo() const override;      //computes and returns geometric area of Rectangle
    virtual double perimeterGeo() const override; //computes and returns geometric perimeter of shape
    virtual double areaScr() const override;      //computes and returns # characters forming textual image
    virtual double perimeterScr() const override; //computes and returns # characters forming the borders of the textual image
};

#endif
#pragma once