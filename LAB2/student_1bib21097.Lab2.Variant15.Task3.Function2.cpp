#include <cmath>
#include <iostream>
module student_1bib21077.Lab2.Variant15.Task3;

void RBPO::Lab2::Variant15::Task3::Fun2() {
    std::cout << "������� �������� x ��� ������ �������: ";
    double x;
    std::cin >> x;
    double result;
    if (x <= 4) {
        result = sqrt(pow(x, 2) + 4);
    }
    else {
        result = cos(abs(2 + x));
    }
    std::cout << "��������� ������� f2(x) = " << result << std::endl;
}