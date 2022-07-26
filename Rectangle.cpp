/*
    The Rectangle.cpp implements methods of the Rectangle derived class
*/

#include "Rectangle.h" //include header file

using std::cout;
using std::endl;
using std::ostream;
using std::string;

/*
* Rectangle Constructor - creates a new Rectangle object with a height nd width integer
* @param height, An integer for height
* @param width, An integer for width
* @return void 
*/
Rectangle::Rectangle(int height, int width, string name, char pen) : height{height}, width{width}, Shape{pen, name}
{
    //Nothing to do
}

/*
* Destructor for rectangle object
*/
Rectangle::~Rectangle() {}

/*
* Gets the width of the rectangle
* @return an integer for the width  
*/
int Rectangle::getWidth() const
{
    return width;
}

/*
* Gets the height of the rectangle
* @return an integer for the height  
*/
int Rectangle::getHeight() const
{
    return height;
}

/*
* Computes the Geometric area of a rectangle
* @return A double for the geometric area  
*/
double Rectangle::areaGeo() const
{
    return height * width;
}

/*
* Computes the Geometric perimeter of a rectangle
* @return A double for the perimeterGeo  
*/
double Rectangle::perimeterGeo() const
{
    return 2 * (height + width);
}

/*
* Computes the textual area of a rectangle
* @return A double for the textual area  
*/
double Rectangle::areaScr() const
{
    return areaGeo();
}

/*
* Computes the textual perimeter of a rectangle
* @return A double for the textual perimeter  
*/
double Rectangle::perimeterScr() const
{
    return perimeterGeo() - 4;
}