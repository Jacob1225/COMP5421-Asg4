/*
    The AcuteTriangle.cpp implements methods of the AcuteTriangle derived class
*/

#include "AcuteTriangle.h"
#include "Triangle.h" //include header file
#include <cmath>

using std::cout;
using std::endl;
using std::ostream;
using std::string;

/*
* AcuteTriangle Constructor - creates a new AcuteTriangle object with a base
* @param base, An integer for base
* @return void 
*/
AcuteTriangle::AcuteTriangle(int base, string name, char pen) : width{base}, Triangle{base, pen, name}
{
    //verify if base is odd or even
    if (base % 2 == 0)
    {
        height = (base + 2) / 2;
        this->setBase(base + 1);
    }
    else
    {
        height = (base + 1) / 2;
    }
}

/*
* Destructor for AcuteTriangle object
*/
AcuteTriangle::~AcuteTriangle() {}

/*
* Gets the height of the AcuteTriangle
* @return an integer for the height  
*/
int AcuteTriangle::getHeight() const
{
    return height;
}

/*
* Computes the Geometric perimeter of a AcuteTriangle
* @return A double for the perimeterGeo  
*/
double AcuteTriangle::perimeterGeo() const
{
    int base = this->getBase();
    return base + pow(pow(base, 2) + (4 * pow(height, 2)), 0.5);
}

/*
* Computes the textual area of a AcuteTriangle
* @return A double for the textual area  
*/
double AcuteTriangle::areaScr() const
{
    return pow(height, 2);
}

/*
* Computes the textual perimeter of a AcuteTriangle
* @return A double for the textual perimeter  
*/
double AcuteTriangle::perimeterScr() const
{
    return 4 * (height - 1);
}