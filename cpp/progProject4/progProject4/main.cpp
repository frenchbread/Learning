//
//  main.cpp
//  progProject4
//
//  Created by Damir Mustafin on 13/11/15.
//  Copyright (c) 2015 Damir Mustafin. All rights reserved.


#include <iostream>
#include "user.h"
#include "admin.h"
using namespace std;

// Main method
int main()
{
    // Hard-coded tests.  Abbott has User access, Costello has
    // user and admin access.
    //
    User user1("abbott", "monday"), user2("lynn", "guini"), user3("costello", "tuesday");

    Administrator admin1("abbott", "monday"), admin2("kerry", "oki"), admin3("costello", "tuesday");
    
    cout << "Results of login:" << endl;
    
    if (user1.Login() == true){
        cout << "Login succeeded!" << endl;
    }else{
        cout << "Credentials are incorrect" << endl;
    }
    
    cout << "\n";
    
    if (user2.Login() == true){
        cout << "Login succeeded!" << endl;
    }else{
        cout << "Credentials are incorrect" << endl;
    }
    
    cout << "\n";
    
    if (user3.Login() == true){
        cout << "Login succeeded!" << endl;
    }else{
        cout << "Credentials are incorrect" << endl;
    }
    
    cout << "\n";
    
    if (admin1.Login() == true){
        cout << "Login succeeded!" << endl;
    }else{
        cout << "Credentials are incorrect" << endl;
    }
    
    cout << "\n";
    
    if (admin2.Login() == true){
        cout << "Login succeeded!" << endl;
    }else{
        cout << "Credentials are incorrect" << endl;
    }
    
    cout << "\n";
    
    if (admin3.Login() == true){
        cout << "Login succeeded!" << endl;
    }else{
        cout << "Credentials are incorrect" << endl;
    }
    
    
    return 0;
}
