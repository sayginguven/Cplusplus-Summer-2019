//
//  Person.cpp
//  basic101
//
//  Created by Saygin Guven on 2019-08-14.
//  Copyright © 2019 Saygin Guven. All rights reserved.
//

#include "Person.hpp"
#include <iostream>

//default constructor
Person::Person()
:Person("John","Doe","john.doe@unknown.ca","555-555-555", "unknown address", 0){
}

//overloaded constructor
Person::Person(std::string email)
:Person("John","Doe",email,"555-555-555", "unknown address", 0){
    
}

Person::Person(std::string name, std::string lastName, std::string email, std::string phone, std::string address, unsigned int id){
    
    this->name = name;
    this->lastName = lastName;
    this->email = email;
    this->phone = phone;
    this->address = address;
    this->id = id;
    
    
}

//copy const
Person::Person(Person const &obj){
    this->name = obj.name;
    this->lastName = obj.lastName;
    this->email = obj.email;
    this->phone = obj.phone;
    this->address = obj.address;
    this->id = obj.id;
}

//destructor
Person::~Person(){}

//setters
void Person::setName(std::string name){
    this->name = name;
}

void Person::setLastName(std::string lastName){
    this->lastName = lastName;
}

void Person::setEmail(std::string email){
    this->email = email;
}

void Person::setPhone(std::string phone){
    this->phone = phone;
}

void Person::setAddress(std::string address){
    this->address = address;
}

void Person::setId(unsigned int id){
    this->id = id;
}

//getters
std::string  Person::getName(){
    return this->name;
}

std::string  Person::getLastName(){
    return this->lastName;
}

std::string  Person::getEmail(){
    return this->email;
}

std::string  Person::getPhone(){
    return this->phone;
}

std::string  Person::getAddress(){
    return this->address;
}

unsigned int Person::getId(){
    return this->id;
}

//function ~ methods
void Person::toString(){
    
    std::cout << "[ "
    << " name : " << this->name
    << ", lastName : " << this->lastName
    << ", email : " << this->email
    << ", phone : " << this->phone
    << ", address : " << this->address
    << ", id : " << this->id
    << "]" <<std::endl;
    
}
