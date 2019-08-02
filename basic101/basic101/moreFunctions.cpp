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
#include <vector>


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
    static int z = 10;
    z+=1;
    std::cout << "static z value is : " << z << "\n";
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


void forEachLoop(){
    
    // explicitly declare f letter to declare this is float number
    float numbers[10] {1.1f, 2.2f, 3.3f, 4.4f, 5.5f, 6.6f, 7.7f, 8.8f, 9.9f, 10.1f};
    
    // explicitly declare L letter to declare this is float number
    // you can use lower case l but it may conflict with number 1(one)
    long longNumbers[10] {100000L, 20000L, 30000L, 40000L, 50000L, 60000L, 70000L, 80000L, 90000L, 1000000L};
    
    std::cout << "FLOAT NUMBERS" <<std::endl;
    for(float number : numbers){
        //each number in the array is represented as number
        std::cout << number <<std::endl;
        
    }
    std::cout << "___________________" <<std::endl;
    
    std::cout << "LONG NUMBERS" <<std::endl;
    for(long number : longNumbers){
        //each number in the array is represented as number
        std::cout << number <<std::endl;
        
    }
    
}


void printMultipicationTable(int rowVal, int columnVal){
    
    
    //challange with arrays
    
    //create 2 dimensional array
    //initialize the values with multiplication table
    
    int multNumbers[rowVal][columnVal] ;
    
    //                 11*11*4 bytes/           11*4 bytes
    int rows = (int)sizeof(multNumbers) / (int)sizeof(multNumbers[0]);
    //                        11*4 bytes  /    4 bytes
    int columns = (int)sizeof(multNumbers[0]) / (int)sizeof(int);
    
    for (int i =0; i < rows; i+=1) {
        
        for (int j =0; j < columns; j+=1){
            
            if(i ==0) {
                multNumbers[i][j] = j;
            } else if(j == 0) {
                multNumbers[i][j] = i;
            } else {
                multNumbers[i][j] = i*j;
            }
            
            std::cout << "\t" << multNumbers[i][j];
            
        }
        std::cout << std::endl;
    }
    
    
}

// 0 1 2 3 4 5 6 7  8
// 0 1 1 2 3 5 8 13 21 34 55 ...

long long int fibo(unsigned int order){
    
    if(order == 0){
        return 0;
    }
    
    if(order == 1){
        return 1;
    }
    
    return fibo(order-1) + fibo(order-2);
    
}

// 5! = 5 * 4 * 3 * 2 * 1
// 5! = 5 * 4!

long long int factorial(unsigned int number){
    
    if(number <= 1){
        return 1;
    }
    
    return number * factorial(number-1);
    
}

void vectorExample(){
    //what is the problem of array?
    //when we can use array?
    //size and type
    
    //dynamic array ---- vector
    std::vector<std::string> students {"sina", "siamak", "hamed", "mariana",
        "jose", "daniel"
    };
    
    std::cout << "these are the students in our class" << std::endl;
    std::cout << "there are " << students.size() << " students."  << std::endl;
    std::cout << "capacity is : " << students.capacity() << std::endl;
    
    for (auto student : students) {
        std::cout << student << " ";
    }
    
    std::cout << "who is the new student? " ;
    std::string newStudent;
    std::cin >> newStudent;
    students.push_back(newStudent);
    
    
    std::cout << std::endl;
    
    std::cout << "____ new list ___" << std::endl;
    std::cout << "there are " << students.size() << " students."  << std::endl;
    std::cout << "capacity is : " << students.capacity() << std::endl;
    for (auto student : students) {
        std::cout << student << " ";
    }
    
    
    std::cout << std::endl;
    
    
    
}
