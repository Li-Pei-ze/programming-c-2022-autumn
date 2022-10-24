#include <iostream>

int mid = 0;

int count(char* s1, int i)
{
	if (s1[i] == 0)
	{
		return 0;
	}

	return count(s1, i + 1) + 1;
}

void be(char* s1, char* s2, int i)
{
	if (s1[i] == 0)
	{
		return;
	}

	if (i < mid)
	{
		s2[2 * i] = '(';
		s2[2 * i + 1] = s1[i];
	}
	else
	{
		s2[2 * i] = s1[i];
		s2[2 * i + 1] = ')';
	}

	be(s1, s2, i + 1);
}

void bo(char* s1, char* s2, int i)
{
	if (s1[i] == 0)
	{
		s2[2 * i] = ')';
		return;
	}

	if (i <= mid)
	{
		s2[2 * i] = '(';
		s2[2 * i + 1] = s1[i];
	}
	else
	{
		s2[2 * i] = ')';
		s2[2 * i + 1] = s1[i];
	}

	bo(s1, s2, i + 1);
}

int main(int argc, char **argv)
{
	char s1[2001]{ 0 };
	char s2[2001]{ 0 };
	int length = 0;

	std::cin >> s1;

	length = count(s1, 0);
	mid = length / 2;

	if (length % 2 == 0)
	{
		be(s1, s2, 0);
	}
	else
	{
		bo(s1, s2, 0);
	}

	std::cout << s2;

	return EXIT_SUCCESS;
}