#include <iostream>
using namespace std;

int length(char n[], int size)
{
    int i = 0;
    int len = 0;
    while (n[i] != '\0')
    {
        /* code */
        len++;
        i++;
    }
    return len;
}

int main()
{
    char n[100];
    cout << "enter your name: ";
    cin >> n;
    cout << "your name is : " << n<<endl;
    cout << "length of your name is " << length(n, 100);


    for (in t i = 0; i < 6; i++){
        cout <<n <<"\n";
    }
    return 0;
}