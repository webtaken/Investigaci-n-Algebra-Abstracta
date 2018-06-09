
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <algorithm>
using namespace std;
int cont = 0;
int LSBGCD(int u,int v){
	int e, t;
	while (v > 0){
		cont++;
		int i = 0, x = 2;
		while (i < v){
			if (pow(x, i)*v <= u){
				e = i;
			}
			i++;
		}
		int x1, x2;
		x1 = u - pow(2, e)*v;
		x2 = pow(2, e + 1)*v - u;
		t = min(x1, x2);
		u = v; v = t;
		if (u < v){
			int aux = u;
			u = v; v = aux;
		}
	}
	cout << cont << endl;
	return u;
}
int main()
{
	int u = 47, v = 40;
	cout<<LSBGCD(u, v);
	system("pause");
	return 0;
}
