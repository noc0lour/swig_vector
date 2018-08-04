%module swig_vector

%{
#define SWIG_FILE_WITH_INIT
#include "swig_vector.h"
%}

%include std_vector.i

typedef unsigned long              uint64_t;
typedef long                       int64_t;


%template(IntVector) std::vector<int>;
%template(UInt64Vector) std::vector<uint64_t>;
%template(DoubleVector) std::vector<double>;

%include "swig_vector.h"
