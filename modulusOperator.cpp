#include <iostream>

using namespace std;

int main(){
  const int fixMin = 60;
  int Hr,Min;

  cout << "Enter Hours : " << endl;
  cin >> Hr;
  cout << "Enter Minutes : " << endl;
  cin >> Min;

  Hr = Hr + Min / fixMin;
  Min = Min % fixMin;

  cout << Hr << " Hr : " << Min << " Mins" << endl;
  return 0;
}
