#include <iostream>

int doit(int n, int** arr, int k)
{
    int number = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i][0] == k)
        {
            number += 1;
        }
        if (arr[i][1] == k)
        {
            number += doit(n, arr, arr[i][0]);
        }
    }
    return number;
}

int main(int argc, char** argv)
{
    int n = 0;
    int k = 0;
    std::cin >> n;
    int** arr{ 0 };
    arr = new int* [n];
    for (int i = 0; i < n; ++i)
    {
        arr[i] = new int[2];
    }
    for (int i = 0; i < n; ++i)
    {
        std::cin >> arr[i][0] >> arr[i][1];
    }
    std::cin >> k;
    std::cout << doit(n, arr, k) << std::endl;
    for (int i = 0; i < n; ++i)
    {
        delete[] arr[i];
    }
    delete[] arr;
    return EXIT_SUCCESS;
}