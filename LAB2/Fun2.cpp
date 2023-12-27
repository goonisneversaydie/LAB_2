#include <cmath>
#include <iostream>
module student_1bib21077.Lab2.Variant15.Task4:Fun2;
void RBPO::Lab2::Variant15::Task4::Fun2() {
    std::cout << "Введите значения x: ";
    double x;
    std::cin >> x;
    double result;
    if (x <= 3) {
        result = sqrt(pow(x, 2) + 4);
    }
    else {
        result = cos(abs(2 + x));
    }
    std::cout << "Результат  f2 = " << result << std::endl;
}