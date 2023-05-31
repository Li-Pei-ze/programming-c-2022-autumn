#include <iostream>

int doit(int n, int** arr, int k)
{
    int tot = 0;
    for (int i = 0; i < n; ++i)
    {
        tot += (arr[i][0] == k);
        if (arr[i][1] == k)
        {
            tot += doit(n, arr, arr[i][0]);
        }
    }
    return tot;
}

int main(int argc, char** argv)
{
    int n = 0;
    
    std::cin >> n;
    int** arr = new int* [n] { 0 };
    for (int i = 0; i < n; ++i)
    {
        arr[i] = new int[2] { 0 };
    }
    for (int i = 0; i < n; ++i)
    {
        std::cin >> arr[i][0] >> arr[i][1];
    }
    int k = 0;
    std::cin >> k;
    std::cout << doit(n, arr, k) << std::endl;
    for (int i = 0; i < n; ++i)
    {
        delete[] arr[i];
    }
    delete[] arr;
    return EXIT_SUCCESS;
}
