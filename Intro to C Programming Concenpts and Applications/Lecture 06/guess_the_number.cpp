/*
Problem - have the computer generate a random number that the user will then have to guess based on whether their
guess is higher or lower
Example - range = 1-100 and random number is 21. When user guesses 50, say higher, guess a lower number then when
they guess 25 say guess lower until they keep narrowing it down in half.
Data Structure - range is a set of natural numbers from 1 to 100, will use int datatype
Algorithm - 1. Generate the random number and save it to a variable
            2. Have the user guess a number that it might be
            3. Compare the number the user guesses with the random number
               a. inform the user whether the number guesses is higher or lower than the actual random number
               b. repeat this loop until the guess and random number are one-in-the-same
            4. Once the user guesses the correct number end the loop
               a. congratulate the user and show number of guesses
               b. end the game
Code
*/

#include <iostream>
#include <ctime>
using namespace std;

int main(){
	srand(time(0)); // use srand with time(0) to get a different number each time code is ran
	int random_number;
	random_number = rand() % 100 + 1; // so that the random numbers generated are between 1 and 100
	int user_guess;
	int number_of_guesses = 1;

	cout << "The random number is " << random_number << endl;

	while(user_guess != random_number){
		cout << "Which number do you think it is?" << endl;
		cin >> user_guess;


		if(user_guess == random_number){
			cout << "Congratulations, you guessed the correct number!" << endl;
			cout << "You did it in just " << number_of_guesses << " guesses." << endl;
			break;

		}else if(user_guess < random_number){
			cout << "Guess a higher number" << endl;
			number_of_guesses++;

		}else if(user_guess > random_number){
			cout << "Guess a lower number." << endl;
			number_of_guesses++;
		}

	}

}