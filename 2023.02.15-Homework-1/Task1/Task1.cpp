#include<iostream>
#include<string>

struct Animal
{
	std::string type;
	std::string name;
	int age;

	Animal(std::string type = "ssd", std::string name = "ABC", int age = 0)
	{
		this->type = type;
		this->name = name;
		this->age = age;
	}

	Animal(const Animal& creature)
	{
		this->type = creature.type;
		this->name = creature.name;
		this->age = creature.age;
	}

	~Animal()
	{
	}
};

void printAnimal(Animal anim)
{
	std::cout << "It\'s name is " << anim.name << '.' << std::endl;
	std::cout << anim.name << " is " << anim.type << '.' << std::endl;
	std::cout << "It is " << anim.age << " years old." << std::endl;
}

void ElderAnimal(Animal& anim)
{
	anim.age += 1;
}

int main(int argc, char* argv[])
{
	Animal check;
	ElderAnimal(check);
	printAnimal(check);
	return EXIT_SUCCESS;
}