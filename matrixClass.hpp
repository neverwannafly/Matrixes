#ifndef matrixClass_hpp
#define matrixClass_hpp

#include <vector>

class matrix{
private:
    int row, column;
    std::vector< std::vector<int> > elements;
public:
    matrix(int row, int column);
    matrix(std::vector< std::vector<int> > temp, int row, int column);
    matrix(const matrix &obj);
    void takeElements();
    std::vector< std::vector<int> > returnElement();
    int returnColumn();
    int returnRow();
    void updateMatrix(int row, int column);
    void printMatrix();
};

#endif