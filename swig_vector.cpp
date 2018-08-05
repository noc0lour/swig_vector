#include "swig_vector.h"
#include <vector>
#include <iostream>
#include <complex>

void test::printIntVector(const std::vector<uint64_t>& input) {
std::cout << "Vector contains: ";
for (const auto& elem : input){
    std::cout << elem << ", ";
}
std::cout << std::endl;
}

void test::printLongVector(const std::vector<long>& input) {
    std::cout << "Vector contains: ";
    for (const auto& elem : input){
        std::cout << elem << ", ";
    }
    std::cout << std::endl;
}

void test::printFloatVector(const std::vector<float>& input) {
    std::cout << "Vector contains: ";
    for (const auto& elem : input){
        std::cout << elem << ", ";
    }
    std::cout << std::endl;
}

void test::printDoubleVector(const std::vector<double>& input) {
    std::cout << "Vector contains: ";
    for (const auto& elem : input){
        std::cout << elem << ", ";
    }
    std::cout << std::endl;
}

void test::printComplexVector(const std::vector<std::complex<double> >& input) {
    std::cout << "Vector contains: ";
    for (const auto& elem : input){
        std::cout << elem << ", ";
    }
    std::cout << std::endl;
}
