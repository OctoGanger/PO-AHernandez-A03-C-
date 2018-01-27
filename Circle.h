//
// Created by alhec on 26/01/2018.
//

#ifndef UNTITLED1_CIRCLE_H
#define UNTITLED1_CIRCLE_H


#include "Shape.h"

class Circle : virtual public Shape{
protected:
    double radious;
public:
    Circle();
    Circle(std::string color, bool filled, double radious);
    double getRadious();
    void setRadious(double radious);
    double getArea();
    double getPerimeter();
    std::string toString();
};