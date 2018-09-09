#include <iostream>
#include <string.h>
using namespace std;

int main(){
  enum Day{Su,M,Tu,W,Th,F,Sa};
  const char* srtDay[7] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
  Day Holiday;
  Holiday = Day(2);
  cout << "Holiday : " << srtDay[Holiday] << endl;
  cout << "\t\t---------\n\n" << endl;
  cout << Su << endl;
  cout << M << endl;
  cout << Tu << endl;
  cout << W << endl;
  cout << Th << endl;
  cout << F << endl;
  cout << Sa << endl;
  return 0;
}
