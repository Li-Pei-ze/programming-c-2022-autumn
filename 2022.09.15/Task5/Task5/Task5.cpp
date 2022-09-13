#include<iostream>
using namespace std;
int a;
int main()
{
	cin >> a;
	cout << (int)(a / 100) + (int)(a / 10) % 10 + a % 10 << endl;
	return 0;
}