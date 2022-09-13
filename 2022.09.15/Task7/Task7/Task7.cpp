#include <iostream>
using namespace std;
int a, b, t;
int main()
{
	cin >> a >> b;
	t = a;
	a = b;
	b = t;
	cout << a << " " << b << endl;
	return 0;
}
