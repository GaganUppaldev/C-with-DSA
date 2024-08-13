//Recursion is a way for a function to solve a problem by calling itself. It breaks down a big problem into smaller, similar problems until it reaches a simple case that can be solved directly
//  Base case and relation is must for doing this and any processing could be a add on

#include <iostream>
using namespace std;

int factorial(int n){
    //base case 
    
    if(n == 1)
        return 1;//zero factorial is 1
    int smaller_problem = factorial(n-1);
    int bigger_problem = n * smaller_problem;

    return bigger_problem;
    
    
}



int main() {
    int n ;
    cin >> n;
    int ans = factorial(n);

    cout<<ans<<endl;

    return 0;
}

    
