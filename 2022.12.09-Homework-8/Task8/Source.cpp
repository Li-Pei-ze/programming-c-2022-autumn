#include <iostream>

std::string insbra(std::string s)
{
    if (s.length() == 1 || s.length() == 2)
    {
        return s;
    }
    return s.substr(0, 1) + "(" + insbra(s.substr(1, s.length() - 2)) + ")" + s.substr(s.length() - 1, 1);
}

int main(int argc, char* argv[])
{
    std::string s = "";
    std::cin >> s;
    std::cout << insbra(s) << std::endl;
    return EXIT_SUCCESS;
}