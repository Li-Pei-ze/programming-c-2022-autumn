#include <iostream>
#include <ctime>
#include "Animal.h"

void deleteAnimal(Animal** arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		delete arr[i];
	}
	delete[] arr;
}
int main(int argc, char** argv)
{
	srand(time(0));
	std::string names[6] = { "aa", "qq", "ww", "ee", "rrr", "yhhy"};
	std::string types[6] = { "Q", "W", "E", "R", "T", "X"};
	Animal** arr = new Animal * [100];

	for (int i = 0; i < 100; ++i)
	{
		arr[i] = new Animal;
		int power = rand() % 11 + 1;
		int name = rand() % 6;
		int type = rand() % 6;
		arr[i]->setName(names[name]);
		arr[i]->setType(types[type]);
		arr[i]->setPower(power);
	}

	std::cout << "Animals:" << std::endl;

	for (int i = 0; i < 100; ++i)
	{
		std::cout << i + 1 << " ";
		arr[i]->getInfo();
	}

	int j = -1;
	int prevpow = 0;

	for (int i = 0; i < 100; ++i)
	{
		if (arr[i]->getPower() > prevpow)
		{
			arr[i]->Mighter(prevpow);
			j = i;
			prevpow = arr[i]->getPower();
		}
		else
		{
			j = i;
			prevpow = arr[i]->getPower();
		}
	}

	std::cout << "Winner: " <<  std::endl;
	arr[j]->getInfo();
	deleteAnimal(arr, 100);
	return EXIT_SUCCESS;
}

