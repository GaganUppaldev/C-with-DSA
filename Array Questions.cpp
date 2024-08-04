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
