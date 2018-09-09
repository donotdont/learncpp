#include <iostream>
#include <string.h>
using namespace std;

//struct number{
union number{
	int x;
	double y;
};

int main(){
  number n;
  n.x = 3;
  n.y = 5.99;

  cout << "Size of Number : " << sizeof(number) << endl;

  
  cout << "X : " << n.x << " => Address X : " << &n.x << endl;
  cout.width(11);
  cout.setf(ios::adjustfield,ios::left);
  cout << "Y : " << n.y << " => Address Y : " << &n.y << endl;

  return 0;
}
