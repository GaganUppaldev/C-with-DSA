#include <iostream>
using namespace std;

struct data{
    string name ;
    int age ;
    
    void print(){
        
        cout << name << "  " << age ;
    }
};
int main (){
    cout << "struct" << endl;
    
    data one ;
    one.name = "JOHN" ;
    one.age = 19;
    one.print();

}
