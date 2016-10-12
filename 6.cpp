#include <iostream>

using namespace std;

int main() {
	float sugar= 1.5 / 48 ;
	float butter= 1.0 / 48;
	float flour= 2.75 / 48;
	int make;
	
	cout << "How many cookies do you want to make? ";
	cin >> make;
	
	sugar= sugar * make;
	butter= butter * make;
	flour= flour * make;
	
	cout << sugar << " cup of sugar" << endl << butter << " cup of butter" << endl << flour << " cup of flour";
	
	return 0;
}
