//so i will paste code with question above here and try to make this less complicated , most solutions will be inside comment so you can remove that try that code

//<QUESTION 1> 
//1,2,3,4 row  like this 
/*1,2,3,4
  1,2,3,4
  1,2,3,4
  1,2,3,4
*/

//Answer 

#include <iostream>
using namespace std;

int main(){
  
  cout<<"welcome here i will solve question 1"<<endl;
  int a; // a is integer
  cin>>a;// save input as a

  cout<<" your input is "<<a<<endl;
  int i;
  i=1;

  while(i<=a){ //this while is to repeact row after line
    int j;
    j=1;
    while(j<=a){
      cout << j << " "; 
      j = j+1;
      
    }

    cout<<endl;

    i=i+1;

    

    
  }
  

  

  
}
