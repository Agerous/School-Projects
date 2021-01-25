class Client { // all the variables/data below are automatically private because we declared a 'class' type.
	char name[21];
	char address[36];
	int accNum;
	float balance;
	char accType[2];

public: // those functions are here to help us access the data above.
	void enterInfo();
	void displayInfo() const;
	bool checkValidData();
	void resetData(bool valid);
	void debugCheck();
};