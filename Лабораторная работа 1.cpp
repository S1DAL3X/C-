//VS2019
#include <math.h>
#include <iostream>
#include "conio.h"

using namespace std;

int main(){
	double Y, x, a, b, c, s;
	a = 3.5;
	b = 4;
	cout << "x = ";
	cin >> x;
	s = sin(pow(x, 2) + b);
	c = cos(pow(x, 2) + b);

	if (x > 0) {
		Y = a * s;
	}
	else {
		if (x == 0) {
			Y = pow(x, 2) + b;
		}
		else {
			Y = a * c;
		}
	}
	cout << "Y = " << Y << endl;
	return 0;
}
