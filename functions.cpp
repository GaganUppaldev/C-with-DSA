//function
//Baisc add function code i will add bigger programs while i solve and they will be inside comments
#include <iostream>
using namespace std;

int add(int a , int b){
         int sum;
         sum = a + b;
         cout<<"The sum of "<<a<<" and "<<b<<" is "<<sum<<endl;
         return sum;
         
         
}

int main(){
         int a;
         int b;
         cin>>a;
         cout<<"your first number is "<<a<<endl;
         cin>>b;
         cout<<"your first number is "<<b<<endl;

         //calling add
         int sum = add(a,b);
         cout<<sum<<endl;
         
         
         
         
         
         
}
/*
// find power b of a means a^b
#include <iostream>
using namespace std;

int power(int a ,int b){
         int sol = 1;
         for (int i=1;i<=b;i++){
                  
                  sol= sol*a;
         }
         return sol;
}



int main(){
         int a ;
         int b ;
         cout<<"print the integer a"<<endl;
         cin>>a;
         cout<<a<<"  is your interger"<<endl;
         cin>>b;
         cout<<b<<"  is  power of integer "<<a<<endl;
         //function calling
         int fin = power(a,b);
         cout<<fin<<endl;
         
         
         
         
}
*/
