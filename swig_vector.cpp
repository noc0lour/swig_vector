#include "swig_vector.h"
#include <vector>
#include <iostream>

void test::printIntVector(const std::vector<uint64_t>& input) {
std::cout << "Vector contains: ";
for (const auto& elem : input){
    std::cout << elem << ", ";
}
std::cout << std::endl;

}
