/*
    The Rhombus.cpp implements methods of the Rhombus derived class
*/

#include "Rhombus.h" //include header file
#include <cmath>

using std::cout;
using std::endl;
using std::ostream;
using std::string;

/*
* Rhombus Constructor - creates a new Rhombus object with a diagnoal
* @param diagonal, An integer for diagonal
* @return void 
*/
Rhombus::Rhombus(int diagonal, string name, char pen) : diagonal{diagonal}, Shape{pen, name}
{
    //verify if diagonal is even
    if (this->diagonal % 2 == 0)
    {
        this->diagonal = diagonal + 1;
    }
}

/*
* Destructor for Rhombus object
*/
Rhombus::~Rhombus() {}

/*
* Gets the width of the Rhombus
* @return an integer for the width  
*/
int Rhombus::getWidth() const
{
    return diagonal;
}

/*
* Gets the height of the Rhombus
* @return an integer for the height  
*/
int Rhombus::getHeight() const
{
    return diagonal;
}

/*
* Computes the Geometric area of a Rhombus
* @return A double for the geometric area  
*/
double Rhombus::areaGeo() const
{
    return (pow(diagonal, 2)) / 2;
}

/*
* Computes the Geometric perimeter of a Rhombus
* @return A double for the perimeterGeo  
*/
double Rhombus::perimeterGeo() const
{
    return (2 * (pow(2, 0.5))) * diagonal;
}

/*
* Computes the textual area of a Rhombus
* @return A double for the textual area  
*/
double Rhombus::areaScr() const
{
    int diagonalFloor = floor(diagonal / 2);
    return 2 * diagonalFloor * (diagonalFloor + 1) + 1;
}

/*
* Computes the textual perimeter of a Rhombus
* @return A double for the textual perimeter  
*/
double Rhombus::perimeterScr() const
{
    return 2 * (diagonal - 1);
}