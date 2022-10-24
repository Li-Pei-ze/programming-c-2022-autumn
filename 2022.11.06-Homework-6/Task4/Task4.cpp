// Task4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <algorithm>

int main(int argc, char** argv)
{
	int a[1001]{ 0 };
	int n = 0;

	std::cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		a[i] = i;
	}

	int A;
	int B;
	int C;
	int D;
	
	std::cin >> A >> B >> C >> D;
	

	for (int i = A; i < B - ((B - A) >> 1); ++i)
		std::swap(a[i], a[B - i + A]);

	for (int i = C; i < D - ((D - C) >> 1); ++i)
		std::swap(a[i], a[D - i + C]);

	for (int i = 1; i <= n; ++i)
		std::cout << a[i] << " ";
	return EXIT_SUCCESS;
}
