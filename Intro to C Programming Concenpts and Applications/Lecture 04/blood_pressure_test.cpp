// Blood Pressure Analyzer
#include <iostream>
using namespace std;

int main(){
	//Get systolic and diastolic blood pressures
	int systolic, diastolic;
	
	cout << "Enter your systolic pressure (the larger, first number): ";
	cin >> systolic;

	cout << "Enter your diastolic pressure (the smaller, second number): ";
	cin >> diastolic;

	cout << "You entered values of " << systolic << " and " << diastolic << endl;
                                                                                     
	if((systolic <= 129 && systolic >= 120) && (diastolic < 80)){
	//Check for Elevated blood pressure: 120<=S<=129 and D<80
	cout << "I am sorry to inform you but you have an elevated blood pressure." << endl; 

	}else if((systolic <= 139 && systolic >= 130) && (80 <= diastolic && diastolic <= 89)){
	//Check for Stage 1 Hypertension: 130<=S<=139 or 80<=D<=89
	cout << "I am sorry to inform you but you have Stage 1 Hypertension." << endl;

	} else if((systolic < 180 && systolic >= 140) || ( diastolic < 120 && diastolic >= 90)){
	//Check for Stage 2 Hypertension: 180>S>=140 or 120>D>=90
	cout << "I am sorry to inform you but you have Stage 2 Hypertension." << endl;

	} else if((systolic >= 180) || (diastolic >= 120)){
	//Check for Danger Zone: S>=180 or D>=120
	cout << "I am sorry to inform you but you are in the Danger Zone for high blood pressure." << endl;

	} else if((systolic <= 90) || (diastolic <= 60)){
	//Check for Hypotension: S<=90 or D<=60
	cout << "I am sorry to inform you but you have Hypotension." << endl;

	}else{
	//Say OK if nothing else applies
	cout << "You are perfectly fine." <<endl;
	} 
}
           