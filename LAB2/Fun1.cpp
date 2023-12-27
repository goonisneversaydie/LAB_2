#include <cmath>
#include <iostream>
module student_1bib21077.Lab2.Variant15.Task4:Fun1;
void RBPO::Lab2::Variant15::Task4::Fun1() {
    double x, y;
    std::cout << "Введите значения x и y: ";
    std::cin >> x >> y;
    if (x <= 0 || y <= 0) {
        std::cout << "Неверные значения x и y" << std::endl;
    }

    double result = sqrt(2 * x + 2 * sqrt(pow(x, 2) - 4)) / sqrt(pow(x, 2) - 4 + x + 2);
    std::cout << "Результат функции f1(x, y) = " << result << std::endl;
}