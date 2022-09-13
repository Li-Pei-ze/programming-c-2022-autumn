#include <iostream>

using namespace std;

int speed, ti;
int main()
{
    cin >> speed >> ti;
    int ans = (speed * ti) % 109;
    if (ans < 0) ans += 109;
    cout << ans << endl;
    return 0;
}