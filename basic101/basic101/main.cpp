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
    
    Account myAccount(1, {0,1,2}, {1000,200,300}, 123, myPerson);
    
    //Account test(myAccount);
    
//    myAccount.~Account();
//    
//    test.getPerson().toString();
    
    //myAccount.transfer(2500, 0, 1);
    
    myAccount.toString();
    
    
    return 0;
}
