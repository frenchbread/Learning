//
//  main.cpp
//  HelloWorld
//
//  Created by Damir Mustafin on 14/09/15.
//  Copyright (c) 2015 Damir Mustafin. All rights reserved.
//

#include <iostream>
using namespace std;

void printSomething(int x, int y){
    cout << "Hello world!\n";
    cout << x+y;
    cout << "\n";
}

int main(int argc, const char * argv[]) {
    
    int number = 0;
    
    printSomething(10, 30);
    
    cout << "Enter some number: ";
    cin  >> number;
    
    cout << "You've just entered " + to_string(number) + " \n";
    
    return 0;
}