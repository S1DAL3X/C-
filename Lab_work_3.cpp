// var 16
// Вариант 16
#include "stdafx.h"
#include <iomanip>
#include <math.h>
#include <iostream>
#include "conio.h"
#include <string>

int factorial(int q){									//Нахождение факториала числа
	int i_fact = 1, res_fact = 1;
	while(i_fact <= q){
		res_fact = i_fact * res_fact;
		i_fact++;
	}
	return res_fact;						
}

int main(){
	double z, x, J, res, t = 1, i = 1, eps;
	int y = 1, k = 7, k_pred = 1;

	std::cout	<< "Enter EPS: " << std::endl;
	std::cin	>> eps;
	std::cout	<< "\nEnter Z: " << std::endl;
	std::cin	>> z;

	x = (z*z) / 15;
	while(t > eps){
		t = pow(-1, i) * pow((pow(z, 2) / 2), i) / (factorial(i) * k * k_pred); //k_pred - результат перемножения всех чисел после факториала
		k = k_pred * k;
		res = 1 + t;

		if (i == 1){}
		else{
			k_pred = k + 2;
		}

		i += 1;
	}
	J = x * res;
	std::cout << "\nJ = " << J << std::endl;
	std::cout << "t = " << t << std::endl;
	getch();
	return 0;
}
