#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle{
    private:
        double length;
        double width;
    public:
        // Constructor without parameter or No argument constructor
        Rectangle();
        //Parametrized constructor
        Rectangle(double length,double width);
        // Methods of Rectangle class
        void setLength(double length);
        void setWidth(double width);
        double getLength() const;
        double getWidth() const;
        double area() const;
        double perimeter() const;
};

#endif
