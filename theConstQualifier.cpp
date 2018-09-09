#include <iostream>
//#define PI 3.141592653589793
using namespace std;

int main(){
  //the const qualifier.
  //const int a[3] = {1,2,3};
  const int PI = 89;
  {
    const float PI = 3.141592653589793;
    float r;
    cout << PI << endl;
    cout << "Enter value of radius : ";
    cin >> r;
    cout << "Area of circle = " << PI * r * r << endl;
    cout << "Circumference = " << 2 * PI * r << endl;
  }
  cout << PI << endl;
  return 0;
}
