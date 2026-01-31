#ifndef EQUILATERAL_TRIANGLE_H
#define EQUILATERAL_TRIANGLE_H
#include "Triangle.h"

class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(int side);
    virtual std::string get_name() const override;
};
#endif
