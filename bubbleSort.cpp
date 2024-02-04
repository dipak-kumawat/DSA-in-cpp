#include <iostream>
using namespace std;
#include <vector>

int main()
{
    vector<int> v = {1, 5, 6, 7, 2, 3, 4};
    int n = v.size();

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    
    return 0;
}