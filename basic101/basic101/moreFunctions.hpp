//
//  moreFunctions.hpp
//  basic101
//
//  Created by Saygin Guven on 2019-07-31.
//  Copyright © 2019 Saygin Guven. All rights reserved.
//

#ifndef moreFunctions_hpp
#define moreFunctions_hpp

#include <stdio.h>
#include <string>

bool isPrime(int value);
void addSomeStars(std::string name, char ch);
void reverseTheWord(std::string word);
void testReverseTheWord();

//define default parameters in your prototype
void mimosa(std::string = "orange juice", std::string = "champaign");
void testMimosa();
#endif /* moreFunctions_hpp */
