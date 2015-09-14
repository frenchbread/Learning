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
    User(string name){
        setCodeName(name);
    }
    void sayHello(){
        cout << "Hello! \n";
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
    
    User user("Bond");
    
    cout << user.getCodeName() << endl;
    
    user.sayHello();
    
    return 0;
}