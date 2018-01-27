//
// Created by alhec on 26/01/2018.
//

#include "Square.h"
#include<math.h>

Square::Square() {
}

Square::Square(double side) {
    this-> side=0.0;
}

Square::Square(double side, std::string color, bool filled ){
    this->side=side;
    this->color=color;
    this->filled=filled;
}

void Square::setWidth(double side){
    this->side=side;
}
void Square::setLength(double side) {
    this->side=side;
}
std::string toString();

double Square::getArea() {
    return 1 * pow(this->side,2);
}

double Square::getPerimeter() {
    return 4* (this->side);
}
