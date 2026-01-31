#ifndef MYEXCEPTION_H
#define MYEXCEPTION_H
#include <stdexcept>
#include <iostream>

class MyException : public std::domain_error
{
public:
    MyException(const std::string& message);
};

#endif
