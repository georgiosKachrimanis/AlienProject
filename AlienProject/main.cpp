/*
	This is a simple project to get use to overloading operators of classes!
	It is video 108 from the Udemy course : The complete C++ Developer Course!

*/

#include "Alien.h"
#include <iostream>

using namespace std;

int main()
{

	
	Alien alien1(120, 50, 'M');
	Alien alien2(200, 55, 'M');
	Alien alien3(150, 60, 'F');

	Alien newAlienBaby1 = alien1 + alien2;
	Alien newAlienBaby2 = alien2 + alien3;
	Alien newAlienBaby3 = alien1 + alien2;
	Alien newAlienBaby4 = alien2 + alien3;

	cout << "Equal" << endl;
	cout << "newAlienBaby1 == newAlienBaby2? \n\t" << boolalpha << (newAlienBaby1 == newAlienBaby2) << endl;
	cout << "newAlienBaby2 == newAlienBaby3?  \n\t" << boolalpha << (newAlienBaby2 == newAlienBaby3) << endl;
	cout << "newAlienBaby3 == newAlienBaby4?  \n\t" << boolalpha << (newAlienBaby3 == newAlienBaby4) << endl;
	cout << "newAlienBaby1 == newAlienBaby3?  \n\t" << boolalpha << (newAlienBaby1 == newAlienBaby3) << endl;
	cout << "newAlienBaby1 == newAlienBaby4?  \n\t" << boolalpha << (newAlienBaby1 == newAlienBaby4) << endl;
	cout << "newAlienBaby2 == newAlienBaby4?  \n\t" << boolalpha << (newAlienBaby1 == newAlienBaby2) << endl;

	cout << "Not Equal" << endl;
	cout << "newAlienBaby1 != newAlienBaby2? \n\t" << boolalpha <<	(newAlienBaby1 != newAlienBaby2) << endl;
	cout << "newAlienBaby2 != newAlienBaby3?  \n\t" << boolalpha << (newAlienBaby2 != newAlienBaby3) << endl;
	cout << "newAlienBaby3 != newAlienBaby4?  \n\t" << boolalpha << (newAlienBaby3 != newAlienBaby4) << endl;
	cout << "newAlienBaby1 != newAlienBaby3?  \n\t" << boolalpha << (newAlienBaby1 != newAlienBaby3) << endl;
	cout << "newAlienBaby1 != newAlienBaby4?  \n\t" << boolalpha << (newAlienBaby1 != newAlienBaby4) << endl;
	cout << "newAlienBaby2 != newAlienBaby4?  \n\t" << boolalpha << (newAlienBaby1 != newAlienBaby2) << endl;
	cout << endl << endl;
	cout << "Baby1 > Baby2" << endl;
	cout << "newAlienBaby1 > newAlienBaby2? \n\t" << boolalpha << (newAlienBaby1 > newAlienBaby2) << endl;
	cout << "newAlienBaby2 > newAlienBaby3?  \n\t" << boolalpha << (newAlienBaby2 > newAlienBaby3) << endl;
	cout << "newAlienBaby3 > newAlienBaby4?  \n\t" << boolalpha << (newAlienBaby3 > newAlienBaby4) << endl;
	cout << "newAlienBaby1 > newAlienBaby3?  \n\t" << boolalpha << (newAlienBaby1 > newAlienBaby3) << endl;
	cout << "newAlienBaby1 > newAlienBaby4?  \n\t" << boolalpha << (newAlienBaby1 > newAlienBaby4) << endl;
	cout << "newAlienBaby2 > newAlienBaby4?  \n\t" << boolalpha << (newAlienBaby1 > newAlienBaby2) << endl;

	cout << endl << endl;
	cout << "Baby1 < Baby2" << endl;
	cout << "newAlienBaby1 < newAlienBaby2? \n\t" << boolalpha <<  (newAlienBaby1 < newAlienBaby2) << endl;
	cout << "newAlienBaby2 < newAlienBaby3?  \n\t" << boolalpha << (newAlienBaby2 < newAlienBaby3) << endl;
	cout << "newAlienBaby3 < newAlienBaby4?  \n\t" << boolalpha << (newAlienBaby3 < newAlienBaby4) << endl;
	cout << "newAlienBaby1 < newAlienBaby3?  \n\t" << boolalpha << (newAlienBaby1 < newAlienBaby3) << endl;
	cout << "newAlienBaby1 < newAlienBaby4?  \n\t" << boolalpha << (newAlienBaby1 < newAlienBaby4) << endl;
	cout << "newAlienBaby2 < newAlienBaby4?  \n\t" << boolalpha << (newAlienBaby1 < newAlienBaby2) << endl;
	
	return 0;
}