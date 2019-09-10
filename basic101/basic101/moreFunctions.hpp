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

int add(int a, int b);

//signature for modify do not forget to add & reference key
int modify( int a, int &b, int &c );

void testModifyAndAdd();

void forEachLoop();

void printMultipicationTable(int,int);

long long int fibo(unsigned int order);

long long int factorial(unsigned int number);

void vectorExample();

void readAndAddLineNumbers();
void howToReadAndWriteToAFile();

int getTheNumber();
int getTheNumber2();
void stringstream();
#endif /* moreFunctions_hpp */
