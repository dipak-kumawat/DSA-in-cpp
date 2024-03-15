#include <iostream>
using namespace std;

void print(int num)
{
    if (num == 1)
    {
        cout << num << " ";
        return;
    }
    // cout<< num <<" ";

    print(num - 1);
}

void printArray(int arr[], int n)
{
    if (n == 0)
        return;
    cout << *arr << " ";
    printArray(arr + 1, n - 1);
}

void printNUmber(int num)
{
    if (num == 0)
    {
        return;
    }
}
int main()
{

    int number = 4352;

    // printNumber(number);

    cout << "Number of elements " << number % 10<< endl;
    cout <<"number is divisible by 10 "<< number / 10;

    // print(100);

    return 0;
}