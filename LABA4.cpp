//var16
#include "stdafx.h"
#include <iomanip>
#include <math.h>
#include <iostream>
#include "conio.h"

using namespace std;

int main(){
	double matrix[3][3] = {	{4.4, 0.6, 5.3},
							{1.7, 5.5, 0},
							{3.4, 1.8, 6.6}};
	//вывод начальной матрицы
	cout << "First matrix A: " << endl;
	for(int i = 0; i <= 2; i++){
		for(int j = 0; j <= 2; j++){
			cout << matrix[i][j] << "  ";
			if(j == 2){
				cout << endl;
			}else{};
		};
	};
	cout << endl << "Transposed matrix: " << endl;
	//вывод транспонированной матрицы
	for(int i = 0; i <= 2; i++){
		for(int j = 0; j <= 2; j++){
			cout << matrix[j][i] << "  ";
			if(j == 2){
				cout << endl;
			}else{};
		};
	};

	getch();
	return 0;
}
