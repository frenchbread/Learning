//
//  main.cpp
//  call-by-value
//
//  Created by Damir Mustafin on 05/11/15.
//  Copyright (c) 2015 Damir Mustafin. All rights reserved.
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

typedef int* IntPointer;

void sneaky(IntPointer map);

int main(int argc, const char * argv[]) {

    IntPointer p;
    
    p = new int;
    *p = 77;
    cout << "Before *p = " << *p << endl;
    
    sneaky(p);
    
    cout << "Afte: *p = " << *p << endl;
    
    return 0;
}

void sneaky(IntPointer temp){
    *temp = 99;
    cout << "Isdide *temp " << *temp << endl;
}
