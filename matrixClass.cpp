#include <iostream>
#include "matrixClass.hpp"
using namespace std;

matrix::matrix(int row, int column){
    this->row = row;
    this->column = column;
}
matrix::matrix(vector< vector<int> > temp, int row, int column){
    elements = temp;
    this->row=row;
    this->column = column;
}
matrix::matrix(const matrix &obj){
    row = obj.row;
    column = obj.column;
    elements = obj.elements;
}
void matrix::takeElements(){
    for(int i=0; i<row; i++){
        vector<int> temp;
        for(int j=0; j<column; j++){
            int tempVal;
            cin >> tempVal;
            temp.push_back(tempVal);
        }
        elements.push_back(temp);
    }
}
vector< vector<int> > matrix::returnElement(){
    return elements;
}
int matrix::returnColumn(){
    return column;
}
int matrix::returnRow(){
    return row;
}
void matrix::updateMatrix(int row, int column){
    this->row = row;
    this->column = column;
}
void matrix::printMatrix(){
    for(int i=0; i<row; i++){
        cout << "[ ";
        for(int j=0; j<column; j++){
            cout << elements[i][j] << " ";
        }
        cout << "]";
        cout << "\n";
    }
    cout << "\n";
}