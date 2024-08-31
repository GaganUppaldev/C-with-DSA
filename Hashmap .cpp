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
    
}
