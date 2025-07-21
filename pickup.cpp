#include <iostream>
using namespace std;

int main() {
	int student[5] = {43 , 22 , 14 , 77 , 23};
	int n;

	cout << "There are 5 students in a class please select a number of students" << endl;
	do {
		cin >> n;
		if ( n >= 1 && n <= 5) {
			if ( n == 1) {
				 cout << "You have selected one student" << endl;
			}
			else {
				cout << "You have selected " << n << " students" << endl;
			}
		}
		else {
			cout << "Invalid input please select again" << endl;
		}

	} while ( n < 1 || n > 5);

	int sum = 0;

	for ( int i = 1; i < n; i++) {
		sum += student[i];
	}
	float average = float(sum) / n;
	cout << "The average mark of the " << n << " students are " << average << endl;

	int lowest = student[1];
	int highest = student[1];

	for ( int j = 1; j < n; j++) {
		if ( student[j] > highest) highest = student[j];
		if ( student[j] < lowest) lowest = student[j];
	}
	cout << "The highest student had " << highest << " marks" << endl;
	cout << "The lowest student had " << lowest << " marks" << endl;
	cout << "The student who scored above average were" << endl;

	for ( int k = 1; k < n; k++) {
		if ( average < student[k]) {
			cout << "-student " << k << ":" << endl;
		}
	}

	return 0;
}
