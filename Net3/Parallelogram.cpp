#include "Parallelogram.h"

Parallelogram::Parallelogram(int a, int b, int A, int B)
    : Quadrangle(a, b, a, b, A, B, A, B) {
    if (side_A != side_C || side_B != side_D) 
    {
        throw MyException("В параллелограмме противоположные стороны должны быть равны");
    }

    if (vertex_A != vertex_C || vertex_B != vertex_D)
    {
        throw MyException("В параллелограмме противоположные углы должны быть равны");
    }
}

std::string Parallelogram::get_name() const {
    return "Параллелограмм";
}