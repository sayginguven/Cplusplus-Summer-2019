//
//  functions.cpp
//  basic101
//
//  Created by Saygin Guven on 2019-07-29.
//  Copyright © 2019 Saygin Guven. All rights reserved.
//

//one way is adding all your std separately
//using std::cout;
//using std::endl;

//or using a general namespace for std
//using namespace std;

#include "functions.hpp"
#include <iostream>


//global variables
const int stackSize = 100;
int stackArr[stackSize];
int ToS {0};

void someDataTypes(){
        //same output different methods
        std::cout << "Hello, World!\n";
        std::cout << "Hello, World!\x0A";
        std::cout << "Hello, World!" << std::endl;
    
    
        std::cout << "give me a number : " << std::endl;
        int number1;
        std::cin >> number1;
    
    
        std::cout << "give me one more number : " << std::endl;
        int number2;
        std::cin >> number2;
    
        std::cout << "your numbers are " << number1 << ", " << number2 << std::endl;
    
        std::cout << "the addition of those 2 numbers are " << number1 + number2 << std::endl;
        //dynamic casting -- run time
        std::cout << "the average of those 2 numbers are " << (double)(number1 + number2)/2 << std::endl;
        //static casting -- compile time
        std::cout << "the average of those 2 numbers are " << static_cast<double>(number1 + number2)/2  << std::endl;
    
    
        std::cout << "_________________" << std::endl;
        std::cout << "size of bool " << sizeof(bool) << " bytes." << std::endl;
        std::cout << "size of char " << sizeof(char) << " byte." << std::endl;
        std::cout << "size of short " << sizeof(short) << " bytes." << std::endl;
        std::cout << "size of integer " << sizeof(int) << " bytes." << std::endl;
        std::cout << "size of double " << sizeof(double) << " bytes." << std::endl;
        std::cout << "size of float " << sizeof(float) << " bytes." << std::endl;
        std::cout << "size of long " << sizeof(long) << " bytes." << std::endl;
        std::cout << "size of long double " << sizeof(long double) << " bytes." << std::endl;
    
        std::cout << "______MIN________" << std::endl;
        std::cout << "MIN value of integer " << INT_MIN << std::endl;
        std::cout << "MIN value of char " << CHAR_MIN << std::endl;
        std::cout << "MIN value of long " << LONG_MIN << std::endl;
    
    
        std::cout << "______MAX________" << std::endl;
        std::cout << "MAX value of integer " << INT_MAX << std::endl;
        std::cout << "MAX value of char " << CHAR_MAX << std::endl;
        std::cout << "MAX value of long " << LONG_MAX << std::endl;
        //unsigned values are for just positive numbers
        std::cout << "MAX value of unsigned int " << UINT_MAX << std::endl;
    
    
        //C++11
        std::string test {"init with c++11"};
        std::cout << "Hello, what is your name?" << std::endl;
        std::string name;
        std::cin >> name;
        std::cout << "welcome " << name << std::endl; // add 2 strings in this way
    
    
        std::string string1{}; // empty
        std::string string2{ "itdcanada" }; //
        std::string string3{ string2 }; //
        std::string string4{ "itdcanada", 5 }; // first 5 char
        std::string string5{ string3, 3,8 };// chop the string
        std::string string6(5, 'O');
    
        std::cout << string1 << std::endl;
        std::cout << string2 << std::endl;
        std::cout << string3 << std::endl;
        std::cout << string4 << std::endl;
        std::cout << string5 << std::endl;
        std::cout << string6 << std::endl;
    
        char string7[10];
        //string7 = "itdcanada"; illegal
        strcpy(string7, "itdcanada");
    
    char string8[] = "assign anything to here";//the last char is \0
    
    //for range loop
    for (char temp : string8) {
        std::cout << temp << " ";
    }
    
    std::cout <<std::endl;
    
    int i = 0;
    while(string8[i] != '\0'){
        std::cout << string8[i] << " ";
        i+=1;
    }
    
    std::cout <<std::endl;
    
    for(int i = 0; i < sizeof(string8)/sizeof(char); i +=1){
        std::cout << string8[i] << " ";
    }
    
    std::cout <<std::endl;

}



void menu(){
    
    std::cout << "Please Enter your name?";
    std::string Username;
    std::cin >> Username;
    int option {4};
    
    do
    {
        
        std::cout << "Welcome ";
        std::cout << Username<< std::endl;
        std::cout << "************** MAIN MENU ****************" << std::endl;
        std::cout << "Please Enter one of the following Choices" << std::endl;
        std::cout << "************** MAIN MENU ****************\n" << std::endl;;
        std::cout << "1. Push a value in Stack" << std::endl;
        std::cout << "2. Pop a value from Stack" << std::endl;
        std::cout << "3. Print Stack" << std::endl;
        std::cout << "4: Exit The Program" << std::endl;
        std::cin >> option;
        // Print Your choices here
        
        switch (option)
        {
            case 1:
                  std::cout << "Please give me an integer value to push?";
                  int val;
                  std::cin >> val;
                  push(val);
                break;
            case 2:
                pop();
                break;
            case 3:
                printStack();
                break;
            case 4:
                return;
            default:
                std::cout << "ops that doesnt exist." << std::endl;
        }
    } while ( option != 4);
    
    
}

void push(int val){
    
}

void pop(){
    
}

void printStack(){
    
}
