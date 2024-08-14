//Queue is just opposite of stack and more simple
//Just remember first in - first out 

#include<iostream>
#include <queue>
using namespace std;

int main() {
    queue<string>s;
    s.push("Ideas");//first
    s.push("are");
    s.push("immortal");//last

    cout<<s.front()<<endl;//ideas on front will be printed

}

