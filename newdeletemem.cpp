#include <iostream>
using namespace std;

int main(){
  int *p = new int;
  *p = 5;
  cout << *p + 9 << endl;
  delete p;

  return 0;
}
