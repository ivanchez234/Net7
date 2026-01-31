#ifndef QUADRANGLE_H
#define QUADRANGLE_H
#include "MyException.h"
#include <string>


class Quadrangle {
protected:
    int side_A;
    int side_B;
    int side_C;
    int side_D;
    int vertex_A;
    int vertex_B;
    int vertex_C;
    int vertex_D;
public:
    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);
    virtual ~Quadrangle() = default;
    int get_sideA() const;
    int get_sideB() const;
    int get_sideC() const;
    int get_sideD() const;
    int get_vertex_A() const;
    int get_vertex_B() const;
    int get_vertex_C() const;
    int get_vertex_D() const;
    virtual std::string get_name() const;

};
#endif
