#ifndef operationsFile_hpp
#define operationsFile_hpp

#include "matrixClass.hpp"

struct matrixOperations{
    matrix add(matrix A, matrix B);
    matrix subtract(matrix A, matrix B);
    matrix multiply(matrix A, matrix B);
    matrix transpose(matrix A);
};

#endif