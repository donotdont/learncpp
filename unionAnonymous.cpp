#include <iostream>
#include <string.h>
using namespace std;

struct item{
	char name[20];
	union{
	  char idChar[200];
	  int idInt;
	};
};

int main(){
  item knife = {"Knife"};
  knife.idInt=432421;

  item tongs = {"Tongs"};
  strcpy(tongs.idChar,"34BA122");

  cout << knife.name << " " << knife.idInt << endl;
  cout << tongs.name << " " << tongs.idChar << endl;



  return 0;
}
