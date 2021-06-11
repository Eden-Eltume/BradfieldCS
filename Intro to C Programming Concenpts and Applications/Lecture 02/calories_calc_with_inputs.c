#include <iostream>
using namespace std;

int main(){
	float carb_grams, protein_grams, fat_grams;

	cout << "Enter the number of carbohydrates, protein and fat, separated by spaces." << endl;

	cin >> carb_grams;
	cin >> protein_grams;
	cin >> fat_grams;

	float calories;
	calories = 4 * carb_grams + 4 * protein_grams + 9 * fat_grams;
	cout << "There are " << calories << " calories in this dish." << endl;
}