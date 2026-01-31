#ifndef SQUARE_H
#define SQUARE_H
#include "Quadrangle.h"

class Square : public Quadrangle {
public:
    Square(int side);
    virtual std::string get_name() const override;
};
#endif
