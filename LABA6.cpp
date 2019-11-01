//var16
//метод простых иттераций 
//объяснение: https://otvet.mail.ru/question/177367080
//#include "stdafx.h"	//for VS2010
#include "iostream"
#include "iomanip"
#include "math.h"
#include "stdio.h"

using namespace std;
double eps, x, y;

double my_function(double q) {
	return(pow(2.71, -q) - sqrt(q) + 1.5);
}

int main() {
	cout << "Enter X from [0;1]: " << endl;
	cin >> x;
	cout << "Enter EPS: " << endl;
	cin >> eps;

	while (abs(x - my_function(x)) > eps) {
		x = my_function(x);
	}

	cout << "X = " << x << endl << "F(x) = " << my_function(x) << endl;

	return 0;
}
