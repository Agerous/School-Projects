#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
#include "Header.h"

using namespace std;

void clearKeys() {
	while (getchar() != '\n');
}

void Client::enterInfo() { // declaring function definiton 
	bool valid;
	

	cout << "Please enter your first and last name: ";
	cin.getline(name, 20);
	cout << "Please enter your address: ";
	cin.getline(address, 35);
	cout << "Please enter account number: ";
	cin >> accNum;
	cout << "Please enter the balance: ";
	cin >> balance;
	cout << "Enter account type [D]ebit / [C]redit: ";
	cin >> accType;
	::clearKeys(); // accessing global function.
	valid = checkValidData();
	resetData(valid);
}

void Client::displayInfo()  const{
	
	
	if (accNum > 0) { // Checking if the data stored is indeed valid and is what we intend to print.
		cout << "* Accountholder's name: " << name << endl;
		cout << "* Accountholder's address: " << address << endl;
		cout << "* Account number: " << accNum << endl;
		printf("* Balance: %.2lf\n", balance);
		cout << "* Account type: " << ((strcmp(accType, "d") == 0 ? " Debit" : " Credit")) << endl;
	}
	else { // If the data stored is not what we are looking for, display the message below.
		cout << "*** Data Error! Entered information was invalid." << endl;
	}

}

bool Client::checkValidData() {
	
	bool valid = false;

	if (accNum < 0) {
		valid = false;
	}
	else {
		valid = true;
	}

	if (valid) {
		return true;
	}
	else {
		return false;
	}


}

void Client::resetData(bool valid) {

	if (!valid) {
		accNum = 0;
		strcpy(name, "\0");
		strcpy(address, "\0");
		strcpy(accType, "\0");
		balance = 0;
		
	}

}


void Client::debugCheck() {
	cout << name << endl;
	cout << address << endl;
	cout << accNum << endl;
	cout << balance << endl;
	cout << accType << endl;
}
