#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int BGCD(int a, int b){//es mucho mas rapido que el MCD clasico
  int pot = 0;
  cout << "a" << " b " << endl;
  cout << a << " " << b << endl; 
  while ( a != 0 && b != 0 && a != b ) {
    while ( !(a & 1) && !(b & 1) ) {//si a y b son pares => MCD(a , b) = 2 * MCD(a/2 , b/2)
      pot++;
      a >>= 1;//a = a / 2^1
      b >>= 1;//b = b / 2^1
    }
    if ( !(a & 1) && (b & 1) ) a >>= 1; //si 2 solo divide a 'a' => MCD(a , b) = MCD(a/2 , b)
    else if ( (a & 1) && !(b & 1) ) b >>= 1;//si 2 solo divide a 'b' => MCD(a , b) = MCD(a , b/2)
    else if(a >= b) a = (a - b) >> 1;
    else{
      int tmp = (b - a) >> 1;
      a = b;
      b = tmp;
    }
  }
  return b * pow(2 , pot);// return b*2^pot
}


int main(){
  int a,b;
  cin >> a >> b;
  cout << "mcd(" << a <<" , " << b << ") = " << BGCD(a , b) << endl;

  
  
  return 0;
}
