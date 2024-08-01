#include<iostream>

using  namespace std;

int main() {
  cout << "hello world" <<endl; //"\n" similar to endl
  
  int a = 123 ; //int store data in 4 bytes
  cout<<a<<endl;

  char b = 'v'; //char store data in 1 byte , here inside can only have one character means only 'v' not 'vh'
  cout<<b<<endl; 

  float f = 1.2; //float store data in 4 bytes
  cout<<f<<endl;

  double d = 1.234; //double store data in 8 bytes
  cout<<d<<endl;

  bool c = 1; //bool store data in 1 byte
  cout<<c<<endl;

  //Never start a variable with number 1abc is wrong abc1 is correct

  int size = sizeof(a);
  cout<<size<<endl;
}
