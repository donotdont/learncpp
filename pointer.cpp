#include <iostream>
#include <vector>
using namespace std;

int main(){
  int x = 45;
  int y = 56;
  int *p = &x;
  cout << "----- *p = &x -----" << endl;
  cout << "P Address : " << p << endl;
  cout << "&X Address : " << &x << endl;
  cout << "*P Value : " << *p << endl;
  cout << "X Value : " << x << endl;
  
  return 0;
}
