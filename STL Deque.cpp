/*  what is Deque?
deque (short for double-ended queue) is a sequence container in the Standard Template Library (STL) that allows fast insertion and deletionof elements at both the front and the back.
Unlike vector, which only allows efficient operations at the back, deque provides efficient operations at both ends, making it versatile for use cases where elements need to be added or 
removed from either end of the sequence. The deque is implemented as a dynamic array of arrays, allowing it to grow and shrink efficiently from both ends.
*/

#include <iostream>
#include <deque>

using namespace std;
int main () {

    deque<int> d;

    d.push_front(1);
    d.push_back(2);

    for(int i :d){
        cout<<i<<" ";
    }
    

    

    
    
    
}
