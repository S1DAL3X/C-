// VS2010
// Вариант 16
#include "stdafx.h"
#include <iomanip>
#include <math.h>
#include <iostream>
#include "conio.h"
#include <string>

using namespace std;

int main(){
	double x, c, t, Y, MinY, MaxY, MinX, MaxX, M_PI;
	cout << setw(10) << "N0" << setw(15) << "t" << setw(15) << "x" << setw(15) << "Y" << endl;
	M_PI = 3.1515;			//Определили переменную M_PI вручную, как число Пи
	MinY =  10E10;
	MinX = 10E10;
	MaxY = -10E10;
	MaxX = -10E10;
	t = M_PI / 2;
	c = 1;
	
	for(t = M_PI / 2; t <= M_PI; t = t + (M_PI / 18)){
		x = cos(t);
		Y = cos(2*x) / 1 - sin(x) + pow(x, 3);
		cout << setw(15) << c << setw(15) << t << setw(15) << x << setw(15) << Y << endl;
		c+=1;

		if(Y < MinY){MinY = Y;}	//Ищем минимальное Y
		if(Y > MaxY){MaxY = Y;}   //Ищем максимальное Y

		if(x < MinX){MinX = x;}	//Ищем минимальное X
		if(x > MaxX){MaxX = x;}   //Ищем максимальное X
	}

	cout << endl;
	cout << setw(15) << "Min Y" << setw(15) << "Max Y" << setw(15) << "Min X" << setw(15) << "Max X" << endl;
	cout << setw(15) << MinY	<< setw(15) << MaxY	   << setw(15) << MinX << setw(15) << MaxX << endl;
	getch();
	return 0;
}
