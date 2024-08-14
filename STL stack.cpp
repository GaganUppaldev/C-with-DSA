//Stack 
//We can learn about it with Basic example of plates on table , plate 1 first and  than plate2 on plate 1 but we will pick plate2 first than plate 1 .
//Means First will go out in last and last will be out in first 

#include<iostream>
#include <stack>
using namespace std;

int main() {
    stack<string>s;
    s.push("Ideas");//first
    s.push("are");
    s.push("immortal");//last

    cout<<s.top()<<endl; //immortal is printed and note that it was last

    //s.pop only removes the last element not delete the whole stack
    s.pop();
    cout<<s.top()<<endl; //are is printed and note that it was last
}
