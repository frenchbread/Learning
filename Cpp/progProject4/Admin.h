//
//  Admin.h
//  progProject4
//
//  Created by Damir Mustafin on 13/11/15.
//  Copyright (c) 2015 Damir Mustafin. All rights reserved.
//

#ifndef progProject4_Admin_h
#define progProject4_Admin_h

#include <iostream>
using namespace std;

class Administrator {
public:
    void login(string username, string password);
private:
    string username;
    string password;
};


#endif
