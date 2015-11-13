//
//  admin.cpp
//  progProject4
//
//  Created by Damir Mustafin on 13/11/15.
//  Copyright (c) 2015 Damir Mustafin. All rights reserved.
//

#include "admin.h"
#include "security.h"
#include <stdio.h>
#include <iostream>
using namespace std;

Administrator::Administrator(string un, string ps){
    username = un;
    password = ps;
}

bool Administrator::Login(){
    
    if (Security::validate(username, password) != 0){
        return true;
    }
    
    return false;
}

