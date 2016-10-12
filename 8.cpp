#include <iostream>

using namespace std;

int main() {
	float widget= 12.5;
	float pellet;
	double totalWeight;
	int widgetStacked;
	
	cout << "The pellet weight by itself: ";
	cin >> pellet;
	
	cout << "The pellet weight with widgets: ";
	cin >> totalWeight;
	
	widgetStacked= (totalWeight - pellet) / widget;
	
	cout << "Number of widgets stacked: " << widgetStacked;

	return 0;
}
