#include <cmath>
#include <iostream>
module student_1bib21077.Lab2.Variant15.Task4:Fun1;
void RBPO::Lab2::Variant15::Task4::Fun1() {
    double x, y;
    std::cout << "������� �������� x � y: ";
    std::cin >> x >> y;
    if (x <= 0 || y <= 0) {
        std::cout << "�������� �������� x � y" << std::endl;
    }

    double result = sqrt(2 * x + 2 * sqrt(pow(x, 2) - 4)) / sqrt(pow(x, 2) - 4 + x + 2);
    std::cout << "��������� ������� f1(x, y) = " << result << std::endl;
}