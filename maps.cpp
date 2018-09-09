#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){

  map<int,string> mapList;
  mapList.insert(pair<int,string>(5,"Hello"));
  mapList.insert(pair<int,string>(7,"World"));

  cout << "Map Size : " << mapList.size() << endl;
  for(pair<int,string> map : mapList){
    cout << map.first << " : " << map.second << endl;
//    cout << mapList[ map.first ] << " : " << map.first << endl;
  }

  //C++17
  /*for (auto const& [key,val] : mapList){
    cout << key << " : " << val << endl;
  }*/

  return 0;
}
