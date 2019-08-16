//
//  Account.cpp
//  basic101
//
//  Created by Saygin Guven on 2019-08-14.
//  Copyright © 2019 Saygin Guven. All rights reserved.
//

#include "Account.hpp"
#include "../Person/Person.hpp"
#include <iostream>
#include <iomanip>
#include <math.h>

//default constructor
Account::Account()
:Account(0,{},{},0,new Person()){}

//overloaded constructor
Account::Account(unsigned int number, Person *holder)
:Account(number,{},{},0,holder)
{}

Account::Account(unsigned int number, std::vector<int> type, std::vector<double> balance,
        int branchNumber, Person *holder){
    
    this->number = number;
    this->type = type;
    this->balance = balance;
    this->branchNumber = branchNumber;
    this->holder = holder;
    
}
//copy constructor
Account::Account(Account const &obj)
:Account(obj.number , obj.type , obj.balance , obj.branchNumber ,new Person(*obj.holder) ){
    //new Person for the holder pointer will create deep copy
}
//destructor
Account::~Account(){
    delete holder;
}

//setters
void Account::setNumber(unsigned int number){
    this->number = number;
}
void Account::setType(std::vector<int> type){
    this->type = type;
}
void Account::setBranchNumber(int branchNumber){
    this->branchNumber = branchNumber;
}
void Account::setBalance(std::vector<double> balance){
    this->balance = balance;
}
void Account::setholder(Person *holder){
    this->holder = holder;
}

//getters
unsigned int Account::getNumber(){
    return number;
}
std::vector<int> Account::getType(){
    return type;
    
}
std::vector<double> Account::getBalance(){
    return balance;
}
int Account::getBranchNumber(){
    return branchNumber;
}
Person Account::getPerson(){
    return *holder;
}

//functions ~ methods
bool Account::deposit(double amount, int type){
    
    if(amount <= 0 ){
        std::cout << "MESSAGE: amount should be greater than 0" <<std::endl;
        std::cout << "Transaction canceled" <<std::endl;
        return false;
    }
    
    if(amount > 1000 ){
        std::cout << "MESSAGE: amount should be less than 1,000.00 CAD" <<std::endl;
        std::cout << "Transaction canceled" <<std::endl;
        return false;
    }
    
    this->balance.at(type) += amount;
    return true;
}

bool Account::withdrawl(double amount,int type){
    if(amount > this->balance.at(type)){
        std::cout << "There is only "<< this->balance.at(type) << " CAD amount "
        <<" in your account"<<std::endl;
        std::cout << "withrawl " << amount << " CAD is canceled." <<std::endl;
        return false;
    }
    
    if(amount <= 0 ){
        std::cout << "MESSAGE: amount should be greater than 0" <<std::endl;
        std::cout << "Transaction canceled" <<std::endl;
        return false;
    }
    
    this->balance.at(type) -= amount;
    return true;
}

bool Account::transfer(double amount, int source, int destination){
    
    if(amount <= 0 ){
        std::cout << "MESSAGE: amount should be greater than 0" <<std::endl;
        std::cout << "Transaction canceled" <<std::endl;
        return false;
    }
    
    if(amount > this->balance.at(source)){
        std::cout << "MESSAGE: insufficient amount" <<std::endl;
        std::cout << "There is only "<< this->balance.at(source) << " CAD amount "
        <<" in your account"<<std::endl;
        std::cout << "Transaction canceled" <<std::endl;
        return false;
    }
    
    this->balance.at(source) -= amount;
    this->balance.at(destination) += amount;
    return true;
}

void Account::toString(){
    
    holder->toString();
    std::cout << "[ "
    << "number : " << this->number
    << ", branchNumber : " << this->branchNumber
    << " ]"
    << std::endl;
    
    for (int i = 0; i< this->balance.size(); i+=1) {
        std::cout << std::left <<"  Account " << i
        << std::right << std::setw(15) <<std::setprecision(2)<<std::fixed<< this->balance.at(i)
        << " CAD" <<std::endl;
    }
    
}
