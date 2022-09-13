// Task1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main(int argc, char** argv)
{
	int n = 0;
	std::cin >> n;
	int a[1001]{};
	for (int i = 1; i <= n; ++i)
	{
		std::cin >> a[i];
	}
	int x = 0;
	std::cin >> x;
	int tot = 0;
	for (int i = 1; i <= n; ++i)
	{
		if (a[i] == x)
			++tot;
	}
	std::cout << tot << std::endl;
	return EXIT_SUCCESS;
}