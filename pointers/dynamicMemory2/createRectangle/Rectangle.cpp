#include"Rectangle.h" 

Rectangle::Rectangle()
{
    length=1.15;
    width=5.25;
}

Rectangle::Rectangle(double length,double width)
{
    this->length=length;
    this->width=width;
}

void Rectangle::setWidth(double width)
{
    this->width=width;
}

void Rectangle::setLength(double length)
{
    this->length=length;
}

double Rectangle::getLength() const
{
    return length;
}

double Rectangle::getWidth() const
{
    return width;
}

double Rectangle::area() const
{
    return length*width;
}

double Rectangle::perimeter() const
{
    return 2*(length+width);
}
