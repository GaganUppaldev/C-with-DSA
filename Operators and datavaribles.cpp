//Data storage and operators

#include <iostream>

using namespace std;

int main() {
  cout << "a" << endl;

  int a = 10;
  cout<<a<<endl;

  int b = 200;
  cout << b <<  endl;

  //operators

  int sum = a + b;   //Add
  cout << sum << endl;

  int min = b - a;  //subtract
  cout << min << endl;

  int negative = a - b;  // getting negative output
  cout << negative << endl;

  int mul = a * b;  //multiply
  cout << mul << endl;

  //while division you may to get a decimal value so use float and double and remember interger/integer is always integer

  int c = 2;
  int d = 3;

  int div = c / d;
  cout << div << endl; //output is zero only no decimal

  float div2 = c / d;
  cout<<div2<<endl; //output is still zero

  double div3 = c / d;
  cout<<div3<<endl; //output is still

  //static_cast<data type>(value) is used to perform task in floating point algoritums

  double div4 = static_cast<double>(c) / d; //   BRACKETS ARE IMPORTANT MAN
  cout<<div4<<endl; //output is 0.666667 


  //bool

  bool is_equal = (a == b);
  cout << is_equal << endl;

  bool is_not_equal = (a != b);
  cout<<is_not_equal<<endl;


  //want to see true false so lets watch the c++ code here 
  bool check (a==b);
  cout<< (check ? "true":"false")<<endl;


  //PLAYING WITH DATA TYPES

  //lets put a inside int data variable and get its code
  int find = a;
  cout<<find<<a;//1010 we got it 

  //let put 1010 inside a char data type and get a

  char find2 = 64;
  cout<<find2<<endl;//@

  int find3 = c;
  cout<<find3<<endl;//2
