%module swig_vector

%{
#define SWIG_FILE_WITH_INIT
#define SWIG_PYTHON_CAST_MODE
#include "swig_vector.h"
%}

%include std_vector.i
%include std_complex.i

typedef unsigned long              uint64_t;
typedef long                       int64_t;


%template(IntVector) std::vector<int>;
%template(LongVector) std::vector<long>;
%template(UInt64Vector) std::vector<uint64_t>;
%template(DoubleVector) std::vector<double>;
%template(FloatVector) std::vector<float>;
%template(ComplexVector) std::vector< std::complex<double> >;

%include "swig_vector.h"
