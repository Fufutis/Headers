#include"use2Dmatrix.h"
int main() {
	int op;
	do {
		int student[3][3];
		output();
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