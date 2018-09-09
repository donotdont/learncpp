#include <iostream>
#include <vector>
using namespace std;

void printVector(std::vector<int> vec){
   for(int i=0;i<vec.size();i++){
     cout << i << " : " << vec[i] << endl;
   }
}

int main(){

  vector<int> vectorList;

  vectorList.push_back(11);
  vectorList.push_back(22);
  vectorList.push_back(33);
  vectorList.push_back(44);
  vectorList.push_back(55);
  vectorList.push_back(66);

  cout << "Vector Size : " << vectorList.size() << endl;
  printVector(vectorList);
  cout << endl;

  vectorList.pop_back();
  cout << "Vector Size : " << vectorList.size() << endl;
  printVector(vectorList);

  return 0;
}
