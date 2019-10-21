//var16
#include "stdafx.h"
#include <iomanip>
#include <math.h>
#include <iostream>
#include "conio.h"
#include <string>
#include <fstream>

using namespace std;

int write_data(){
	ofstream my_file1;
	my_file1.open("out.txt");

	double x, c, t, Y, MinY, MaxY, MinX, MaxX, M_PI;
	my_file1 << setw(10) << "N0" << setw(15) << "t" << setw(15) << "x" << setw(15) << "Y" << endl;
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
		my_file1 << setw(15) << c << setw(15) << t << setw(15) << x << setw(15) << Y << endl;
		c+=1;

		if(Y < MinY){MinY = Y;}	//Ищем минимальное Y
		if(Y > MaxY){MaxY = Y;}   //Ищем максимальное Y

		if(x < MinX){MinX = x;}	//Ищем минимальное X
		if(x > MaxX){MaxX = x;}   //Ищем максимальное X
	}

	my_file1 << endl;
	my_file1 << setw(15) << "Min Y" << setw(15) << "Max Y" << setw(15) << "Min X" << setw(15) << "Max X" << endl;
	my_file1 << setw(15) << MinY	<< setw(15) << MaxY	   << setw(15) << MinX << setw(15) << MaxX << endl;
	my_file1.close();

	cout << "Data has been successfully writting in file out.txt" << endl;
	getch();
	return 0;
}

int read_data(){
	string line;
	ifstream my_file1;
	my_file1.open("out.txt");

	if(my_file1.is_open()){
		while(getline(my_file1, line)){
			cout << line << endl;
		}
	}
	else{cout << "ERROR: FILE CANNOT BE OPEN !";}

	my_file1.close();
	getch();
	return 0;
}

int main(){
	int choise;
	cout << "Do you want to write(1) data in file, or read(0) data from file ?" << endl;
	cin >> choise;
	if(choise == 1){write_data();}
	else if(choise == 0){read_data();}
	else{
		cout << "Please, enter the CORRECT choise 1 or 0\n";
		system("pause");
	}

	return 0;
}
