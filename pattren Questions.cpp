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

  //<QUESTION2>-----------------------------------------------------------------------------------------------------------------------

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
/*======================================================================================================================================
<Question 4> 
actually i solve sum questions before it

QUESTION IS TO GET PATTREN LIKE BELOW ON GIVING INPUT = 5 ( triangle pattren)
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * * * 


#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int i = 0 ;
  while(i<=n){
    int j = 0;
    while(j<=i){
      cout<<"*"<<" ";
      j=j+1;
      
    }
  cout<<endl;
  i = i+1;
    
  }
  
}


*/
//=======================================================================================================================================
/*<Question 5>
  This pattren : printing half pyramid using numbers
  
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 

<ANSWER>
  #include <iostream>
using namespace std;



#include <iostream>
using namespace std;

int main() {

    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}
  */
  
//=====================================================================================================================================
/* HERE IS EXPLANATION IN SOME LOGICAL WAY FOR SEMI-PYRAMID PATTRENS WITH BOTH NUMBER AND *

#include <iostream>
using namespace std;



#include <iostream>
using namespace std;

int main() {

    int n ;
    cin>>n;

    for(int i = 1;i<=n;i++){ //this is number of times row print
        
        for(int j =1;j<=i;j++){ //this is for element inside row print which is here equal to number of row and row is increaing
            cout<<"*"<<"";
        }
        cout<<endl;
    }

    int rows;
    cin>>rows;
    
    for(int i =1;i <= rows;i++){ // i = rows
        for(int j =1;j<=i;j++){ //j = number of element inside row , j=i and i = number of rows
            cout<<i<<" ";
            
        }
        cout<<endl;
        
    }
    
}
  */
//=======================================================================================================================================
/* <OUESTION 6 > 
Printing half pyramid using Alphabets
a 
b b 
c c c 
d d d d 

TO solve this we need a logic or understanding of conversion  so here is logic understand it first 
   
    char b = 'd';
    int c = b - 'a' + 1;
    cout << c<<endl; 

    char final ;
    final = 'a' + c - 1;
    cout<<final;

<ANSWER> 
#include <iostream>
using namespace std;

int main() {
    
    char input;
    char a = 'a';

    cout << "Enter character for last row: ";
    cin>>input;

    for(int i = 1;i<=input-'a'+1;i++){   //for row
        for(int j = 1 ; j<=i; j++){ //for number of times element will print
            cout<<a<<" ";
        }
        cout<<endl;
        a++;
    }


//=====================================================================================================================================
//<QUESTION 7>
//Print  N half inverted pyramid using * ?
//OUTPUT SOULD BE LIKE BELOW  ON GIVING INPUT 5
/*

* * * * * 
* * * * 
* * * 
* * 
* 
 

*/
//SOLUTION
/*
#include <iostream>
using namespace std;



int main() {
    int n;
    cin>>n;

    for(int x = n ; x>=1 ; x--){
      
        for(int j = 1 ; j<=x ; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
        
    }
}
*/
//======================================================================================================================================
//<OUESTION 8>
//Inverted pyramind with numbers
// It is correctly linked with above question number 7 and a minor change will provide this output on input 5
/*
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 
*/


//<SOLUTION>

/*
#include <iostream>
using namespace std;



int main() {
    int n;
    cin>>n;

    for(int x = n ; x>=1 ; x--){
      
        for(int j = 1 ; j<=x ; j++){ //here is small change
            cout<<j<<" ";
        }
        cout<<endl;
        
    }
}



*/
 


   
    
    
    
    
    
    
    


