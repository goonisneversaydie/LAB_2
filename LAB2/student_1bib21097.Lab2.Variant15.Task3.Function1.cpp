#include <cmath>
#include <iostream>
module student_1bib21077.Lab2.Variant15.Task3;
void RBPO::Lab2::Variant15::Task3::Fun1() {
    double x, y;
    std::cout << "������� �������� x � y: ";
    std::cin >> x >> y;
    if (x <= 0 || y <= 0) {
        std::cout << "�������� �������� x � y" << std::endl;
    }

    double result = (std::sqrt(x) - std::sqrt(y)) / x;
    std::cout << "��������� f1 = " << result << std::endl;
}