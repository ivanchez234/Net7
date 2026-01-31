#include "MyException.h"

MyException::MyException(const std::string& message) : std::domain_error(message)
{
    
}