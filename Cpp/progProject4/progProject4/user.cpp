//
//  user.cpp
//  progProject4
//
//  Created by Damir Mustafin on 13/11/15.
//  Copyright (c) 2015 Damir Mustafin. All rights reserved.
//

#include "user.h"
#include "admin.h"
using namespace std;

User::User(string un, string pw){
    username = un;
    password = pw;
}

bool User::Login(){
    
    Administrator admin(username, password);

    
    if (admin.Login() == true )
        return true;
    else
        return false;


    return true;
}