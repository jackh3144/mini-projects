#include <iostream>
using namespace std;

int main() {
	double f,m;
	int counter;

	counter = 0;

	for( f = 1.0; f <= 100.0; f++) {
		m = f / 3.28;
		cout << f << " feet is equivelent to " << m << " metres." << endl;

		counter ++;

		if( counter == 10) {
			cout << "" << endl;
			counter = 0;
		}
	}
	return 0;
}