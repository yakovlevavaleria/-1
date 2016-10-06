// Определение значений y относительно x.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <iostream>

using namespace std;

int main()
{
	int x;
	double y; // Определение переменных
	cout << "x=";
	cin >> x; //Ввод данных от пользователя 
	y = sqrt((sqrt(x*x+65)+sqrt(4*x*x+sqrt(2)))); 
	cout << "y=";
	cout << y; // Вывод переменной
	system("pause"); //Останавливаем программу до нажатия любой кнопки

}

