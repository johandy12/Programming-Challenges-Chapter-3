#include <iostream>

using namespace std;

int main() {
	int bagofCookies= 30;
	int calories= 10 * 300;
	int eaten;
	int caloriesConsumed;
	
	cout << "How many cookies did you eat? ";
	cin >> eaten;
	
	caloriesConsumed= calories / bagofCookies * eaten;
	
	cout << "Total calories consumed: " << caloriesConsumed;
	
	return 0;
}
