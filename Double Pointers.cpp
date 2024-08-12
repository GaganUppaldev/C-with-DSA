#include <iostream>
using namespace std;

int main(){
    //Double pointer
    int a = 1 ;
    int *p = &a;//adress of a
    int **q = &p;//adress of p

    cout<<&a<<endl;//adress of a
    cout<<p<<endl;//adress of a
    cout<<q<<endl;//adress of p

    //getting values
    cout<<a<<endl;
    cout<<*p<<endl;
    cout<<**q<<endl;
    

    //we can make make mutile pointers using ****in front
    
}
