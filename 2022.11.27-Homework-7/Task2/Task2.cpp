﻿#include <iostream>

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
        for (int j = 0; j < n; ++j)
        {
            a2[i][j] = a1[j][i];
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