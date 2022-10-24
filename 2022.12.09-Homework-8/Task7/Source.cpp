#include <iostream>

void star(char* s1, char* s2, int d)
{
	s2[2 * d] = s1[d];

	if (s1[d + 1] == 0)
	{
		return;
	}

	s2[2 * d + 1] = '*';

	star(s1, s2, d + 1);
}

int main(int argc, char* argv[])
{
	char s1[2001]{ 0 };
	char s2[2001]{ 0 };

	std::cin >> s1;

	star(s1, s2, 0);

	std::cout << s2;

	return EXIT_SUCCESS;
}


