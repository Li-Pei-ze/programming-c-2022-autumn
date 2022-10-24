#include <iostream>

char getm(char* s, int i)
{
	if (s[i+1] == 0)
	{
		return s[i];
	}
	if (s[i] > s[i+1])
	{
		s[i+1] = s[i];
	}
	getm(s, i + 1);
}
int main(int argc, char **argv)
{
	char s[1001]{ 0 };

	std::cin >> s;
	std::cout << getm(s, 0);

	return EXIT_SUCCESS;
}


