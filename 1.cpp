#include <iostream>
// #include "hero.cpp"
using namespace std;

int main()
{

    string name;

    name = "My name is king khan";
    name.rbegin();
    cout << name;
    // cout << "Enter your name: ";
    // cin>> name;

    // cout  << "Your name is: "<< name << endl;

    // for (int i = 0; i < name.length() -1; i++)
    // {
    //     /* code */
    //     cout << "index of "<<i << " is "<< name[i] <<endl;
    // }

    // cout << "index of 6 element is : "<< name[6]<< endl;

    // int number = (int)name[6];
    // cout << "index of 6 element is : "<< number<< endl;

    return 0;
}

// // C++ program to implement iterative Binary Search
// #include <bits/stdc++.h>
// using namespace std;

// // An iterative binary search function.
// int binarySearch(int arr[], int l, int r, int x)
// {
//     while (l <= r)
//     {
//         int m = l + (r - l) / 2;

//         // Check if x is present at mid
//         if (arr[m] == x)
//             return m;

//         // If x greater, ignore left half
//         if (arr[m] < x)
//             l = m + 1;

//         // If x is smaller, ignore right half
//         else
//             r = m - 1;
//     }

//     // If we reach here, then element was not present
//     return -1;
// }

// // Driver code
// int main()
// {
//     int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
//     int x = 100;
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int result = binarySearch(arr, 0, n - 1, x);
//     // (result == -1)?
//     //     cout << "Element is not present in array":
//     //     cout << "Element is present at index " << result;
//     // return 0;
//     if (result == -1)
//     {
//         cout << "Element is not present in array";
//     }
//     else
//     {
//         cout << "Element is present at index " << result;
//     }

//     return 0;
// }
