#include"use2Dmatrix.h"
int main() {
	int op;
	do {
		int student[3][3];
		cout << "1.Initialize array." << endl;
		cout << "2.Enter Values." << endl;
		cout << "3.Calculate the average score of each student." << endl;
		cout << "4.Calculate the average score of each test." << endl;
		cout << "5.Stop\n\n";
		cin >> op;
		if (op == 1) {
			initarr(student);
		}
		else if (op == 2) {
			add_val(student);
		}
		else if (op == 3) {
			stud_avg(student);
		}
		else if (op == 4) {
			test_avg(student);
		}
		else {
			cout << "Stopping.." << endl;
			break;
		}
	} while (op != 5);
}