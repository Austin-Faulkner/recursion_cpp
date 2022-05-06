#pragma once

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double width;
    double length;

public:
    Rectangle(double, double);

    void setWidth(double);
    void setLength(double);

    double getWidth() const
         { return width; }
    double getLength() const
         { return length; }
    double getArea() const
         { return width * length; }

};
#endif
