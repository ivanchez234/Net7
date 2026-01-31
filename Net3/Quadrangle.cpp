#include "Quadrangle.h"

Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D)
    : side_A(a), side_B(b), side_C(c), side_D(d),
    vertex_A(A), vertex_B(B), vertex_C(C), vertex_D(D) 
{
    if (a <= 0 || b <= 0 || c <= 0 || d <= 0) 
    {
        throw MyException("Все стороны четырёхугольника должны быть положительными");
    }

    if (A + B + C + D != 360) 
    {
        throw MyException("Сумма углов четырёхугольника должна быть равна 360");
    }

    if (A <= 0 || B <= 0 || C <= 0 || D <= 0)
    {
        throw MyException("Все углы четырёхугольника должны быть положительными");
    }
}

int Quadrangle::get_sideA() const { return side_A; }
int Quadrangle::get_sideB() const { return side_B; }
int Quadrangle::get_sideC() const { return side_C; }
int Quadrangle::get_sideD() const { return side_D; }
int Quadrangle::get_vertex_A() const { return vertex_A; }
int Quadrangle::get_vertex_B() const { return vertex_B; }
int Quadrangle::get_vertex_C() const { return vertex_C; }
int Quadrangle::get_vertex_D() const { return vertex_D; }
std::string Quadrangle::get_name() const {
    return "Четырёхугольник";
}