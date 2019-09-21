// Вариант 16
#include "stdafx.h"
#include <iomanip>
#include <math.h>
#include <iostream>
#include "conio.h"
#include <string>

using namespace std;

int main(){
	double x, c, t, Y, Min, Max, M_PI;
	cout << setw(10) << "N0" << setw(10) << "t" << setw(10) << "x" << setw(10) << "Y" << endl;
	M_PI = 3.1515;
	Min =  10E10;
	Max = -10E10;
	t = M_PI / 2;
	x = cos(t);
	c = 1;
	
	for(t = M_PI / 2; t <= M_PI; t = t + (M_PI / 18)){
		Y = cos(2*x) / 1 - sin(x) + pow(x, 3);
		cout << setw(10) << c << setw(10) << t << setw(10) << x << setw(10) << Y << endl;
		c+=1;

		if(Y < Min){Min = Y;}	//Ищем минимальное Y
		if(Y > Max){Max = Y;}   //Ищем максимальное Y
	}

	cout << endl;
	cout << setw(10) << "Min Y" << setw(10) << "Max Y" << endl;
	cout << setw(10) << Min		<< setw(10) << Max	   << endl;
	getch();
	return 0;
}
