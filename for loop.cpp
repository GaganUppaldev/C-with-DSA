//for loop
#include <iostream>
using namespace std;
int main(){
  int a ;
  for (a=1;a<=5;a++){
    cout<<a<<endl;
  }
  int b;
  int n;
  cin>>n;
  cout<<n<<" is your output"<<endl;
  for(b=1;b<=n;b++){
    cout<<b<<" ";
  }

  int d;
  cin>>d;
  cout<<d<<" is your output"<<endl;

  int sum = 0;

  for (int i = 1 ; i<=d;i++){ 
    
    sum = sum+i;// 0+1 = 1 , 1 + 2 + 3, 3+3 = 6 ,6+4 =10 ,10+5 =15
    
    
  }
  cout<<sum<<endl;//1

 

  

  
}

