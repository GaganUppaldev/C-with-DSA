#include <iostream>
#include <vector>

using namespace std;
int main () {
   vector<int> v;
   cout<<"Capacity -->"<<v.capacity()<<endl;

   v.push_back(1);
   cout<<"Capacity -->"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity -->"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity -->"<<v.capacity()<<endl;//capcity doubles

    cout<<"element at 2 index "<<v.at(2)<<endl;

    cout<<"element in front"<<v.front()<<endl;
    cout<<"element in back"<<v.back()<<endl;


    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }

    cout<<endl;

    v.pop_back();
    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }

    

    
    
    
}
