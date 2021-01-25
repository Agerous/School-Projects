#include <iostream>
#include "Header.h"
using namespace std;


int main() {

	Client users[2] = {};

	for (int i = 0; i < 2; i++) {
		users[i].enterInfo();
		cout << endl;
	}

	for (int i = 0; i < 2; i++) {
		cout << i + 1 << ") " << endl;
		users[i].displayInfo();
		cout << "_____________" << endl;
	}

}
