#include <iostream>

int main(int argc, char **argv)
{
    int year;
    std::cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                std::cout << "YES" << std::endl;
            else
                std::cout << "NO" << std::endl;
        }
        else
            std::cout << "YES" << std::endl;
    }
    else
        std::cout << "NO" << std::endl;
	return EXIT_SUCCESS;
}
