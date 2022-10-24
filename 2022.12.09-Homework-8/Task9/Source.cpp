#include <iostream>

std::string getstr(std::string s)
{
    if (s.length() == 1)
    {
        return s;
    }
    if (s.length() == 2)
    {
        return (s[0] == s[1]) ? "" : s;
    }
    if (s[0] == s[s.length() - 1])
    {
        return getstr(s.substr(1, s.length() - 2));
    }
    else
    {
        return s.substr(0, 1) + getstr(s.substr(1, s.length() - 2)) + s.substr(s.length() - 1, 1);
    }
}

int main(int argc, char** argv)
{
    std::string s = "";
    std::cin >> s;
    std::cout << getstr(s) << std::endl;
    return EXIT_SUCCESS;
}