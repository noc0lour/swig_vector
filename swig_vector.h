#pragma once

#include <cstdint>
#include <vector>
#include <complex>

namespace test {
  void printIntVector(const std::vector<uint64_t> &input);
  void printLongVector(const std::vector<long> &input);
  void printFloatVector(const std::vector<float> &input);
  void printDoubleVector(const std::vector<double> &input);
  void printComplexVector(const std::vector<std::complex<double> > &input);
}
