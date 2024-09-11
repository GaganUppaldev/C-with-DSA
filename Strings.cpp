#include <iostream>
using namespace std;
int main(){

    string name;
    cout<<"write your name"<<endl;
    cin>>name;
    cout<<name;

    cout << name.length() << endl;
    cout << name[0] <<endl;
    cout << name[2] <<endl;
    cout << "subtr = " << name.substr(0,5) <<endl;
    
    

    
}
