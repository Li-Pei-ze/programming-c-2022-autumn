#include <iostream>

using namespace std;
int n;
int main(int argc, char **argv)
{
	cin >> n;
	cout << "The next number for the number " << n << " is " << n + 1 << endl;
	cout << "The previous number for the number" << n << " is " << n - 1 << endl;
	return EXIT_SUCCESS;
}