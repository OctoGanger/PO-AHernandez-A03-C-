//
// Created by alhec on 26/01/2018.
//

#ifndef UNTITLED1_RECTANGLE_H
#define UNTITLED1_RECTANGLE_H


#include "Shape.h"
#include<iostream>

class Rectangle: virtual public Shape {

protected:
    double width;
    double length;

public:
    Rectangle();
    Rectangle(std::string color, bool filled, double width, double lenght);

    double getWidth();
    double getLength();

    void setWidth(double width);
    void setLength(double length);

    double getArea();
    double getPerimeter();
    std::string toString();







};


#endif //UNTITLED1_RECTANGLE_H
