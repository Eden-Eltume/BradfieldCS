/*
Problem - write a program that
          1. asks a user to a bunch of integers on 1 line separated by spaces
          2. reads that whole line into a string
          3. pulls out each number from that string separately, outputting them one-by-one
Examples - input: 1, 21, 300	output: 1
                                        21
                                        300
Data structure - collect the input data as a stringstream
Algorithm - 1. prompt the user to enter the integers all on one line separate by commas
            2. collect the input data as a stringstream
            3. loop through the stringstream data until (end-of-file aka eof)
            4. output an integer every iteration (use endl)
            5. close the file
Code
*/

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	fstream my_file;
	my_file.open("integer_list.txt", fstream::out);
	string list_of_integers;

	cout << "Please enter a bunch of integers (separate using commas)" << endl;
	getline(cin, list_of_integers);

	my_file << list_of_integers;


	cout << "List of integers is " << list_of_integers << endl;


	my_file.close();

}