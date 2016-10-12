#include <iostream>

using namespace std;

int main() {
	int male;
	int female;
	double total;
	float percentageofMale1, percentageofMale2, percentageofFemale1, percentageofFemale2;
	
	cout << "The number of males: ";
	cin >> male;
	
	cout << "The number of females: ";
	cin >> female;
	
	total= male + female;
	
	percentageofMale1= male / total;
	percentageofMale2= male / total * 100;
	
	percentageofFemale1= female / total;
	percentageofFemale2= female / total * 100;
	
	cout << "The percentage of males can be calculated as " << percentageofMale1 << " or " << percentageofMale2 << "%";
	cout << "The percentage of females can be calculated as " << percentageofFemale1 << " or " << percentageofFemale2 << "%";
	
	return 0;
}
