//
//  main.cpp
//  basic101
//
//  Created by Saygin Guven on 2019-07-29.
//  Copyright © 2019 Saygin Guven. All rights reserved.
//

#include "functions.hpp"
#include "moreFunctions.hpp"
#include "../OOP/Time.hpp"
#include "../OOP/Employee.hpp"
#include "../OOP/Account/Account.hpp"
#include "../OOP/Person/Person.hpp"

int main() {
    
    Person *myPerson = new Person{"saygin","guven","sayginguven@gmail.com","604 700 43 42", "Vancouver", 105};

//    (*myPerson).toString();
//    myPerson->toString();
    
    Account myAccount(1, {0,1,2}, {100.05,250.95,500.02}, 123, myPerson);
//
//    myAccount.deposit(156.98, 0);
//    myAccount.withdrawl(200, 0);
    myAccount.transfer(99, 0, 1);

    myAccount.toString();
    
    
    return 0;
}
