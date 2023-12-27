#include <cmath>
#include <iostream>
export module student_1bib21077.Lab2.Variant15.Task5;
namespace RBPO::Lab2::Variant15::Task5 {
    export void Function1();
    export void Function2();
    double FunctionA(int i);
    export void Function3();
    export void Function4();
}

module :private;
void RBPO::Lab2::Variant15::Task5::Function1() {
    double x, y;
    std::cout << "������� �������� x � y: ";
    std::cin >> x >> y;
    if (x <= 0 || y <= 0) {
        std::cout << "�������� �������� x � y" << std::endl;
    }

    double result = sqrt(2 * x + 2 * sqrt(pow(x, 2) - 4)) / sqrt(pow(x, 2) - 4 + x + 2);
    std::cout << "���������  f1 = " << result << std::endl;
}

void RBPO::Lab2::Variant15::Task5::Function2() {
    std::cout << "������� �������� x: ";
    double x;
    std::cin >> x;
    double result;
    if (x <= 4) {
        result = sqrt(pow(x, 2) + 4);
    }
    else {
        result = cos(abs(2 + x));
    }
    std::cout << "��������� f2 = " << result << std::endl;
}

double RBPO::Lab2::Variant15::Task5::FunctionA(int i) {
    double result = pow(-1, i) * ((i + 1) / (pow(i, 2) + 2 * i + 1));
    return result;
}


void RBPO::Lab2::Variant15::Task5::Function3() {
    std::cout << "������� �������� n: ";
    int n;
    std::cin >> n;
    double sum = 0.0;
    int i = 0;
    while (i <= n) {
        sum += FunctionA(i);
        i++;
    }
    std::cout << "��������� f3 = " << sum << std::endl;
}

void RBPO::Lab2::Variant15::Task5::Function4() {
    std::cout << "������� �������� ���������� E: ";
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
    std::cout << "���������  f4 = " << sum << std::endl << "����� �������� k = " << k << std::endl;
}