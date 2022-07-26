/*
    The Triangle.cpp implements methods of the Triangle class
*/

#include "Triangle.h" //include header file
#include <cmath>

using std::cout;
using std::endl;
using std::ostream;
using std::string;

/*
* Triangle Constructor - creates a new Triangle object with a base
* @param base, An integer for base
* @return void 
*/
Triangle::Triangle(int base, char pen, string name) : base{base}, Shape{pen, name}
{
    //Nothing to do
}

/*
* Destructor for Triangle object
*/
Triangle::~Triangle() {}

/*
* Gets the width of the Triangle
* @return an integer for the width  
*/
int Triangle::getWidth() const
{
    return base;
}

/*
* Gets the base of the Triangle
* @return an integer for the base  
*/
int Triangle::getBase() const
{
    return base;
}

/*
* Sets the base of the Triangle
* param base An integer for a base
* @return void 
*/
void Triangle::setBase(int base)
{
    base = base;
}

/*
* Computes the Geometric area of a Triangle
* @return A double for the geometric area  
*/
double Triangle::areaGeo() const
{
    return (double)base * this->getHeight() / 2;
}