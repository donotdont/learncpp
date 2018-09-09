#include <iostream>

using namespace std;

int main(){
  cout << "Have is my ASCII values base on my system\n " << endl;
  
  for(int i=0;i<128;i++){
  	cout << i << " = " << char(i) << endl;
  }

  return 0;
}
