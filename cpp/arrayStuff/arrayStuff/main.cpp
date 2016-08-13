//
//  main.cpp
//  arrayStuff
//
//  Created by Damir Mustafin on 19/11/15.
//  Copyright (c) 2015 Damir Mustafin. All rights reserved.
//

#include "PFArrayD.h"
#include "PFArrayDBak.h"
#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;

void testPFArrayDBak();

int main() {

    cout << "This program tests the class PFArrayDBak.\n";
    
    char ans;
    do {
        testPFArrayDBak();
        cout << "Test again? (y/n) ";
        cin >> ans;
    } while( (ans == 'y') || (ans == 'Y') );
    
    return 0;
}


// Conducts one test for the class PFArrayDBak
void testPFArrayDBak() {
    
    int cap;
    
    cout << "Enter capacity of the supar array: ";
    cin >> cap;
    PFArrayDBak tmp(cap);
    
    cout << "Enter up to " << cap << " non-negative numbers.\n";
    cout << "Place a negative number at the end.\n";
    
    double next;
    
    cin >> next;
    while ( (next >= 0) && (!tmp.full()) ) {
        tmp.addElements(next);
        cin >> next;
    }
    
    if (next >= 0) {
        cout << "Could not read all numbers.\n";
        while(next >= 0)
            cin >> next;
    }
    
    int count = tmp.getNumbUsed();
    
    cout << "The following " << count << " numbers " << "are read and stored:\n";

    for (int index=0; index < count; index++)
        cout << tmp[index] << " ";
    
    cout << endl;
    
    cout << "Now backing up the array ...\n";
    
    tmp.backup();
    
    cout << "Now emptying the array   ...\n";
    
    tmp.emptyArray();
    
    cout << tmp.getNumbUsed() << " numbers are now stored in the array.\n";
    
    cout<< "Now restoring the array  ...\n";

    tmp.restore();
    
    count = tmp.getNumbUsed();
    
    cout << "The following " << count << " numbers" << "are now stored:\n";

    for (int index=0; index < count; index++)
        cout << tmp[index] << " ";
    
    
    cout << endl;
}