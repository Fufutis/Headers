#include"mathFunctions.h"
int main() {
	char op;
	float num, num2, result;

	output();
	cin >> op;
	if (op == 'a') {
		cout << "Enter number : ";
		cin >> num;
	}
	else {
		cout << "Enter number : ";
		cin >> num >> num2;
	}
	if (op == 'a') {
		cout << "Result : "<< square(num) << endl;
	}
	else if (op == 'b') {
		cout << "Result : " << sumoftwo(num,num2) << endl;
	}
	else{
		cout << "Result : " << product(num,num2) << endl;
	}
}