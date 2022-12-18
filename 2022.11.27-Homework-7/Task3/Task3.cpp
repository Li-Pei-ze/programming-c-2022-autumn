#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    std::cin >> n;
    int** a1 = new int* [n] { 0 };
    for (int i = 0; i < n; ++i)
    {
        a1[i] = new int[n] { 0 };
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            std::cin >> a1[i][j];
        }
    }
    int** a2 = new int* [n] { 0 };
    for (int i = 0; i < n; ++i)
    {
        a2[i] = new int[n] { 0 };
    }
    std::cout << std::endl;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j <= n - i - 1; ++j)
        {
            if (i + j < n - 1)
            {
                a2[i][j] = a1[n - 1 - j][n - 1 - i];
                a2[n - 1 - j][n - 1 - i] = a1[i][j];
            }
            if (i + j == n - 1)
            {
                a2[i][j] = a1[i][j];
            }
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            std::cout << a2[i][j] << " ";
        }
        std::cout << std::endl;
    }
    for (int i = 0; i < n; ++i)
    {
        delete[] a1[i];
    }
    for (int i = 0; i < n; ++i)
    {
        delete[] a2[i];
    }
    delete[] a1;
    delete[] a2;
    return EXIT_SUCCESS;
}