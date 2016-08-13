//
//  main.cpp
//  templatesTest
//
//  Created by Damir Mustafin on 18/12/15.
//  Copyright (c) 2015 Damir Mustafin. All rights reserved.
//

#include <iostream>
using namespace std;

template<class T, class K>
void showStuff(T stuff1, K stuff2, K stuff3);

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    showStuff(1, "qwe", "qweqwe");
    
    return 0;
}

template<class T, class K>
void showStuff(T stuff1, K stuff2, K stuff3) {
    cout << stuff1 << endl
    << stuff2 << endl
    << stuff3 << endl;
}
