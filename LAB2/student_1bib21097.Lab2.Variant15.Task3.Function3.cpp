#include <cmath>
#include <iostream>
module student_1bib21077.Lab2.Variant15.Task3;

void RBPO::Lab2::Variant15::Task3::Fun3() {
    std::cout << "Введите значение n: ";
    int n;
    std::cin >> n;
    double sum = 0.0;
    int i = 0;
    do {
        sum += FunA(i);
        i++;
    } while (i <= n);
    std::cout << "Результат f3 = " << sum << std::endl;
}