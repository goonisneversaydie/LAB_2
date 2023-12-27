﻿#include <iostream>
import student_1bib21077.Lab2.Variant15.Task1;
import student_1bib21077.Lab2.Variant15.Task2;
import student_1bib21077.Lab2.Variant15.Task3;
import student_1bib21077.Lab2.Variant15.Task4;
import student_1bib21077.Lab2.Variant15.Task5;

int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    int repeat;
    do {
        int option;
        ;
        std::cout << "Выберите опцию 1-5: ";
        std::cin >> option;
        switch (option) {
        case 1: {

            std::cout << "Выбраны функции 1 задания: ";
            RBPO::Lab2::Variant15::Task1::Fun1();
            RBPO::Lab2::Variant15::Task1::Fun2();
            int i;
            double result;
            std::cout << "Введите значения i: ";
            std::cin >> i;
            result = RBPO::Lab2::Variant15::Task1::FunA(i);
            std::cout << "Результат  a(i) = " << result << std::endl;
            RBPO::Lab2::Variant15::Task1::Fun3();
            RBPO::Lab2::Variant15::Task1::Fun4();
            break;
        }
        case 2: {

            std::cout << "Выбраны функции 2 задания: ";
            RBPO::Lab2::Variant15::Task2::Fun1();
            RBPO::Lab2::Variant15::Task2::Fun2();
            RBPO::Lab2::Variant15::Task2::Fun3();
            RBPO::Lab2::Variant15::Task2::Fun4();
            break;
        }
        case 3: {

            std::cout << "Выбраны функции 3 задания: ";
            RBPO::Lab2::Variant15::Task3::Fun1();
            RBPO::Lab2::Variant15::Task3::Fun2();
            RBPO::Lab2::Variant15::Task3::Fun3();
            RBPO::Lab2::Variant15::Task3::Fun4();
            break;
        }
        case 4: {

            std::cout << "Выбраны функции 4 задания: ";
            RBPO::Lab2::Variant15::Task4::Fun1();
            RBPO::Lab2::Variant15::Task4::Fun2();
            RBPO::Lab2::Variant15::Task4::Fun3();
            RBPO::Lab2::Variant15::Task4::Fun4();
            break;
        }
        case 5: {

            std::cout << "Выбраны функции 5 задания: ";
            RBPO::Lab2::Variant15::Task5::Fun1();
            RBPO::Lab2::Variant15::Task5::Fun2();
            RBPO::Lab2::Variant15::Task5::Fun3();
            RBPO::Lab2::Variant15::Task5::Fun4();
            break;
        }
        default:
            std::cout << "Введите другую опцию!\n";
        }
        std::cout << "Для повторения введите 1: ";
        std::cin >> repeat;
    } while (repeat == 1);

    return 0;
}