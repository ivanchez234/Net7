#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "MyException.h"
#include <string>
class Triangle {
protected:
    int side_A;
    int side_B;
    int side_C;
    int vertex_A;
    int vertex_B;
    int vertex_C;
public:
    Triangle(int a, int b, int c, int A, int B, int C);
    virtual ~Triangle() = default;

    int get_sideA() const;
    int get_sideB() const;
    int get_sideC() const;
    int get_vertex_A() const;
    int get_vertex_B() const;
    int get_vertex_C() const;

    virtual std::string get_name() const;
};


#endif