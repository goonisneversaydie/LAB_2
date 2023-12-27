#include <cmath>
#include <iostream>
module student_1bib21077.Lab2.Variant15.Task4:Fun4;
import :FunA;
void RBPO::Lab2::Variant15::Task4::Fun4() {
    std::cout << "Задайте точность вычисления E: ";
    double E;
    std::cin >> E;
    double sum = 0.0;
    double prevSum = 0.0;
    double nextSum = 0.0;
    int k = 0;
    for (int i = 0;; i++)
    {
        prevSum = nextSum;
        nextSum = FunA(i);
        sum += FunA(i);
        k = i;
        if (std::abs(nextSum - prevSum) <= E)
        {
            break;
        }
    }
    std::cout << "Результат функции f4(E) = " << sum << std::endl << "Число итераций k = " << k << std::endl;
}