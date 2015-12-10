//
//  main.cpp
//  templates
//
//  Created by Damir Mustafin on 10/12/15.
//  Copyright (c) 2015 Damir Mustafin. All rights reserved.
//

#include <iostream>
#include <string>

#include "PFArray.h"
#include "PFArray.cpp"

using std::cin;
using std::cout;
using std::endl;
using std::string;

using namespace PFArrayS;

int main(int argc, const char * argv[]) {

    PFArray<int> a(10);
    
    cout << "Enter up to 10 positive integers. \n";
    cout << "Place a negative number at the end. \n";
    
    int next;
    
    cin >> next;
    
    while ((next >= 0) && (!a.full())) {
        a.addElement(next);
        cin >> next;
    }
    
    if (next >= 0) {
        cout << "Could not read all numbers. \n";
        
        while (next >= 0) {
            cin >> next;
        }
    }
    
    cout << "You entered the following: \n";
    
    int index;
    int count = a.getNumberUsed();
    
    for (index = 0; index < count; index++) {
        cout << a[index] << " ";
    }
    
    cout << endl;
    
    PFArray<string> b(3);
    
    cout << "Enter three words: \n";
    string nextWord;
    
    for (index = 0; index < 3; index++) {
        cin >> nextWord;
        b.addElement(nextWord);
    }
    
    cout << "You wrote the following: \n";
    count = b.getNumberUsed();
    for (index = 0; index < count; index++) {
        cout << b[index] << " ";
    }
    
    cout << endl;
    cout << "I hope you really mean it. \n";
    
    return 0;
}
