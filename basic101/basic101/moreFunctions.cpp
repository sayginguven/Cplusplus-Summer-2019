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

int add(int a, int b){
    return a+b;
}

//function overload
int add(int a, int b, int c){
    return a+b+c;
}

int modify( int a, int &b, int &c ){
    a+=1;
    b+=2;
    c+=3;
    return a+b+c;
}

void testModifyAndAdd(){
    int x = 5;
    int y = 4;
    std::cout << add(x,y) <<std::endl;
    
    int i,j,k;
    i=5;// this will be pass by value
    j=4;// this will be pass by ref
    k=2;
    
    
    //pass by reference will check the address in the RAM
    std::cout << modify(i,j,k) <<std::endl;
    
    //the value of i is NOT modified with the pass by val function
    std::cout << "value of i is : " << i << std::endl; //4
    
    //the value of j is modified with the pass by reference function
    std::cout << "value of j is : " << j << std::endl; //4
}


