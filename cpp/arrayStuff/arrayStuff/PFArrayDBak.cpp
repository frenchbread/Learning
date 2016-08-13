//
//  PFArrayDBak.cpp
//  arrayStuff
//
//  Created by Damir Mustafin on 19/11/15.
//  Copyright (c) 2015 Damir Mustafin. All rights reserved.
//

#include "PFArrayD.h"
#include "PFArrayDBak.h"
#include <iostream>

using namespace std;

PFArrayDBak :: PFArrayDBak() : PFArrayD(), usedB(0) {
    b = new double[capacity];
}

PFArrayDBak :: PFArrayDBak(int capacityValue) : PFArrayD(capacityValue), usedB(0) {
    b = new double[capacity];
}

PFArrayDBak :: PFArrayDBak(const PFArrayDBak& Object) : PFArrayD(Object), usedB(0) {

    usedB = Object.usedB;
    b = new double[capacity];
    for (int i=0; i < usedB; i++)
        b[i] = Object.b[i];
}

PFArrayDBak& PFArrayDBak :: operator=(const PFArrayDBak& rightSide) {

    int oldCapacity = capacity;
    PFArrayD :: operator=(rightSide);
    
    if (oldCapacity != rightSide.capacity) {
        delete[] b;
        b = new double[rightSide.capacity];
    }
    
    usedB  = rightSide.usedB;
    for (int i=0; i< usedB; i++)
        b[i] = rightSide.b[i];
    
    return *this;
}


PFArrayDBak :: ~PFArrayDBak() {
    delete [] b;
}

// Makes a backup copy of the partially filled array
void PFArrayDBak ::  backup() {
    usedB = used;
    for (int i=0; i<usedB; i++)
        b[i] = a[i];    // This is a copy, NOT an assignment
}

// Restore the partially filled array to the last saved version
void  PFArrayDBak :: restore() {
    used = usedB;
    for (int i=0; i<used; i++)
        a[i] = b[i];    
}