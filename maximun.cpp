#include <iostream>

int main()
{
    char startChar = 'A';
    int rows = 4;

    for (int i = 0; i < rows; i++)
    {
        char printChar = startChar + i;
        for (int j = 0; j < i; j++)
        {
            std::cout << " ";
        }
        for (int k = i; k < rows; k++)
        {
            std::cout << printChar++;
        }
        std::cout << std::endl;
    }

    return 0;
}