// ����������� �������� y ������������ x.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <iostream>

using namespace std;

int main()
{
	int x;
	double y; // ����������� ����������
	cout << "x=";
	cin >> x; //���� ������ �� ������������ 
	y = sqrt((sqrt(x*x+65)+sqrt(4*x*x+sqrt(2)))); 
	cout << "y=";
	cout << y; // ����� ����������
	system("pause"); //������������� ��������� �� ������� ����� ������

}

