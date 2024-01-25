#include <iostream>
using namespace std;

void PrintArrayRow(int Array[][3], int row , int col ){

    cout<<"Printing Array By Row\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<Array[i][j]<< " ";
        }
        cout<<"\n";
        
    }
    cout<<"\n";
    
}


void PrintArrayCol(int Array[][3], int row , int col ){
    cout<<"Printing Array By Column\n";
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout<<Array[j][i]<< " ";
        }
        cout<<"\n";
        
    }
    cout<<"\n";
    
}





int main(){

    int arr[3][3] = {
        { 1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int col = 3;
    int row= 3;

    PrintArrayRow(arr, row, col);

    PrintArrayCol(arr, row , col);








    return 0;
}