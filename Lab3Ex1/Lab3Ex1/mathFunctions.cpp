#include "mathFunctions.h"

void output() {
	char option;
	cout << "a) Calculate square root" << endl;
	cout << "b) Calculate subtraction" << endl;
	cout << "c) Calculate division" << endl;
	cout << "Option : ";
	cin >> option;
	if (option == 'a') {
		squareroot();
	}
	else if (option == 'b') {
		substraction();
	}
	else if (option == 'c'){
		division();
	}
	else {
		cout << "WRONG INPUT";
	}
}
void squareroot() {
	float num;
	cout << "Enter number: ";
	cin >> num;
	cout << "Result: " << sqrt(num) << endl;
}
void substraction() {
	float num,num2;
	cout << "Enter numbers: ";
	cin >> num >> num2;
	cout << "Result: " << num - num2 << endl;
}
void division() {
	float num, num2;
	cout << "Enter numbers: ";
	cin >> num >> num2;
	cout << "Result: " << num / num2 << endl;
}