//
// Created by alhec on 26/01/2018.
//

#include "Rectangle.h"
#include<math.h>

Rectangle::Rectangle() {
    this->width = 0.0;
    this->length = 0.0;
}

    Rectangle::Rectangle(std::string color, bool filled, double width, double lenght) {
        this->color = color;
        this->filled = filled;
        this->width = width;
        this->length = lenght;
    }

double Rectangle::getWidth() {
    return this->width;
}

double Rectangle::getLength() {
   return this->length;
}

void Rectangle::setWidth(double width) {
    this->width = width;
}

void Rectangle::setLength(double length){
    this->length=length;
}
double Rectangle::getArea() {
    return this->length * this->width;
}

double Rectangle::getPerimeter() {
    return 2*(this->width) + 2*(this->length);
}


