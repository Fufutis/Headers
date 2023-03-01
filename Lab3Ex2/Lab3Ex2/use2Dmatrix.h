#ifndef USE2DMATRIX_H
#define USE2DMATRIX_H
#include <iostream>
using namespace std;
#define row 3
#define col 3
void initarray(int temperatures[row][col]);
void entervalues(int temperatures[row][col]);
void avg_temp_each_day(int temperatures[row][col]);
void avg_temp_time_of_day(int temperatures[row][col]);
void output(int temperatures[row][col]);
#endif // !USE2DMATRIX_H