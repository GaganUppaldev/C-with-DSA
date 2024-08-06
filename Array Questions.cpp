//Linked list 
#include <iostream>
using namespace std;

int search(int size,int key,int arr[]) { 

  for(int i=0;i<size;i++){
    
    
    if (arr[i]==key){
      
      cout<<key<<" PRESENT at index "<<i<<endl;
      
    }
    else{
    
      cout<<key<<" is not present at index "<<i<<endl;
    }
    
    
  }

  return 0;
  
  
  
}

int main(){
  int key;
  cin>>key;
  int arr[5] = {10,20,30,40,50};
  int size = sizeof(arr)/sizeof(int);
  cout<<size<<endl;
  
  
  
  int end  = search(size,key,arr);
  cout<<end<<endl;
  
}
//REVERSED AN ARRAY 
/*
#include <iostream>
using namespace std;


void reverse(int arr[], int size ){ //i suffered errror because i used int instead of void
    int first = 0; //error here came because i define arr[0] = first
    int last = size - 1;//error here came because i defined arr[size-1] = last;

    while(first < last ){
        int temp = arr[first];
        arr[first] = arr[last];
        arr[last] = temp;
        first++;//i forgot to increment first
        last--;//i forgot to deincrement last
    }
}
    

    

void print(int arr[] , int size){//i suffered errror because i used int instead of void
    for(int i=0;i<size;i++){
        cout << arr[i]<<" ";
    }
    
}

int main(){
 int arr [6] = {3,1,2,7,11,8};
 int size =  sizeof(arr)/sizeof(int);
 cout<<size<<endl;

reverse(arr,size);
print(arr,size);



}
*/
//=======================================================================================================================================
/*<OUESTION 1> Finding muliple elements from an array 

I BUILT LOGIC MYSELF BUT I HAD A EXEPTION IN DETERMING WEATHER FIRST ELEMENT HAVE MULTIPLE OR NOT BUT STILL CODE WORLED WELL FOR REST SO I AM ADDIN
ING IT HERE

#include <iostream>
using namespace std;
int main(){
  
  int arr[3] = {1,2,1};
  int size;
  size = sizeof(arr)/sizeof(int);
  cout<<size<<endl;

  for(int i=0;i<=size-1;i++){
    cout<<arr[i]<<endl;
    int first = 0;
    int final = arr[first]^arr[i];
    cout<<final<<endl;
    if(final==0){
      cout<<"Duplicate element is "<<arr[i]<<" "<<i<<endl;
    }
    else{
      cout<<"No duplicate element at index "<<i<<endl;
    }
  }
}
    
===========================CORRECT APPROACH=========================================================================================
#include <iostream>
using namespace std;

int main() {
    int arr[3] = {1, 2, 1};
    int size;
    size = sizeof(arr) / sizeof(int);
    cout << "Array size: " << size << endl;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                cout << "Duplicate element is " << arr[i] << " at index " << j << endl;
            }
        }
    }

    return 0;
}
========================================================================================================================================
<QUESTION  2 > 
FINDING A DUBILCATE ELEMENT FROM AN ARRAY WHERE ELEMENTS ARE FROM N TO N-1 AND ALL INTEGERS only one pair is dublicate and rest are 
differrent 
WE CAN SOLVE IT WITH TWO APPROACHES AND HERE ARE BOTH

//SOLVING WITH LINEAR SEARCH
#include <iostream>
using namespace std;

int main() {

  int arr[5] = {1,2,3,4,3};//n-1

  //finding dubilcate 
  //linear search 

  for(int i=0;i<5;i++){
    for(int j=i+1;j<5;j++){
      if(arr[i]==arr[j]){
        cout<<arr[i]<<" is dublicate sir"<<endl;
      }
    }
    
    
  }


=======================(XOR METHOD)

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 3}; // array with one duplicate
    int size = sizeof(arr) / sizeof(int);

    int xor_all_elements = 0;
    int xor_1_to_n_minus_1 = 0;

    // XOR all elements in the array
    for (int i = 0; i < size; i++) {
        xor_all_elements ^= arr[i];
    }

    // XOR all numbers from 1 to n-1
    for (int i = 1; i <= size - 1; i++) {
        xor_1_to_n_minus_1 ^= i;
    }

    // The result is the duplicate element
    int duplicate = xor_all_elements ^ xor_1_to_n_minus_1;

    cout << "Duplicate element: " << duplicate << endl;

    return 0;
}



*/
