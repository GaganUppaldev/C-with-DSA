//patterns
//Remember row matters ,here one code will be print stars inside row one than command to get belowline and again code to repect code
//2nd question>> 111 , 222, 333 like 111 row 1st ,222 row 2nd,333 row 3rd
#include<iostream>
using namespace std;
int main(){
  int x;
  cin>>x;//number of stars user want  inside row

  int i = 1;

  while(i<=x){
    int j =1;

    while(j<=x){ //print starts in row
      cout<<"*";//don't use endl here other wise it will print stars in next line
      j = j +1;
    }

    cout<<endl;

    i = i+1;

  }

    //2nd question solved from here
    int n;
  int a;
  cin>>n;

  a=1;

  while(a<=n){
    int p;
    p = 1;
    while(p<=n){
      cout<<a;
      p=p+1;
    }
    cout<<endl;
    a=a+1;



  }





  




}
    
 


