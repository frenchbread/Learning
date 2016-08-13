//
//  main.cpp
//  contactList
//
//  Created by Damir Mustafin on 12/11/15.
//  Copyright (c) 2015 Damir Mustafin. All rights reserved.
//

#include <iostream>
using namespace std;

class Contact {
public:
    Contact(string name, string data_of_birth, string phone, string email);
    void displayContact();
    
private:
    string name;
    string date_of_birth;
    string phone;
    string email;
};

int main(int argc, const char * argv[]) {

    
    std::cout << "Hello, World!\n";
    
    Contact contact("Damir", "10-01-1995", "+82 1072086112", "frenchthebread@gmail.com");
    
    contact.displayContact();
    
    return 0;
}

Contact::Contact(string Name, string DOB, string Phone, string Email){
    name = Name;
    date_of_birth = DOB;
    phone = Phone;
    email = Email;
}

void Contact::displayContact(){
    cout << "Name: " << name << endl;
    cout << "Date of birth : " << date_of_birth << endl;
    cout << "Phone: " << phone << endl;
    cout << "Email: " << email << endl;
}