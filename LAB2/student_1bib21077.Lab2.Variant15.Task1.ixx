#include <cmath>
#include <iostream>
export module student_1bib21077.Lab2.Variant15.Task1;

namespace RBPO {
    namespace Lab2 {
        namespace Variant15 {
            namespace Task1 {
                export void Fun1() {
                    double x, y;
                    std::cout << "Введите значения x и y: ";
                    std::cin >> x >> y;
                    if (x <= 0 || y <= 0) {
                        std::cout << "Неверные значения x и y" << std::endl;
                    }

                    double result = sqrt(2 * x + 2 * sqrt(pow(x, 2) - 4)) / sqrt(pow(x, 2) - 4 + x + 2);
                    std::cout << "Результат  f1 = " << result << std::endl;
                }

                export void Fun2() {
                    std::cout << "Введите значения x: ";
                    double x, result;
                    std::cin >> x;
                    if (x <= 4) {
                        result = sqrt(pow(x, 2) + 4);
                    }
                    else {
                        result = cos(abs(2 + x));
                    }
                    std::cout << "Результат f2(x) = " << result << std::endl;
                }


                export double FunA(int i) {
                    double result = pow(-1, i) * ((i + 1) / (pow(i, 2) + 2 * i + 1));
                    return result;
                }

                export void Fun3() {
                    std::cout << "Введите значение n: ";
                    int n;
                    std::cin >> n;
                    double sum = 0.0;
                    for (int i = 0; i <= n; i++) {
                        sum += FunA(i);
                    }
                    std::cout << "Результат f3 = " << sum << std::endl;
                }

                export void Fun4() {
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
                    std::cout << "Результат f4 = " << sum << std::endl << "Число итераций k = " << k << std::endl;
                }
            }
        }
    }
}