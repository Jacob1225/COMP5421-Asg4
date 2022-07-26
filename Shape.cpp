/*
    The Shape.cpp implements methods of the Shape class
*/
#include <typeinfo>
#include "Shape.h" //include header file

using std::cout;
using std::endl;
using std::ostream;
using std::string;
using std::to_string;

int Shape::identityNumber = 0; //Sets the starting id to 1 - will be incremented afterwards

/*
* Shape Constructor - creates a new Shape object with a pen char and string name
* @param pen, A Character used to draw the Shape
* @param name, A string to name the shape object
* @return void 
*/
Shape::Shape(char pen, string name) : pen{pen}, name{name}
{
    //increment identity number by 1
    identityNumber++;
}

/*
* Destructor for shape object
*/
Shape::~Shape() {}

/*
* Writes a string representation of an Shape object to an output stream
* @param sout The output stream
* @param list The specified Shape object
* @return The output stream
*/
ostream &operator<<(ostream &out, const Shape &shape)
{
    out << shape.toString();
    return out;
}

/*
* Accessor for identity number attribute
* @return An integer representing the shape's identity number 
*/
int Shape::getIdentity() const
{
    return Shape::identityNumber;
}

/*
* Accessor for pen attribute
* @return An character representing the shape's pen character 
*/
char Shape::getPen() const
{
    return pen;
}

/*
* Accessor for name attribute
* @return A string representing the shape's name 
*/
string Shape::getName() const
{
    return name;
}

/*
* Mutator for setting name attribute
* param name A String for the shape's name
* @return void
*/
void Shape::setName(string name)
{
    this->name = name;
}

/*
* Mutator for setting pen attribute
* param pen A char for the shape's pen character
* @return void
*/
void Shape::setPen(char pen)
{
    this->pen = pen;
}

/*
* Converts this shape object to a string representation
* @return A String representation of this objet
*/
string Shape::toString() const
{
    string output = "Shape Information\n--------------------\n";
    output += "id:\t\t\t" + to_string(identityNumber);
    output += "\nShape name:\t\t" + name;
    output += "\nPen Character:\t\t";
    output += pen;
    output += "\nHeight:\t\t\t" + to_string(this->getHeight());
    output += "\nWidth:\t\t\t" + to_string(this->getWidth());
    output += "\nTextual area:\t\t" + to_string(this->areaScr());
    output += "\nGeometric area:\t\t" + to_string(this->areaGeo());
    output += "\nTextual perimeter:\t" + to_string(this->perimeterScr());
    output += "\nGeometric perimeter:\t" + to_string(this->perimeterGeo());
    output += string("\nStatic type:\t\t") + typeid(this).name();
    output += string("\nDynamic type:\t\t") + typeid(*this).name();
    output += "\n";
    return output;
}