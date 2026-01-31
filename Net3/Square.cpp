#include "Square.h"

Square::Square(int side)
    : Quadrangle(side, side, side, side, 90, 90, 90, 90)
{
    if (side_A != side_B || side_B != side_C || side_C != side_D) 
    {
        throw MyException("В квадрате все стороны должны быть равны");
    }

    if (vertex_A != 90 || vertex_B != 90 || vertex_C != 90 || vertex_D != 90) 
    {
        throw MyException("В квадрате все углы должны быть равны 90");
    }
}

std::string Square::get_name() const {
    return "Квадрат";
}