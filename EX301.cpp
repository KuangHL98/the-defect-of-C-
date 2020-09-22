#include <iostream>
#include <cmath>

using namespace std;

#define const 0.393700787402;

int main() {
	double hight_cm, hight_inch;
	cout << "Please enter your hight_cm:" << endl;
	cin >> hight_cm;
	hight_inch = const*hight_cm;
	cout << hight_cm << " cm=" << hight_inch << " inch";
	cin.get();
	cin.get();
	return 0;
}