//
//  Person.hpp
//  basic101
//
//  Created by Saygin Guven on 2019-08-14.
//  Copyright © 2019 Saygin Guven. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>
#include <string>

class Person{

private:
    std::string name;
    std::string lastName;
    std::string email;
    std::string phone;
    std::string address;
    unsigned int id;

public:
    //default constructor
    Person();
    //overloaded constructor
    Person(std::string name, std::string lastName, std::string email, std::string phone, std::string address, unsigned int id);
    Person(std::string email);
    //copy const
    Person(Person const &obj);
    //destructor
    ~Person();
    
    //setters
    void setName(std::string name);
    void setLastName(std::string lastName);
    void setEmail(std::string email);
    void setPhone(std::string phone);
    void setAddress(std::string address);
    void setId(unsigned int id);
    
    //getters
    std::string getName();
    std::string getLastName();
    std::string getEmail();
    std::string getPhone();
    std::string getAddress();
    unsigned int getId();

    //function ~ methods
    void toString();
    
};

#endif /* Person_hpp */
