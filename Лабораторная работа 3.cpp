// Вариант 16
#include "stdafx.h"
#include <iomanip>
#include <math.h>
#include <iostream>
#include "conio.h"
#include <string>

int factorial(int q){							//Нахождение факториала числа
	int i_fact = 1, res_fact = 1;
	while(i_fact <= q){
		res_fact = i_fact * res_fact;
		i_fact++;
	}
	return res_fact;						
}

int main(){
	double z, x, J, res, t = 1, i = 1;
	int y = 1, k = 7;
	std::cout << "Enter Z: " << std::endl;		//Вводим z = 0.1 / 0.5 / 1
	std::cin >> z;
	
	x = pow(z, 2) / 15;
	int k_pred = 1;								//k_pred - результат умножения всех чисел после факториала до их умножения на k
	while(t > 0.001){
		t = pow((pow(z, 2) / 2), i) / factorial(i) * k_pred * k;
		k = k_pred * k;
		res = 1 - t;
		i += 1;
		k += 2;
	}
	J = x * res;
	std::cout << J << std::endl; 
	std::cout << t << std::endl; 
	getch();
	return 0;
}

