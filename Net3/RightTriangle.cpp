#include "RightTriangle.h"

RightTriangle::RightTriangle(int a, int b, int c, int A, int B)
    : Triangle(a, b, c, A, B, 90) {

    if (vertex_A + vertex_B != 90) 
    {
        throw MyException("В прямоугольном треугольнике сумма углов A и B должна быть равна 90");
    }
    if (vertex_C != 90) 
    {
        throw MyException("В прямоугольном треугольнике угол C должен быть равен 90");
    }
}

std::string RightTriangle::get_name() const {
    return "Прямоугольный треугольник";
}