#include "Triangle.h"
Triangle::Triangle(int a, int b, int c, int A, int B, int C): side_A(a), side_B(b), side_C(c), vertex_A(A), vertex_B(B), vertex_C(C) 
{ 
    if (a <= 0 || b <= 0 || c <= 0) 
    {
        throw MyException("Все стороны треугольника должны быть положительными");
    }

    if (A + B + C != 180) 
    {
        throw MyException("Сумма углов треугольника должна быть равна 180");
    }

    if (A <= 0 || B <= 0 || C <= 0) 
    {
        throw MyException("Все углы треугольника должны быть положительными");
    }
        
}

int Triangle::get_sideA() const { return side_A; }
int Triangle::get_sideB() const { return side_B; }
int Triangle::get_sideC() const { return side_C; }
int Triangle::get_vertex_A() const { return vertex_A; }
int Triangle::get_vertex_B() const { return vertex_B; }
int Triangle::get_vertex_C() const { return vertex_C; }

std::string Triangle::get_name() const {
    return "Треугольник";
}