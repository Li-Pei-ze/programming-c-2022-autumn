#include <iostream>

using namespace std;

int speed, ti;
int main(int argc, char **argv)
{
    cin >> speed >> ti;
    int ans = (speed * ti) % 109;
    if (ans < 0) ans += 109;
    cout << ans << endl;
    return EXIT_SUCCESS;
}