#include "EquilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(int side)
    : Triangle(side, side, side, 60, 60, 60) 
{
    if (side_A != side_B || side_B != side_C || side_A != side_C) 
    {
        throw MyException("В равностороннем треугольнике все стороны должны быть равны");
    }

    if (vertex_A != 60 || vertex_B != 60 || vertex_C != 60) 
    {
        throw MyException("В равностороннем треугольнике все углы должны быть равны 60");
    }
}

std::string EquilateralTriangle::get_name() const {
    return "Равносторонний треугольник";
}