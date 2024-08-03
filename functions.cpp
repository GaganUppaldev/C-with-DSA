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
