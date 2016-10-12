#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	string movie;
	int adult;
	int child;
	float adultPrize= 10;
	float childPrize= 6;
	float grossProfit;
	float netBoxProfit;
	float distributorProfit;
	
	cout << "What is the name of the movie? ";
	cin >> movie;
	
	cout << "How many adult tickets were sold? ";
	cin >> adult;
	
	cout << "How many child tickets were sold? ";
	cin >> child;
	
	cout << "\n\n";
	
	grossProfit= adultPrize * adult + childPrize * child;
	netBoxProfit= grossProfit * 0.2;
	distributorProfit= grossProfit - netBoxProfit;
	
	cout << "Movie name: " << movie << endl;
	
	cout << "Adult tickets sold: " << adult << endl;
	
	cout << "Child tickets sold: " << child << endl;
	
	cout << fixed << setprecision(2) << showpoint << "Gross Box Office Profit: $" << grossProfit << endl;
	
	cout << fixed << setprecision(2) << showpoint << "Net Box Office Profit: $" << netBoxProfit << endl;
	
	cout << fixed << setprecision(2) << showpoint << "Amount Paid to Distributor: $" << distributorProfit << endl;
	
	return 0;
}
