//
//  main.cpp
//  test3
//
//  Created by Damir Mustafin on 27/11/15.
//  Copyright (c) 2015 Damir Mustafin. All rights reserved.
//

#include <iostream>
using namespace std;

class B{
public:
    virtual void f(){
        cout << "Class B" << endl;
    }
};

class D : public B{
public:
    void f(){
        cout << "Class A" << endl;
    }
};



int main(int argc, const char * argv[]) {

    B* b = new D;
    
    b->f();
    
    return 0;
}
