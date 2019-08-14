//
//  Account.hpp
//  basic101
//
//  Created by Saygin Guven on 2019-08-14.
//  Copyright © 2019 Saygin Guven. All rights reserved.
//

#ifndef Account_hpp
#define Account_hpp

#include <stdio.h>
#include "../Person/Person.hpp"
#include <vector>

class Account{
    
private:
    unsigned int number;
    std::vector<int> type;// checking, saving, credit
    std::vector<double> balance;// checking, saving, credit
    int branchNumber;
    Person holder;

public:
    //default constructor
    Account();
    //overloaded constructor
    Account(unsigned int number, Person holder);
    Account(unsigned int number, std::vector<int> type[], std::vector<double> balance[],
            int branchNumber, Person holder);
    //copy constructor
    Account(Account const &obj);
    //destructor
    ~Account();
    
    //setters
    void setNumber(unsigned int number);
    void setType(std::vector<int> type);
    void setBalance(std::vector<double> balance);
    void setBranchNumber(int branchNumber);
    void setholder(Person holder);
    
    //getters
    unsigned int getNumber();
    std::vector<int> getType();
    std::vector<double> getBalance();
    int getBranchNumber();
    Person getPerson();

    //functions ~ methods
    bool deposit(double amount);
    bool withdrawl(double amount);
    bool transfer(double amount, std::vector<int> source, std::vector<int> destination);
    void toString();
    
    
};










#endif /* Account_hpp */
