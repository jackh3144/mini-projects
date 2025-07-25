#include <iostream>
using namespace std;

int main()
{
	double feet,metres;
	cout << "How many feet do you want to convert to metres?" << endl;
	cin >> feet;

	metres = feet / 3.28;

	cout << feet << " feet is equivelent to " << metres << " metres" << endl;

	return 0;
}