#include <iostream>
using namespace std;



int main() {
    //creating baisc variable
    
    int a = 1; //inside memeory integer 1 is stored with address a
    //But a is not a actual adress
    cout<<a<<endl;
    //& operation is used to get the address of a variable

    int *p = &a;
    cout<<p<<endl;//This is adress inside memory and a library is used to map variable name like a with this adress
     cout<<*p<<endl; //this is used to get the value of a variable from the adress of a variable
    int p2 = a;
    cout<<p2<<endl;//here we got value of a and not adress

    p2++;
    cout<<p2<<endl;//value got added by 1

    int *q = &a;
    cout<<q<<endl;

    //adress size is 8 bytes

    int size = sizeof(a);
    int size2 = sizeof(*p);
    

    cout<<size<<endl;
    cout<<size2<<endl;//4 bytes and i will remian same for adress *p because it only store adress not value
    
  //Important concept 

    int test = 1;
    int *test2 = &test;//adress
    cout<<test2<<endl;
    cout<<sizeof(test2)<<endl;//adress size is 8 bytes
    cout<<" adress  "<<test2+1<<" size after +1 is "<<sizeof(test2+1)<<endl;//adress got added by 4 bytes
    cout<<" on addition adress got added by 4"<<endl;
    cout<<test2-1<<" size after -1 is "<<sizeof(test2-1)<<endl;//adress got subtracted by 4 bytes

    cout<<"means size of adress will not be effected ay + or - it will remain 8"<<endl;

//summary :
////adress got added or subtracted by 4 bytes
//means size of adress will not be effected ay + or - it will remain 8
