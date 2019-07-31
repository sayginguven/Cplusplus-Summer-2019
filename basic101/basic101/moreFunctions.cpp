//
//  moreFunctions.cpp
//  basic101
//
//  Created by Saygin Guven on 2019-07-31.
//  Copyright © 2019 Saygin Guven. All rights reserved.
//

#include "moreFunctions.hpp"
#include <string>
#include <iostream>

bool isPrime(int value){
   
    if( value <= 1){
        return false;
    }

    for (int i =2; i*i <= value; i+=1) {
        if(value % i == 0){
            return false;
        }
    }
    
    return true;
 
}

void addSomeStars(std::string name, char ch){
   
    //get the length of string with name.length()
    
    //loop through the string
    //as string is an array use [] notation
    for(int i =0; i < name.length(); i+=1){
        
        if(i < name.length()-1 ){
            std::cout << name[i] << ch;
        } else{
            std::cout << name[i];
        }
        
    }
    std::cout << std::endl;
}

void reverseTheWord(std::string word){ 
    
    //create a new string variable
    std::string reversedString {""};
    
    //store the word letters and concatinate to the new variable from reverse order
    for (int i = (int)word.length()-1; i >=0; i-=1) {
        reversedString += word[i];
    }
    
    //return the new variable
    std::cout << reversedString << std::endl;
}

void testReverseTheWord(){
    
    std::cout << std::boolalpha;
    
    
    for (int i = 0; i < 100; i+=1) {

        if(isPrime(i) ){
            std::cout << i << " isprime ? " << isPrime(i) << std::endl;
        }
    }
    
    addSomeStars("Hello", '\t'); 
    reverseTheWord("Able was I, ere I saw Elba"); // edcba
}

void mimosa(std::string oj , std::string ch ){
    
    std::cout << oj << " + " << ch << " is mixing!" << std::endl;
    
}

void testMimosa(){
    mimosa(); // this will cal the default parameters
    mimosa("apple juice", "vine"); // this will call with the arguments
    mimosa("pear joice"); // this will call the second parameters with the first argument
}













