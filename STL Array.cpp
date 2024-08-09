#include <iostream>
#include <array>

using namespace std;
int main () {
    array<int , 5> a = {1, 2, 3, 4, 5};
    int size = a.size(); //find size easily
    cout<<size<<endl;

    for(int i = 0; i < size; i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"element at second index is "<<a.at(2)<<endl; //access element at index 2"
    cout<<a.empty()<<endl; //check if array is empty or not

    cout<<"first element is "<<a.front()<<endl; //first element"
    cout<<"last element is"<<a.back()<<endl; //last element"

    
    
}
