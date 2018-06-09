
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <algorithm>
using namespace std;

int emenorresto(int a, int b){
	int c, d, r;
	if (a == 0)c = b;
	else{
		c = a; d = b;
		while (d != 0){
			r = c - d*(c / d + 1 / 2);
			c = d;
			d = r;
		}
	}
	return abs(c);
}
int main()
{
	int u = 47, v = 40;
	cout << emenorresto(u, v);
	system("pause");
	return 0;
}
