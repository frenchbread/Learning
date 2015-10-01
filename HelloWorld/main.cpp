//
//  main.cpp
//  HelloWorld
//
//  Created by Damir Mustafin on 14/09/15.
//  Copyright (c) 2015 Damir Mustafin. All rights reserved.
//

#include <iostream>
using namespace std;

struct ShoeSize
{
    char width;
    int number;
};
struct ShoeType
{
    char style;
    ShoeSize size;
    double price;
};
ShoeType shoe1, shoe2;

int main() {
    
    cout << shoe1.style << endl;
    
    return 0;
}
