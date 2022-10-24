#include <iostream>

bool check(int n)
{
	if (n == 1)
	{
		return true;
	}
	if (n < 1)
	{
		return false;
	}
	else
	{
		return (check(n - 5) || check(n - 3));
	}
}
int main(int argc, char **argv)
{
	int n = 0;
	std::cin >> n;
	if (check(n))
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
	return EXIT_SUCCESS;
}