#ifndef CIRCLE_H
#define CIRCLE_H

class Circle{
    
    private:
        double radius;
        const double PI=3.14159;
    public:
        Circle();
        Circle(double radius);
        double getRadius() const;
        void setRadius(double radius);
        double circumfrence() const;
        double area() const;
};
#endif
