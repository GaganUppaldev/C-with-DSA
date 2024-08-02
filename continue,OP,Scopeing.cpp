//topic coverd is continue , scoping of variable and (OP) opertators precedence

//Using continue
#include <iostream>
using namespace std;

int main(){
  
  


  for(int i = 0; i < 5; i++){
    cout<<"Hello sir"<<endl;
    cout<<"How are you"<<endl;
    continue;
    cout<<"I will not come due to continue"<<endl;
  }
  //scope of variable
  int a = 3; //it is global variable
  cout<<a<<endl;
  if(true){
    int a = 5;//this for only inside if condition 
    cout<<a<<endl;
  }
  //operator precedence 
  int b = 2;
  int c = 2;
  int d = (b*5)+c+2;//answer 14
  
  cout<<d<<endl;

  //brackets are at top () for prefrence level use them 
  
}
