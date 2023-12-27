#include <cmath>
#include <iostream>
module student_1bib21077.Lab2.Variant15.Task2;
void RBPO::Lab2::Variant15::Task2::Fun1() {
    double x, y;
    std::cout << "Введите значения x и y: ";
    std::cin >> x >> y;
    if (x <= 0 || y <= 0) {
        std::cout << "Неверные значения x и y" << std::endl;
    }

    double result = sqrt(2 * x + 2 * sqrt(pow(x, 2) - 4)) / sqrt(pow(x, 2) - 4 + x + 2);
    std::cout << "Результат f1 = " << result << std::endl;
}

void RBPO::Lab2::Variant15::Task2::Fun2() {
    std::cout << "Введите значения x: ";
    double x;
    std::cin >> x;
    double result;
    if (x <= 4) {
        result = sqrt(pow(x, 2) + 4);
    }
    else {
        result = cos(abs(2 + x));
    }
    std::cout << "Результат  f2 = " << result << std::endl;
}

double FunA(int i) {
    double result = pow(-1, i) * ((i + 1) / (pow(i, 2) + 2 * i + 1));
    return result;
}


void RBPO::Lab2::Variant15::Task2::Fun3() {
    std::cout << "Введите значение n: ";
    int n;
    std::cin >> n;
    double sum = 0.0;
    int i = 0;
    while (i <= n) {
        sum += FunA(i);
        i++;
    }
    std::cout << "Результат  f3 = " << sum << std::endl;
}

void RBPO::Lab2::Variant15::Task2::Fun4() {
    std::cout << "Задайте точность вычисления E: ";
    double E;
    std::cin >> E;
    double sum = 0.0;
    double prevSum = 0.0;
    double nextSum = 0.0;
    int k = 0;
    int i = 0;
    while (true)
    {
        prevSum = nextSum;
        nextSum = FunA(i);
        sum += FunA(i);
        k = i;
        if (std::abs(nextSum - prevSum) <= E)
        {
            break;
        }
        i++;
    }
    std::cout << "Результат f4 = " << sum << std::endl << "Число итераций k = " << k << std::endl;
}