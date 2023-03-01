#include"use2Dmatrix.h"

void initarray(int temperatures[row][col]) {
	for (int x = 0; x < row; x++) {
		for (int y = 0; y < col; y++) {
			temperatures[x][y] = 0;
		}
	}
}
void entervalues(int temperatures[row][col]) {
	for (int x = 0; x < row; x++) {
		for (int y = 0; y < col; y++) {
			cin>>temperatures[x][y];
		}
	}
}
void avg_temp_each_day(int temperatures[row][col]) {
	for (int x = 0; x < row; x++) {
		float sum = 0;
		for (int y = 0; y < col; y++) {
			sum+= temperatures[x][y];
		}
			cout << "Average temperature of day "<< x+1 << " " << sum/3 << endl;
		
	}
}
void avg_temp_time_of_day(int temperatures[row][col]) {
	for (int x = 0; x < row; x++) {
		float sum = 0;
		for (int y = 0; y < col; y++) {
			sum += temperatures[y][x];
		}
		if (x == 0) {
			cout << "The average temperature in the morning is " <<sum/3<< endl;
		}
		if (x == 1) {
			cout << "The average temperature in the midday is " << sum/3 << endl;
		}
		if (x == 2) {
			cout << "The average temperature in the night is " << sum/3 << endl;
		}
	}
}
void output(int temperatures[row][col]) {
	cout << "Initiating the Array" << endl;
	initarray(temperatures);
	cout << "Enter Values:";
	entervalues(temperatures);
	cout << "Calculating the average temperature of each day" << endl;	avg_temp_each_day(temperatures);	cout << "Calculate the average temperature of morning, midday and night" << endl;	avg_temp_time_of_day(temperatures);

}