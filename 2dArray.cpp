#include <iostream>
#include <vector>
using namespace std;

void PrintArrayRow(int Array[][3], int row, int col)
{

    cout << "Printing Array By Row\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << Array[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

void PrintArrayCol(int Array[][3], int row, int col)
{
    cout << "Printing Array By Column\n";
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << Array[j][i] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

int main()
{

    int rows = 3;
    int cols = 3;

    int newArray[rows][cols] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    cout << "Printing an array:" << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << newArray[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Printing Upper diagonal : " << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i <= j)
            {
                cout << newArray[i][j] << " ";
            }
        }
        cout << endl;
    }

    cout << "Printing Lower diagonal : " << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i >= j)
            {
                cout << newArray[i][j] << " ";
            }
        }
        cout << endl;
    }

    cout << "Printing SECOND diagonal : " << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i >= j)
            {
                cout << newArray[i][j] << " ";
            }
        }
        cout << endl;
    }

    // int arr[3][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9}};
    // int col = 3;
    // int row = 3;

    // PrintArrayRow(arr, row, col);

    // PrintArrayCol(arr, row, col);

    // // vector 1d array

    // vector<int> n;
    // cout << "Printing an vector array: " << endl;
    // n.push_back(3);
    // n.push_back(3);
    // n.push_back(3000);
    // n.push_back(3);
    // n.push_back(10);

    // for (int i = 0; i < n.size(); i++)
    // {
    //     /* code */
    //     cout << n[i] << " ";
    // }

    // // vector 2d array
    // cout << endl
    //      << "\nprinting 2d array in vector" << endl;
    // vector<vector<int>> c(5, vector<int>(10, 3));

    // for (int i = 0; i < c.size(); i++)
    // {
    //     for (int j = 0; j < c[i].size(); j++)
    //     {
    //         cout << c[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}