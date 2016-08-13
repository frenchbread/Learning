//
//  admin.h
//  progProject4
//
//  Created by Damir Mustafin on 13/11/15.
//  Copyright (c) 2015 Damir Mustafin. All rights reserved.
//

#ifndef __progProject4__admin__
#define __progProject4__admin__

#include <stdio.h>
#include <iostream>
using namespace std;

class Administrator {
public:
    bool Login();
    Administrator(string username, string password);
private:
    string username;
    string password;
};


#endif /* defined(__progProject4__admin__) */
