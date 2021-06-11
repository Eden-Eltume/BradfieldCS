/*
Problem - a program that takes the number of weeks (20) and translate it to days
Example - 20 weeks = 20 & 7 days = 140 days
Data structures - int because we want whole numbers
Algorithm:
			1. set variable to the number of weeks
			2. set constant for number of days
			3. multiply the number of weeks by days
			4. Output the result
Code
*/

#include <iostream>
using namespace std;

int main (){
	int number_of_weeks;
	int days_in_weeks;

	number_of_weeks = 20;

	days_in_weeks = number_of_weeks * 7;

	cout << "There are " << days_in_weeks << " days in " << number_of_weeks << endl;
}