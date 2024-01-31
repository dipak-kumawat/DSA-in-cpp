#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 9;
    cout << "Given array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "Reverse of Array is: ";
    for (int i = 0; i < n; i++)
    {
        int j = n - 1;
        arr[i] = arr[j];
        j--;
    }
}