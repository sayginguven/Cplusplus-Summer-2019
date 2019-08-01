//
//  main.cpp
//  basic101
//
//  Created by Saygin Guven on 2019-07-29.
//  Copyright © 2019 Saygin Guven. All rights reserved.
//

#include <iostream>
#include <string>
#include "functions.hpp"
#include "moreFunctions.hpp"

int a;

int main() {
    
   
    //local variable will be initialized with garbage value
    int i,b;
    std::cout << "the value of b is " << b << std::endl;

    //global variable will be initialize with 0
    std::cout << "the value of a is " << a << std::endl;
    
    //local pointer will be initialized with 0 value
    int *c;
    std::cout << "the value of *c is " << *c << std::endl;
    
    return 0;
}



