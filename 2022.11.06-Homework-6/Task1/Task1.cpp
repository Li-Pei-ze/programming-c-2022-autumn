// Task1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main(int argc, char** argv)
{
	int a[1001]{ 0 };
	int n = 0;

	std::cin >> n;
	
	for (int i = 1; i <= n; ++i)
	{
		std::cin >> a[i];
	}
	for (int i = n; i >= 1; --i)
	{
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;
	return EXIT_SUCCESS;
}