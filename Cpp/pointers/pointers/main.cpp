//
//  main.cpp
//  pointers
//
//  Created by Damir Mustafin on 05/11/15.
//  Copyright (c) 2015 Damir Mustafin. All rights reserved.
//

#include <iostream>
using std::cout;
using std::endl;

int main(int argc, const char * argv[]) {
    
    int *p1, *p2;
    
    p1 = new int;
    
    *p1 = 42;
    p2 = p1;
    
    cout << "*p1 = " << *p1 << endl;
    cout << "*p2 = " << *p2 << endl;
    
    cout << "------------------" << endl;
    
    *p2 = 53;
    
    cout << "*p1 = " << *p1 << endl;
    cout << "*p2 = " << *p2 << endl;

    cout << "------------------" << endl;
    
    p1 = new int;
    *p1 = 88;
    cout << "*p1 = " << *p1 << endl;
    cout << "*p2 = " << *p2 << endl;
    
    return 0;
}
