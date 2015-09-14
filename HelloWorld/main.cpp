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
    void sayHello(){
        cout << "Hello! \n";
    }
    
};


int main(int argc, const char * argv[]) {
    
    User userOne;
    
    userOne.sayHello();
    
    return 0;
}