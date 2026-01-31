#ifndef RHOMBUS_H
#define RHOMBUS_H
#include "Quadrangle.h"

class Rhombus : public Quadrangle {
public:
    Rhombus(int side, int A, int B);
    virtual std::string get_name() const override;
};
#endif
