#include "Alien.h"
#include <cstdlib>
#include <ctime>

int const GENDER_POINTS_MALE = 2;
int const GENDER_POINTS_FEMALE = 3;

Alien::Alien(int weight, int height, char gender)
{
	this->weight = weight;
	this->height = height;
	this->gender = gender;
}
// Getters
int Alien::getWeight() const
{
	return weight;
}

int Alien::getHeight() const
{
	return height;
}

char Alien::getGender() const
{
	return gender;
}

int Alien::getPrestige() const
{

	if (gender == 'M')
	{
		return (height * weight * GENDER_POINTS_MALE);
	}
	else
	{
		return (height * weight * GENDER_POINTS_FEMALE);
	}
}

// Operators overload!
bool Alien::operator == (const Alien& other) const 
{

	return getPrestige() == other.getPrestige();
}

bool Alien::operator != (const Alien& other) const
{
	return !(getPrestige() == other.getPrestige());
}
bool Alien::operator > (const Alien& other) const
{
	return getPrestige() > other.getPrestige();
}
bool Alien::operator >= (const Alien& other) const
{
	return getPrestige() >= other.getPrestige();
}
bool Alien::operator < (const Alien& other) const
{
	return getPrestige() < other.getPrestige();
}
bool Alien::operator <= (const Alien& other) const
{
	return getPrestige() <= other.getPrestige();
}
void Alien::operator = (Alien& other)
{
	this->gender = other.gender;
	this->weight = other.weight;
	this->height = other.height;

}
Alien Alien::operator  + (const Alien& other) const
{
	srand(time(0));
	int randomGenderNum = rand() % 10 + 1;
	int babyAlienHeight;
	int babyAlienWeight;
	char babyAlienGender;

	if (randomGenderNum < 8)
	{
		babyAlienGender = 'M';
	}
	else
	{
		babyAlienGender = 'F';
	}
	babyAlienHeight = (this->height + other.height) / 2;
	babyAlienWeight = (this->weight + other.weight) / 2;

	Alien newbornAlienBaby = Alien(babyAlienWeight, babyAlienHeight, babyAlienGender);

	return newbornAlienBaby;
}