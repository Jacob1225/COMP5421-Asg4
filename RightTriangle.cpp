/*
    The RightTriangle.cpp implements methods of the RightTriangle derived class
*/

#include "RightTriangle.h"
#include "Triangle.h" //include header file
#include <cmath>

using std::cout;
using std::endl;
using std::ostream;
using std::string;

/*
* RightTriangle Constructor - creates a new RightTriangle object with a base
* @param base, An integer for base
* @return void 
*/
RightTriangle::RightTriangle(int base, string name, char pen) : height{base}, width{base}, Triangle{base, pen, name}
{
    //nothing to do
}

/*
* Destructor for RightTriangle object
*/
RightTriangle::~RightTriangle() {}

/*
* Gets the height of the RightTriangle
* @return an integer for the height  
*/
int RightTriangle::getHeight() const
{
    return this->getBase();
}

/*
* Computes the Geometric perimeter of a RightTriangle
* @return A double for the perimeterGeo  
*/
double RightTriangle::perimeterGeo() const
{
    return (2 + (pow(2, 0.5))) * height;
}

/*
* Computes the textual area of a RightTriangle
* @return A double for the textual area  
*/
double RightTriangle::areaScr() const
{
    return height * (height + 1) / 2;
}

/*
* Computes the textual perimeter of a RightTriangle
* @return A double for the textual perimeter  
*/
double RightTriangle::perimeterScr() const
{
    return 3 * (height - 1);
}