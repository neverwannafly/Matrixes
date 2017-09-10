#include <iostream>
#include "operationsFile.hpp"
#include "matrixClass.hpp"
using namespace std;

int main(){

    matrixOperations operations;
    
    cout << "Welcome to Matrix Wizard\n";

    int input;
    
    do{
        cout << "Choose your operation ->\n";
        cout << "1. Add A and B\n";
        cout << "2. Subtract B from A\n";
        cout << "3. Multiply A and B\n";
        cout << "4. Transpose a matrix\n";
        cout << "5. Exit\n";
        cin >> input;
        switch(input){
            case 1:{
                int row1, column1, row2, column2;
                cout << "Enter matrix 1 : \n";
                cout << "Rows : ";
                cin >> row1;
                cout << "Columns : ";
                cin >> column1;
                matrix obj1(row1,column1);
                obj1.takeElements();
                cout << "Enter matrix 2 : \n";
                cout << "Rows : ";
                cin >> row2;
                cout << "Columns : ";
                cin >> column2;
                matrix obj2(row2,column2);
                obj2.takeElements();
                matrix result(row1, column2);
                try{
                    result = operations.add(obj1, obj2);
                    result.printMatrix();
                }catch(int e){
                    cout << "Illegal operation ! Need matrixes of equal size!\n";
                }
                break;
            }
            case 2:{
                int row1, column1, row2, column2;
                cout << "Enter matrix 1 : \n";
                cout << "Rows : ";
                cin >> row1;
                cout << "Columns : ";
                cin >> column1;
                matrix obj1(row1,column1);
                obj1.takeElements();
                cout << "Enter matrix 2 : \n";
                cout << "Rows : ";
                cin >> row2;
                cout << "Columns : ";
                cin >> column2;
                matrix obj2(row2,column2);
                obj2.takeElements();
                matrix result(row1, column2);
                try{
                    result = operations.subtract(obj1, obj2);
                    result.printMatrix();
                }catch(int e){
                    cout << "Illegal operation ! Need matrixes of equal size!\n";
                }
                break;
            }
            case 3:{
                int row1, column1, row2, column2;
                cout << "Enter matrix 1 : \n";
                cout << "Rows : ";
                cin >> row1;
                cout << "Columns : ";
                cin >> column1;
                matrix obj1(row1,column1);
                obj1.takeElements();
                cout << "Enter matrix 2 : \n";
                cout << "Rows : ";
                cin >> row2;
                cout << "Columns : ";
                cin >> column2;
                matrix obj2(row2,column2);
                obj2.takeElements();
                matrix result(row1, column2);
                try{
                    result = operations.multiply(obj1, obj2);
                    result.printMatrix();
                }catch(int e){
                    cout << "Illegal Operation ! Incompatible Matrixes\n";
                }
                break;
            }
            case 4:{
                int row, column;
                cout << "Enter matrix : \n";
                cout << "Rows : ";
                cin >> row;
                cout << "Columns : ";
                cin >> column;
                matrix obj(row,column);
                obj.takeElements();
                matrix result(row, column);
                result = operations.transpose(obj);
                result.printMatrix();
                break;
            }
            case 5:
                break;
        }
    }while(input!=5);
    
    return 0;
}
