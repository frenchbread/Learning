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
        cout << "My name is " << name << ". I an from " << address << "\n";
    }
    
};


int main(int argc, const char * argv[]) {
    
    User userOne;
    
    userOne.name = "Bob";
    userOne.phone = 123456789;
    userOne.address = "Helsinki, Finland";
    
    userOne.sayHello(userOne.name, userOne.address);
    
    return 0;
}