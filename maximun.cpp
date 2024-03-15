#include <iostream>
#include <climits> // Include this for INT_MIN
using namespace std;

int maxCur(int n, int x, int y, int z)
{
    if (n == 0)
        return 0;

    if (n < 0)
        return INT_MIN;

    // Recursive calls should subtract the step taken and not use the same values
    int option1 = 1 + maxCur(n - x, x, y, z);
    int option2 = 1 + maxCur(n - y, x, y, z);
    int option3 = 1 + maxCur(n - z, x, y, z);

    // Return the maximum of all three options.
    int final = max(option1, max(option2, option3));
    return final;
}

int main()
{
    int n = 12;
    int x = 2;
    int y = 3;
    int z = 4;

    cout << "The maximum number of steps that can be taken from point A to B is: " << maxCur(n, x, y, z) << endl;

    return 0;
}
