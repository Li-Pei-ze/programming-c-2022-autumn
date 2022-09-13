// Task7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main(int argc, char **argv)
{
	int n = 0;
	int m = 0;
	int k = 0;
	
	std::cin >> n >> m >> k;
	if (k < n * m && ((k % n) == 0) || (k % m == 0))
	{
		std::cout << "YES" << std::endl;
	}
	else
	{
		std::cout << "NO" << std::endl;
	}
	return EXIT_SUCCESS;
}