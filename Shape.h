//
// Created by alhec on 26/01/2018.
//

#ifndef UNTITLED1_SHAPE_H
#define UNTITLED1_SHAPE_H
#include<iostream>

#include <string>

class Shape {
protected:
    //Atributos
    std::string color;
    bool filled;
public:
    //Métodos
    Shape();
    Shape(std::string color, bool filled);
    std::string getColor();
    void setColor(std::string color);
    bool isFilled();
    void setFilled(bool filled);
    virtual double getArea()= 0;
    virtual double getPerimeter()= 0;
    virtual std::string toString()= 0;
};


#endif //PO_HERENCIA_CLASESABSTRACTAS_SHAPE_H