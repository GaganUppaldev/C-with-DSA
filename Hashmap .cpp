//This file is to save concepts of hashmap
#include <iostream>
#include<map>
#include <unordered_map>
using namespace std;
int main(){
  cout<<"hashmaps"<<endl;

  //creation
  unordered_map<string,int>m;

  //first 
  pair<string , int> p = make_pair("Bombay",3);
  m.insert(p);

  //second
  pair<string,int> pair2("Mumbai",2);
  m.insert(pair2);

  m["test"] = 20;
  cout<<m["test"]<<endl; //output will be 2


  m["test"] = 30;
  cout<<m["test"]<<endl; //output will be 3

  //check at specific key
  cout<<m.at("Mumbai")<<endl; //output will be 2

  //check size 
  cout<<m.size()<<endl;

  //unknown key
  cout<<m["unknown"]<<endl;//output will be 0
  cout<<m.at("unknown")<<endl;//output will be 0

}
