// Task8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int h1, m1, s1, h2, m2, s2;
int main()
{
	cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
	cout << (h2 - h1) * 3600 + (m2 - m1) * 60 + s2 - s1 << endl;
	return EXIT_SUCCESS;
}
