//
//  PFArrayDBak.h
//  arrayStuff
//
//  Created by Damir Mustafin on 19/11/15.
//  Copyright (c) 2015 Damir Mustafin. All rights reserved.
//

#ifndef PFArrayDBak_H
#define PFArrayDBak_H

#include <stdio.h>
#include "PFArrayD.h"

class PFArrayDBak : public  PFArrayD {
    
public:
    PFArrayDBak();
    // Initialize with a capacity of 50;
    PFArrayDBak(int capacityValue);
    
    PFArrayDBak(const PFArrayDBak& Object);
    PFArrayDBak& operator=(const PFArrayDBak& rightSide);
    ~PFArrayDBak();
    
    void backup();
    // Makes a backup copy of the partially filled array
    void restore();
    // Restore the partially filled array to the last saved version
    
    
private:
    double* b;    // for a backup pf main array
    int usedB;    // backup for inherited member variable used
};


#endif /* defined(__arrayStuff__PFArrayDBak__) */
