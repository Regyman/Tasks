#include<iostream>
#include<conio.h>
#include "pch.h"

using namespace std;

double sum(int m, double y, double &r) {
	double  r1, s;
	double p, x2 = -0.5*y*y;
	s = r1 = y;
	for (int k = 2;k <= m;k++) {
		p = x2 / (2 * k - 1) / k;
		r = r1 * p;
		s += r;
		r1 = r;
		cout << "r1 = " << r1 << "s = " << s << endl;

	}
	return s;

}

int main() {
	int n;
	double x, sn, f;
	double E;
	double r = 0;
	setlocale(LC_ALL, "Rus");
	cout << "Введите число слагаемых" << endl;
	cin >> n;
	cout << "Задайте аргумент" << endl;
	cin >> x;
	f = cos(x);
	sn = sum(n, x, r);
	E = abs(sn - f);
	cout << "Точное значение\t" << f << endl;
	cout << "Приближенное значение\t" << sn << endl;
	// cout <<"Число слагаемых\t"<< n << endl;
	cout << "Отброшенное слагаемое\t" << r << endl;
	_getch();
	return 0;

}