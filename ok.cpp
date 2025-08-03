#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double IntRate , Principal , PayPerYear , NumYears , Payment , numer , denom , b , e;
	cout << "Enter principal:";
	cin >> Principal;

	cout << "Enter intrest rate: ";
	cin >> IntRate;

	cout << "Enter pay per year: ";
	cin >> PayPerYear;

	cout << "Enter number of years: ";
	cin >> NumYears;

	numer = IntRate * (Principal / PayPerYear);
	b = (IntRate / PayPerYear) + 1;
	e = -(PayPerYear * NumYears);
	denom = (1 - pow(b, e)) ;
	Payment = numer / denom;

	cout << "You need to make " << Payment << "pounds per year" << endl;

	return 0;
}