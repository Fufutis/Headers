#include"use2Dmatrix.h"
int student[3][3];

void initarr(int student[3][3]) {
	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 3; y++) {
			student[x][y] = 0;
		}
	}
}
/*void initarr(int student[3][3]) {
	for (int x = 0; x < 3; x++) {
		cout << "Student "<<x;
		for (int y = 0; y < 3; y++) {
			cout << " " << student[x][y];
		}
	}
}*/

void add_val(int student[3][3]) {
	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 3; y++) {
			cin >> student[x][y];
		}
	}
}

void stud_avg(int student[3][3]) {
	cout << "The average score of each student:" << endl;
	for (int x = 0; x < 3; x++) {
		float sum = 0;
		for (int y = 0; y < 3; y++) {
			sum+= student[x][y];
		}
		cout << "Student " << x <<": " << sum/3 << endl;
	}
}

void test_avg(int student[3][3]) {
	cout << "The average score of each test:" << endl;
	for (int x = 0; x < 3; x++) {
		float sum = 0;
		for (int y = 0; y < 3; y++) {
			sum += student[y][x];
		}
		cout << "Test " << x << ": " << sum/3 << endl;
	}
}