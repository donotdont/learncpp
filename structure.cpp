#include <iostream>
#include <string.h>
using namespace std;

struct Apple{
	char name[30];
	float price;
	int stock;
	char color[34];
};

struct {
	char name[30];
} OS={"Mac"};

struct result{
	char subject[20];
	float mark;
};

int main(){
  Apple iPhone = {"iPhone XI",50000,10,"Black"};
  Apple iPad = {"iPad V",25000};
  //Apple lists[2] = {iPhone,iPad};
  Apple lists[] = {
  	{"iPhone XI",50000,10,"Black"},
	{"iPad V",25000}
  };
  //cout << "Size of Lists : " << sizeof(lists)/sizeof(*lists) << " \t " << endl;
  for(int i=0;i<(sizeof(lists)/sizeof(*lists));i++){
    cout << lists[i].name << " Price : " << lists[i].price << " Stock : " << lists[i].stock << " Color : " << lists[i].color << endl;
  }

  //OS:"Mac";
  //OS.name = "Windows 10";
  strcpy(OS.name, "Linux");
  cout << OS.name << endl;

  cout << "\n\n ======================== \n\n " << endl;

  result gradeReport[]={
  	{"Math",75},
	{"English",56},
	{"Physic",78},
	{"Bio",50},
	{"Chemistry",67}
  };
  
  int total,percent;
  for(int i=0;i<(sizeof(gradeReport)/sizeof(*gradeReport));i++){
    cout.width(10);
    cout.setf(ios::adjustfield,ios::left);
    cout << gradeReport[i].subject << " == " << gradeReport[i].mark << endl;
    total += gradeReport[i].mark;  
  }
  cout << "Total mark == " << total << endl;
  percent= total / 5.0;
  cout << "Percentage == " << percent << "%" << endl;

  return 0;
}
