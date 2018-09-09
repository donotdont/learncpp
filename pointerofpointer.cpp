#include <iostream>
#include <vector>
using namespace std;

int main(){
  double x = 5.6;
  double *a = &x;
  double* *b = &a;
  double** *c = &b;
  cout << "X : " << x << endl;
  cout << "X Address : " << &x << endl;
  cout << "Pointer Address of X" << endl;
  cout << "A : " << a << endl;
  cout << "B : " << b << endl;
  cout << "C : " << c << endl;
  cout << "Pointer Value of X" << endl;
  cout << "A Value : " << *a << endl;
  cout << "B Value : " << **b << endl;
  cout << "C Value : " << ***c << endl;
  
  return 0;
}
