#include <iostream>

using namespace std;

int main(){
  long int a = 9223372036854775807; // - +
  int b = 2147483647;
  unsigned int c = -6;
  unsigned int d = 4294967295;
  cout << "Int : "  << sizeof(int) << endl;
  cout << "Unsigned int : " << sizeof(unsigned int) << endl;
  cout << "Unsigned int -6 : " << c << endl;
  cout << "Unsigned int all : " << d << endl;
  cout << "Long Int : "  << sizeof(long int) << endl; 
  cout << "Long Long : " << sizeof(long long) << endl;
  //cout << a << endl;
  //cout << b << endl;
  return 0;
}
