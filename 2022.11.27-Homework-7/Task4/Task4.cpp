#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    int m = 0;
    std::cin >> n >> m;
    int** mas = new int* [n] { 0 };
    for (int i = 0; i < n; ++i)
    {
        mas[i] = new int[m] { 0 };
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            std::cin >> mas[i][j];
        }
    }
    int** mas_1 = new int* [n] { 0 };
    for (int i = 0; i < n; ++i)
    {
        mas_1[i] = new int[m] { 0 };
    }
    std::cout << std::endl;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            mas_1[i][j] = mas[i][m - 1 - j];
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            std::cout << mas_1[i][j] << " ";
        }
        std::cout << std::endl;
    }
    for (int i = 0; i < n; ++i)
    {
        delete[] mas[i];
    }
    for (int i = 0; i < n; ++i)
    {
        delete[] mas_1[i];
    }
    delete[] mas;
    delete[] mas_1;
    return EXIT_SUCCESS;
}