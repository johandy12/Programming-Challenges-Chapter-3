#include <iostream>

using namespace std;

int main() {
	float replacementCost;
	double minimumAmountofInsurance;
	
	cout << "How much is the replacement cost of the building? ";
	cin >> replacementCost;
	
	minimumAmountofInsurance= 0.8 * replacementCost;
	
	cout << "The minimum amount of insurance you should buy for the property: " << minimumAmountofInsurance;
	
	return 0;
}
