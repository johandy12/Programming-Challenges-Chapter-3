#include <iostream>
#include <string>

using namespace std;

int main() {
	string month[3];
	double amountofRain[3];
	double average;
	
	for (int x= 0; x<= 2; x++) {
		cout << "Name of month: ";
		cin >> month[x];
		cout << "The amount of rain in inches: ";
		cin >> amountofRain[x];
	}
	
	average= (amountofRain[0] + amountofRain[1] + amountofRain[2]) / 3;
	
	cout << "The average rainfall for " << month[0] << ", " << month[1] << ", " << month[2] << ", "<< average << "inches";
	
	return 0;
}
