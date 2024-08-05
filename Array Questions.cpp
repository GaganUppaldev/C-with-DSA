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
