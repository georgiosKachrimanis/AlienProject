#ifndef ALIEN_H
#define ALIEN_H

using namespace std;

class Alien
{
	private:

		int weight;
		int height;
		char gender;

	public:
		
		Alien(int weight, int height, char gender);
		// Getters
		int getWeight() const;
		int getHeight() const;
		char getGender() const;
		int getPrestige() const;
		// Operators Overload!
		bool operator == (const Alien& other) const;
		bool operator != (const Alien& other) const;
		bool operator > (const Alien& other) const;
		bool operator >= (const Alien& other) const;
		bool operator < (const Alien& other) const;
		bool operator <= (const Alien& other) const;
		void operator = (Alien& other);
		Alien operator  + (const Alien& other) const;
};	
#endif // !ALIEN_H

