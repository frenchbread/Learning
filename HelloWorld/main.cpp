//
//  main.cpp
//  HelloWorld
//
//  Created by Damir Mustafin on 14/09/15.
//  Copyright (c) 2015 Damir Mustafin. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main(int argc, const char * argv[]) {
    
    for (int i=0; i<=30; i++) {
        cout << i << " - " << rand()%100 << endl;
    }
  
    return 0;
}