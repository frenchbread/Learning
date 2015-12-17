//
//  main.cpp
//  vectorContainer
//
//  Created by Damir Mustafin on 18/12/15.
//  Copyright (c) 2015 Damir Mustafin. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {

    vector<int> container;
    
    for (int i = 1; i<=4; i++) {
        container.push_back(i);
    }
    
    cout << "Here is what is in the container: \n";
    
    vector<int>::iterator p;
    
    for (p = container.begin(); p!=container.end(); p++) {
        cout << *p  << " ";
    }
    
    cout << endl;
    
    cout << "Setting entries to 0: \n";
    
    for (p = container.begin(); p!=container.end(); p++) {
        *p = 0;
    }
    
    cout << "Containre now contains: \n";
    
    for (p=container.begin(); p!=container.end(); p++) {
        cout << *p << " ";
    }
    
    return 0;
}
