#include <iostream>
using namespace std;
int main(){

    string name;
    cout<<"write your name"<<endl;
    cin>>name;
    cout<<name;

    cout << name.length() << endl;
    cout << name[0] <<endl;
    cout << name[2] <<endl;
    cout << "subtr = " << name.substr(0,5) <<endl;

    
    

    
}

//getline used to take input of lines with spaces  in words into string

#include <iostream>
#include <string>

using namespace std;

int main() {
    

    // Full line input
    string fullLine;
    cout << "Enter a full line: ";
    getline(cin, fullLine); // Reads until the newline character
    cout << "You entered: " << fullLine << endl;

    return 0;
}

/*
#include <iostream>
#include <QString>


    QString greeting = "Hello";

    greeting.append(", World!");


    std::cout << "Greeting: " << greeting.toStdString() << std::endl;

    int length = greeting.length();
    std::cout << "Length of the greeting: " << length << std::endl;

 
    QChar firstChar = greeting.at(0);
    std::cout << "First character: " << firstChar.toLatin1() << std::endl;


    std::string stdString = greeting.toStdString();
    std::cout << "Converted to std::string: " << stdString << std::endl;

    
    if (greeting.contains("World")) {
        std::cout << "The greeting contains 'World'." << std::endl;
    }

    return 0;
}*/
