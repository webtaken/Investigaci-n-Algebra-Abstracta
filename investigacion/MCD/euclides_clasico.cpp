#include <iostream>


using namespace std;


int MCD_R(int a , int b){//recibir a y b
  if(b == 0)//si b = 0 fin de la recursión
    return a;
  return MCD_R(b , a % b);//MCD(a , b) = MCD(b , a mod b)
}

int MCD_I(int a , int b){
  cout << "a" << " b " << endl;
  cout << a << " " << b << endl;
  while(b ^ 0){// ^ es equivalente a la operacion binaria xor, es como decir mientras b != 0
    int tmp = a % b;// tmp = a mod b
    a = b;          // cambiamos el valor de a por b
    b = tmp;        // cambiamos el valor de b por a mod b
    cout << a << " " << b << endl;
  }                 // recordemos ques MCD(a , b) = MCD(b , a mod b)
  return a;         // retornamos MCD(a , b)
}


int main(){
  int a , b;
  cin >> a >> b;
  cout << "mcd(" << a <<" , " << b << ") = " << MCD_I(a , b) << endl;

  return 0;
}
