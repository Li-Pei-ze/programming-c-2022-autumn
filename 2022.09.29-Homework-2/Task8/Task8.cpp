#include <iostream>

int main(int argc, char* argv[])
{
    int p = 0;
    int q = 0;
    int r = 0;
    int a = 0;
    int b = 0;
    int c = 0;

    std::cin >> p >> q >> r;

    if (p >= q && p >= r)
    {
        a = p;
        b = (q >= r) ? q : r;
        c = (q <= r) ? q : r;
    }
    if (q >= p && q >= r)
    {
        a = q;
        b = (p >= r) ? p : r;
        c = (p <= r) ? p : r;
    }
    if (r >= q && r >= p)
    {
        a = r;
        b = (p >= q) ? p : q;
        c = (p <= q) ? p : q;
    }
    if (a >= b && a >= c && a < b + c)
    {
        if (a * a < b * b + c * c)
        {
            std::cout << "acute" << std::endl;
        }
        else if (a * a == b * b + c * c)
        {
            std::cout << "right" << std::endl;
        }
        else
        {
            std::cout << "obtuse" << std::endl;
        }
    }
    else
    {
        std::cout << "impossible" << std::endl;
    }
    return EXIT_SUCCESS;
}