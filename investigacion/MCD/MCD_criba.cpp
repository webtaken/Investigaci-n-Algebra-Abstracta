#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

const int SQRT_MAXN = 10000000; // square root of maximum value of N
bool nprime[SQRT_MAXN];

int GCD_Criba(int a , int b){
  int n = min(a , b);//solo recorreremos la criba hasta el mínimo de ambos números
  int GCD = 1;//inicializamos el GCD en 1 
  int nsqrt = (int) sqrt (n + .0);
  //desde 2 hasta raiz cuadrada de n
  for (int i=2; i<=nsqrt; ++i)
    if (!nprime[i]) {//si i en esa posición todavía no ha sido marcado
      if (i * 1ll * i <= n)
	for (int j=i*i; j<=n; j+=i)
	  nprime[j] = true;
    }
  //mietras ni a ni b sean 1
  //tambien observamos todos las posiciones marcadas en la criba
  for(int i = 2; i <= n && a ^ 1 && b ^ 1; i++){
    while(!nprime[i] && a % i == 0 && b % i == 0)
      a /= i , b /= i , GCD *= i; 
  }
  return GCD;//retornamos el valor inicial de GCD
}


int main() {
  
  int a , b;
  cin >> a >> b;
  cout << GCD_Criba(a , b) << endl;
  
  
  return 0;
}

