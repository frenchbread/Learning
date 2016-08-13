//
//  main.cpp
//  dTime
//
//  Created by Damir Mustafin on 06/11/15.
//  Copyright (c) 2015 Damir Mustafin. All rights reserved.
//

//This is the implementation file: dtime.cpp of the class DigitalTime.
//The interface for the class DigitalTime is in the header file dtime.h.
// This is the same as 11-02.cpp

#include <iostream>
using namespace std;
#include "dtime.h"

int main(){
    DigitalTime clock, oldClock;
    
    cout << "You may write 0:00 or 24:00" << endl;
    cout << "Enter time in 24-hour notation: ";

    cin >> clock;
    
    oldClock = clock;
    clock.advance(15);
    if(clock == oldClock)
        cout << "Something is wrong." << endl;
    cout << "You entered " << oldClock << endl;
    cout << "15 minutes later the time will be " << clock << endl;
    
    clock.advance(2, 15);
    cout << "2 hours and 15 minutes after that will be: " << clock << endl;
    
    return 0;
}