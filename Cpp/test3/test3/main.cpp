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
    void f(int a){
        cout << "Class A " << a <<endl;
    }
};



int main(int argc, const char * argv[]) {

    B* b = new D;
    D d1;
    B b1;
    
    b->f();
    
    b1.f();
    d1.f(1);
    
    return 0;
}
