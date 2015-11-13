//
//  user.h
//  progProject4
//
//  Created by Damir Mustafin on 13/11/15.
//  Copyright (c) 2015 Damir Mustafin. All rights reserved.
//

#ifndef __progProject4__user__
#define __progProject4__user__

#include <stdio.h>
#include <string>
using namespace std;

class User{

public:
    User(string username, string password);
    bool Login();
private:
    string username;
    string password;
    
};

#endif /* defined(__progProject4__user__) */
