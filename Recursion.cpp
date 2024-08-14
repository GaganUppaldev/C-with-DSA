//Recursion is a way for a function to solve a problem by calling itself. It breaks down a big problem into smaller, similar problems until it reaches a simple case that can be solved directly
//  Base case and relation is must for doing this and any processing could be a add on

//Basic recursion < Find sum of number s till n number
/*
#include<iostream>
using namespace std;

// Recursive function to calculate the sum of first n natural numbers
int test(int n) {
    // Base case
    if(n == 0) {
        return 0;
    }

    // Recursive case: sum of n + sum of numbers from 1 to n-1
    int sum = n + test(n - 1);

    cout << "Current sum at n = " << n << ": " << sum << endl;

    return sum;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int final = test(n);
    cout << "Final answer: " << final << endl;
}


*/

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

//======================================================================================================================================
//Stairs problems 
//calculate number of ways

/*
#include<iostream>
#include <queue>
using namespace std;

int ways(int n){
    //Base case
    if(n==0 || n==1){
        return 1;
    }

    int final = ways(n-1) + ways(n-2);

    return final;
    
}

int main() {

    cout<<"stairs problem"<<endl;
    cout<<"provide number of stairs"<<endl;
    int n ;
    cin>>n;
    int end = ways(n);
    cout<<end<<endl;
 
    

}
*/

    
