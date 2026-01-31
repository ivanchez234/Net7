#include "IsoscelesTriangle.h"

IsoscelesTriangle::IsoscelesTriangle(int a, int b, int A, int B)
    : Triangle(a, b, a, A, B, A) 
{
    if (side_A != side_C) 
    {
        throw MyException("В равнобедренном треугольнике стороны a и c должны быть равны");
    }

    if (vertex_A != vertex_C) 
    {
        throw MyException("В равнобедренном треугольнике углы A и C должны быть равны");
    }
}

std::string IsoscelesTriangle::get_name() const {
    return "Равнобедренный треугольник";
}