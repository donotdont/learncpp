#include <iostream>
//#define PI 3.141592653589793
using namespace std;

int main(){
  float price = 10.0 / 3.0;
  float scale = 1e6;
  double price2 = 10.0 / 3.0;
  long double price3 = 10.0 / 3.0;

  //cout << "Float : " << sizeof(float) << endl;			// 4
  //cout << "Double : " << sizeof(double) << endl;		// 8
  //cout << "Long Double : " << sizeof(long double) << endl;	// 16

  cout.setf(ios_base::fixed, ios_base::floatfield);
  cout.precision(30);
  
  cout << price*scale << endl;
  cout << price2*scale << endl;
  cout << price3*scale << endl;

  return 0;
}
