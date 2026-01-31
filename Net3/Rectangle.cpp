#include "Rectangle.h"

Rectangle::Rectangle(int a, int b)
    : Quadrangle(a, b, a, b, 90, 90, 90, 90) 
{
    if (vertex_A != 90 || vertex_B != 90 || vertex_C != 90 || vertex_D != 90) 
    {
        throw MyException("В прямоугольнике все углы должны быть равны 90");
    }

    if (side_A != side_C || side_B != side_D) 
    {
        throw MyException("В прямоугольнике противоположные стороны должны быть равны");
    }
}

std::string Rectangle::get_name() const {
    return "Прямоугольник";
}