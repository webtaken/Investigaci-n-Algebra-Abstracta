#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;
int BGCD(int a , int b){
  int e = 1;
    while ( !(a & 1) && !(b & 1) ) {
      e <<= 1;
      a >>= 1;
      b >>= 1;
    }
  while ( a ^ 0 ) {
    while ( !(a & 1) ) a >>= 1;
    while ( !(b & 1) ) b >>= 1;
    if(a >= b) a=a-b; else b=b-a;
  }
  return b * e;
}

int main(){
  int a,b;
  cin >> a >> b;
  cout << "mcd(" << a <<" , " << b << ") = " << BGCD(a , b) << endl;

  
  
  return 0;
}
