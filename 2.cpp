#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	float classA= 15;
	float classB= 12;
	float classC= 9;
	int classATickets;
	int classBTickets;
	int classCTickets;
	float totalIncome;
	
	cout << "Enter the number of tickets class A sold: ";
	cin >> classATickets;
	
	cout << "Enter the number of tickets class B sold: ";
	cin >> classBTickets;
	
	cout << "Enter the number of tickets class C sold: ";
	cin >> classCTickets;
	
	totalIncome= classATickets * classA + classBTickets * classB + classCTickets * classC;
	cout << fixed << setprecision(2) << showpoint << "The total income of ticket sales: $" << totalIncome;
	
	return 0;
}
