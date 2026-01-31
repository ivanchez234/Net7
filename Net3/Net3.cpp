#include <iostream>
#include <string>
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrangle.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Square.h"
#include "Rhombus.h"
#include "MyException.h"

void print_Triangle(Triangle* tri) {
    std::cout << tri->get_name() << ":" << std::endl;
    std::cout << "Стороны: a=" << tri->get_sideA() << " b=" << tri->get_sideB() << " c=" << tri->get_sideC() << std::endl;
    std::cout << "Углы: A=" << tri->get_vertex_A() << " B=" << tri->get_vertex_B() << " C=" << tri->get_vertex_C() << std::endl << std::endl;
}

void print_Quadrangle(Quadrangle* qua) {
    std::cout << qua->get_name() << ":" << std::endl;
    std::cout << "Стороны: a=" << qua->get_sideA() << " b=" << qua->get_sideB() << " c=" << qua->get_sideC() << " d=" << qua->get_sideD() << std::endl;
    std::cout << "Углы: A=" << qua->get_vertex_A() << " B=" << qua->get_vertex_B() << " C=" << qua->get_vertex_C() << " D=" << qua->get_vertex_D() << std::endl << std::endl;
}

int main() {
    setlocale(LC_ALL, "Russian");

    try {
        Triangle t(10, 20, 30, 50, 60, 70);
        std::cout << "Треугольник успешно создан" << std::endl;
        print_Triangle(&t);
    }
    catch (const MyException& e) {
        std::cout << "Ошибка создания треугольника. Причина: " << e.what() << std::endl << std::endl;
    }

    try {
        RightTriangle rt(10, 20, 30, 50, 60);
        std::cout << "Прямоугольный треугольник успешно создан" << std::endl;
        print_Triangle(&rt);
    }
    catch (const MyException& e) {
        std::cout << "Ошибка создания прямоугольного треугольника. Причина: " << e.what() << std::endl << std::endl;
    }

    try {
        Quadrangle q(10, 20, 30, 40, 50, 60, 70, 80);
        std::cout << "Четырёхугольник успешно создан" << std::endl;
        print_Quadrangle(&q);
    }
    catch (const MyException& e) {
        std::cout << "Ошибка создания четырёхугольника. Причина: " << e.what() << std::endl << std::endl;
    }

    try {
        Rectangle r(10, 20);
        std::cout << "Прямоугольник успешно создан" << std::endl;
        print_Quadrangle(&r);
    }
    catch (const MyException& e) {
        std::cout << "Ошибка создания прямоугольника. Причина: " << e.what() << std::endl << std::endl;
    }

    return 0;
}