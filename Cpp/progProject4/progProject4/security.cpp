//
//  security.cpp
//  progProject4
//
//  Created by Damir Mustafin on 13/11/15.
//  Copyright (c) 2015 Damir Mustafin. All rights reserved.
//

#include "security.h"
using namespace std;

int Security::validate(string username, string password){
    
    cout << "Logging in with: " << username << " and " << password << endl;
    
    if ((username=="abbott") && (password=="monday"))
        return 1;
    
    if ((username=="costello") && (password=="tuesday"))
        return 2;
    
    return 0;
}