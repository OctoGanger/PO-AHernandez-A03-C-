//
// Created by alhec on 26/01/2018.
//

#ifndef UNTITLED1_SQUARE_H
#define UNTITLED1_SQUARE_H


#include "Rectangle.h"

class Square: virtual public Rectangle {
protected:
    double side;

public:
    Square();
    Square(double side);
    Square(double side, std::string color, bool filled);

    double getSide();

    void setSide(double side);

    void setWidth (double side);
    void setLength (double side);
    std::string toString();

    double getArea();
    double getPerimeter();



#endif //UNTITLED1_SQUARE_H
