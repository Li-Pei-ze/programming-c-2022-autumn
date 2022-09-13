// Task5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

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
	/*
	res *= (double)100000.0;
	//std::cout << res << std::endl;
	int res2 = (int)res;
	//std::cout << res2 << std::endl;
	std::cout << (int)(res2 / 100000) << "," << (res2 / 10000) % 10 << (res2 / 1000) % 10 << (res2 / 100) % 10 << (res2 % 10) << std::endl;
	*/
	return EXIT_SUCCESS;
}
