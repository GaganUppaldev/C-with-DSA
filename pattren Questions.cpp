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

  //<QUESTION2>

  /*
  Write a program to print the following pattern:

Copy code
3 2 1
3 2 1
Explanation:

The pattern has 2 rows.
Each row contains numbers starting from 3 and decreasing to 1.
    */

/* <ANSWER 2>
#include<iostream>
using namespace std;
int main(){
  cout<<"solve pattern 3,2,1"<<endl;
  int n;
  cin>>n;
  cout<<"your starting number is : "<<n<<endl;

  int i = 0;


  while(i<n){

    int j = 0;
    while(j<n){
      
      
      
      int x ;
      x = n-j;
      
      cout<<x<<" ";
      j=j+1;



    }

    cout<<endl;
    i=i+1;
    
    
  }

  
    
  

  
  
 
}
*/
  

  

  

