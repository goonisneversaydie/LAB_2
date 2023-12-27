#include <cmath>
#include <iostream>
module student_1bib21077.Lab2.Variant15.Task4:Fun3;
import :FunA;
void RBPO::Lab2::Variant15::Task4::Fun3() {
    std::cout << "Введите значение n: ";
    int n;
    std::cin >> n;
    double sum = 0.0;
    for (int i = 0; i <= n; i++) {
        sum += FunA(i);
    }
    std::cout << "Результат  f3 = " << sum << std::endl;
}