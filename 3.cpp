#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double score;
	double average;
	double total;
	
	for (int x=0; x< 5; x++) {
		cout << "Enter the test score: ";
		cin >> score;
		total= score + total;
	}
	
	average= total / 5;
	cout << fixed << setprecision(1) << showpoint << "Average test scores: " << average;
	
	return 0;
	}
