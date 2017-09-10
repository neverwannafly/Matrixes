#include <vector>
#include <iostream>
#include "operationsFile.hpp"
using namespace std;

matrix matrixOperations::add(matrix A, matrix B){
    vector< vector<int> > matA = A.returnElement();
    vector< vector<int> > matB = B.returnElement();
    vector< vector<int> > addMatrix;
    if(A.returnRow()==B.returnRow()&&A.returnColumn()==B.returnColumn()){
        for(int i=0; i<A.returnRow(); i++){
            vector<int> temp;
            for(int j=0; j<A.returnColumn(); j++){
                int addn;
                addn = matA[i][j]+matB[i][j];
                //cout << addn << " ";
                temp.push_back(addn);
            }
            //cout << "\n";
            addMatrix.push_back(temp);
        }
    }else{
        throw -1;
    }
    matrix newMatrix(addMatrix, A.returnRow(), A.returnColumn());
    return newMatrix;
}
matrix matrixOperations::subtract(matrix A, matrix B){
    vector< vector<int> > matA = A.returnElement();
    vector< vector<int> > matB = B.returnElement();
    vector< vector<int> > subMatrix;
    if(A.returnRow()==B.returnRow()&&A.returnColumn()==B.returnColumn()){
        for(int i=0; i<A.returnRow(); i++){
            vector<int> temp;
            for(int j=0; j<A.returnColumn(); j++){
                int subn;
                subn = matA[i][j]-matB[i][j];
                temp.push_back(subn);
            }
            subMatrix.push_back(temp);
        }
    }else{
        throw -1;
    }
    matrix newMatrix(subMatrix, A.returnRow(), A.returnColumn());
    return newMatrix;
}
matrix matrixOperations::multiply(matrix A, matrix B){
    int p = A.returnColumn();
    int q = B.returnRow();
    vector< vector<int> > matA = A.returnElement();
    vector< vector<int> > matB = B.returnElement();
    vector< vector<int> > multMatrix;
    if(p==q){
        for(int i=0; i<A.returnRow(); i++){
            vector<int> temp;
            for(int j=0; j<B.returnColumn(); j++){
                int mult=0;
                for(int x=0; x<p ; x++){
                    mult += matA[i][x]*matB[x][j];
                }
                temp.push_back(mult);
            }
            multMatrix.push_back(temp);
        }
    }else{
        throw -1;
    }
    matrix newMatrix(multMatrix, A.returnRow(), B.returnColumn());
    return newMatrix;

}
matrix matrixOperations::transpose(matrix A){ 
    vector< vector<int> > transpMatrix;
    vector< vector<int> > origMatrix = A.returnElement();
    for(int j=0; j<A.returnColumn(); j++){
        vector<int> temp;
        for(int i=0; i<A.returnRow(); i++){
            int tempVal;
            tempVal = origMatrix[i][j];
            temp.push_back(tempVal);
        }
        transpMatrix.push_back(temp);
    }
    matrix newMatrix(transpMatrix, A.returnColumn(), A.returnRow());
    return newMatrix;
}