#include <cmath>
#include <iostream>
module student_1bib21077.Lab2.Variant15.Task3;

void RBPO::Lab2::Variant15::Task3::Fun4() {
    std::cout << "Задайте точность вычисления E: ";
    double E;
    std::cin >> E;
    double sum = 0.0;
    double prevSum = 0.0;
    double nextSum = 0.0;
    int k = 0;
    int i = 0;
    do {
        prevSum = nextSum;
        nextSum = FunA(i);
        sum += FunA(i);
        k = i;
        if (std::abs(nextSum - prevSum) <= E) {
            break;
        }
        i++;
    } while (true);
    std::cout << "Результат  f4 = " << sum << std::endl << "число итераций k = " << k << std::endl;
}