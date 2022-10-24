#include <iostream>

int main(int argc, char **argv)
{
	int n = 0;
	std::cin >> n;
	double fac = 1.0;
	double res = 1.0;
	for (int i = 1; i <= n; ++i)
	{
		res += (double)1.0 / fac;
		fac *= (double)i;
	}
	printf("%.5lf\n", res);
	return EXIT_SUCCESS;
}
