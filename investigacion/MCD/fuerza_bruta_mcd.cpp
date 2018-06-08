#include <iostream>
#include <algorithm>

using namespace std;

int MCD_B(int a , int b){
  cout << "a" << " b " << endl;
  cout << a << " " << b << endl;
  cout << "i" << endl;
  for(int i = min(a , b); i > 0; i--){
    cout << i << endl;
    if((a % i) == 0 && (b % i) == 0)
      return i;
  }
}


int main(){
  int a , b;
  cin >> a >> b;
  cout << "mcd(" << a <<" , " << b << ") = " << MCD_B(a , b) << endl;

 
  return 0;
}
