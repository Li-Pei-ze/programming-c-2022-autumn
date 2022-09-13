#include <iostream>

int main(int argc, char **argv)
{
    int speed = 0;
    int ti = 0;
    std::cin >> speed >> ti;
    int ans = (speed * ti) % 109;
    ans += (ans < 0) * 109;
    std::cout << ans << std::endl;
    return EXIT_SUCCESS;
}