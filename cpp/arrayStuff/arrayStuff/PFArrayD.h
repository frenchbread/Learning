//
//  PFArrayD.h
//  arrayStuff
//
//  Created by Damir Mustafin on 19/11/15.
//  Copyright (c) 2015 Damir Mustafin. All rights reserved.
//

#ifndef PFArrayD_H
#define PFArrayD_H

class PFArrayD {
    
public:
    PFArrayD();                     // Initialize with a capacity of 50;
    PFArrayD(int capacityValue);    // User defined capacity
    
    PFArrayD(const PFArrayD& pfaObject);
    PFArrayD& operator=(const PFArrayD& rightSide);
    double& operator[](int index);
    ~PFArrayD();
    
    void addElements(double element);
    bool full()       const { return (capacity == used); }
    int getCapacity() const { return capacity; }
    int getNumbUsed() const { return used; }
    void emptyArray() { used = 0; }
    
protected:
    double* a;      // For an array of doubles
    int capacity;   // For the size of the array
    int used;       // For the number of array positions currently being used
    
};

#endif /* defined(__arrayStuff__PFArrayD__) */
