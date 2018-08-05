#!/usr/bin/env python3

import swig_vector 
import numpy as np

def main():
  my_array = np.array([1, 2, 3], dtype=np.float)
  swig_vector.printFloatVector(my_array)
  swig_vector.printDoubleVector(my_array)
  swig_vector.printComplexVector(my_array)
  swig_vector.printLongVector(my_array)
  swig_vector.printIntVector(my_array)
  return True

if __name__ == "__main__":
  exit(not main())
