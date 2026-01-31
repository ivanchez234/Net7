#include "Rhombus.h"

Rhombus::Rhombus(int side, int A, int B)
    : Quadrangle(side, side, side, side, A, B, A, B) 
{
    if (side_A != side_B || side_B != side_C || side_C != side_D) 
    {
        throw MyException("В ромбе все стороны должны быть равны");
    }

    if (vertex_A != vertex_C || vertex_B != vertex_D) 
    {
        throw MyException("В ромбе противоположные углы должны быть равны");
    }
}

std::string Rhombus::get_name() const {
    return "Ромб";
}