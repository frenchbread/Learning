//
//  PFArrayD.cpp
//  arrayStuff
//
//  Created by Damir Mustafin on 19/11/15.
//  Copyright (c) 2015 Damir Mustafin. All rights reserved.
//

#include "PFArrayD.h"
#include <iostream>

using namespace std;

PFArrayD :: PFArrayD() {
    
    capacity = 50;
    used     = 0;
    a        = new double[capacity];
}

PFArrayD :: PFArrayD(int capacityValue) {
    
    capacity = capacityValue;
    used     = 0;
    a        = new double[capacity];
}

PFArrayD :: PFArrayD(const PFArrayD& pfaObject) {

    capacity = pfaObject.getCapacity();
    used     = pfaObject.getNumbUsed();
    
    a = new double[capacity];
    for (int i=0; i < used; i++)
        a[i] = pfaObject.a[i];
}

PFArrayD& PFArrayD :: operator=(const PFArrayD& rightSide) {

    if (capacity != rightSide.capacity)
    {
        delete[] a;
        a = new double[rightSide.capacity];
    }
    
    capacity = rightSide.capacity;
    used     = rightSide.used;
    for (int i=0; i< used; i++)
        a[i] = rightSide.a[i];
    
    return *this;
}

double& PFArrayD :: operator[](int index) {

    if (index >= used)
    {
        cout << "Illigal index in PFArrayD.\n";
        exit(1);
    }
    
    return a[index];
}

PFArrayD :: ~PFArrayD() {
    delete [] a;
}

void PFArrayD :: addElements(double element) {
    if (used >= capacity) {
        cout << "Attempts to exceed capacity in PFArrayD.\n";
        exit(1);
    }
    
    a[used] = element;
    used++;
}
