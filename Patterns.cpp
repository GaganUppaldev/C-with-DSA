//patterns
//Remember row matters ,here one code will be print stars inside row one than command to get belowline and again code to repect code

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
  

  
  
}
    
 


