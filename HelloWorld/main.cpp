//
//  main.cpp
//  HelloWorld
//
//  Created by Damir Mustafin on 14/09/15.
//  Copyright (c) 2015 Damir Mustafin. All rights reserved.
//

#include <iostream>
using namespace std;

class User{
public:
    string name;
    int phone;
    string address;
    
    void sayHello(string name, string address){
        cout << "Hello! \n";
        cout << "My name is " << name << ". I am from " << address << "\n";
    }
    void setCodeName(string name){
        codename = name;
    }
    string getCodeName(){
        return codename;
    }
    
private:
    string codename;
    
};


int main(int argc, const char * argv[]) {
    
    User userOne;
    
    userOne.name = "Bob";
    userOne.phone = 123456789;
    userOne.address = "Helsinki, Finland";
    
    userOne.sayHello(userOne.name, userOne.address);
    
    userOne.setCodeName("Agent X");
    
    cout << userOne.getCodeName() << "\n";
    
    return 0;
}