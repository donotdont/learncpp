#include <iostream>
#include <string.h>
using namespace std;

struct item{
	char name[20];
	union id{
	  char idChar[200];
	  int idInt;
	}idValue;
};

int main(){
  item knife = {"Knife"};
  knife.idValue.idInt=432421;

  item tongs = {"Tongs"};
  strcpy(tongs.idValue.idChar,"34BA122");

  cout << knife.name << " " << knife.idValue.idInt << endl;
  cout << tongs.name << " " << tongs.idValue.idChar << endl;



  return 0;
}
