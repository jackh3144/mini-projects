#include <iostream>
using namespace std;

int main() {
	int i = 7 , input , tries = 0 , response;
	cout << "Please	guess the lucky number between 1-10" << endl;
	do {
		cin >> input;
		tries ++;

		if ( input < 1 || input > 10) {
			cout << "Invalid input try again" << endl;
			cout << "Please guess again" << endl;
		}
		else if (input < 7) {
			cout << "Too LOW! Try again" << endl;
			cout << "Please guess again" << endl;
		}
		else if (7 < input) {
			cout << "Too HIGH! Try again " << endl;
			cout << "Please guess again" << endl;
		}
		else {
			cout << "Correct guess!" << endl;
		}
	} while ( input != 7);

	if (tries == 1) {
		cout << "You took " << tries << " try to guess the correct number!" << endl;
	}
	else {
		cout << "You took " << tries << " tries to guess the correct number!" << endl;
	}
	cout << "Do you want to replay the game where the number is different? 1 is yes and 0 is no" << endl;
	do {
		cin >> response;

		if ( response == 1) {
			cout << "Lets play again!" << endl;
			int trials = 0 , counter;
	        cout << "Please	guess the lucky number between 1-10" << endl;
	        do {
		cin >> counter;
		trials ++;

		if ( counter < 1 || counter > 10) {
			cout << "Invalid input try again" << endl;
			cout << "Please guess again" << endl;
		}
		else if (counter < 2) {
			cout << "Too LOW! Try again" << endl;
			cout << "Please guess again" << endl;
		}
		else if (counter > 2) {
			cout << "Too HIGH! Try again " << endl;
			cout << "Please guess again" << endl;
		}
		else {
			cout << "Correct guess!" << endl;
		}
	} while ( counter != 2);

	cout << "You took " << trials << " tries to guess the correct number!" << endl;
	cout << "Game terminated" << endl;
		}
		else if ( response == 0) {
			cout << "Game terminated" << endl;

		}
		else if ( response < 0 || response > 1 ) {
			cout << "Invalid response please select again" << endl;
		}
	} while ( response == 1 );

	return 0;
}