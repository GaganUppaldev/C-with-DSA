//Here we will code and learn concepts of Object oriented programming 
//class 
//It is user defined Datatype


#include<iostream>

using namespace std;


class student{     //Created class named student

public:   //By default this was private means this tenth will not be accesed from outside the class
int tenth; 



};




int main() {
  student marks; //created object for class students

  marks.tenth = 100;
  cout<<marks.tenth;

    

}
