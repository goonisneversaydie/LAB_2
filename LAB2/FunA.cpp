#include <cmath>
#include <iostream>
module student_1bib21077.Lab2.Variant15.Task4:FunA;

double RBPO::Lab2::Variant15::Task4::FunA(int i) {
    double result = pow(-1, i) * ((i + 1) / (pow(i, 2) + 2 * i + 1));
    return result;
}