#include <iostream>
#include<list>
using namespace std;




int main(){

    list<int> l ;

    l.push_front(1); //added value infront
     l.push_back(2);//added value in back

    for(int i:l){ //printed values
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());//deleted value from front
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"size of list is "<<l.size()<<endl;

    
    
}

