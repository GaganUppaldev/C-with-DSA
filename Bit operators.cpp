// bit operators , left and right shift ,increment operator 
//Bit operator in c++ ; 

#include <iostream>
using namespace std;
int main(){
  int a=4;
  int b=6;

  cout<<"a&b  = " << (a&b) << endl;//and 
  cout<<"a|b  = " << (a|b) << endl;//or
  cout<<"~a  = " << (~a) << endl;//not of  a
  cout<<"a^b  = " << (a^b) << endl;//

  
  cout<<(17<<1)<<endl;//Left shift operator
  cout<<(17>>1)<<endl;//Right shift operator

  //inctirment 
  int c = 40;
  ///post incriment
  cout<<c++<<endl; //used as 40 but after use it will be 41
  cout<<c<<endl; //41

  //pre incriment
  cout<<++c<<endl;// use it as +1 means 41+1=42

  //same things with c-- and --c
  
  
  
  
  
}
