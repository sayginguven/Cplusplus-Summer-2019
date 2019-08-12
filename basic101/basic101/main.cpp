//
//  main.cpp
//  basic101
//
//  Created by Saygin Guven on 2019-07-29.
//  Copyright © 2019 Saygin Guven. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include "functions.hpp"
#include "moreFunctions.hpp"
#include <vector>
#include <ctype.h>


#include "../OOP/Time.hpp"
#include "../OOP/Employee.hpp"
#include <vector>



#include <iomanip>



int main() {
    
    
//    std::ifstream filemanager;
//
//    filemanager.open("../Files/test.txt", std::ios::in);
//
//    if(!filemanager){
//        std::cerr << "error : file not found" << std::endl;
//        return -1;
//    }
//
//
//    std::string name;
//    int age;
//    bool isItLie;
//
//
//
//    std::cout << "File summary with format" << std::endl;
//    std::cout << "_____________________________" <<std::endl;
//
//    //while(!filemanager.eof()) v1.0
//    while(filemanager >> name >> age >> isItLie){
//
//        //#include <iomanip>
//        std::cout <<  "name : " << std::left << std::setw(10) << name;
//        std::cout << "| age is : " << std::setw(4) << age << std::right;
//        std::cout << "| the information is " << std::boolalpha << isItLie << std::endl;
//
//    }
//
//    //close
//    filemanager.close();
//
//
//    //open the file
//    filemanager.open("../Files/test.txt");
//
//    std::string line;
//
//    std::cout << "\nFile summary without format" << std::endl;
//    std::cout << "_____________________________" <<std::endl;
//
//    while(std::getline(filemanager, line)){
//        std::cout << line << std::endl;
//    }
//
//    filemanager.close();
//
//
//
//
//    //open the file
//    filemanager.open("../Files/test.txt");
//
//    char c;
//
//    while(filemanager.get(c)){
//        std::cout << c;
//    }
//
//    filemanager.close();

    
   
    std::ofstream writeFile;
    
    writeFile.open("../Files/myFile.txt", std::ios::app);
    
    if(writeFile.is_open()){
        std::cout << "file is open and ready for writing" << std::endl;
    }
    
    std::string line;

    std::cout << "enter some string <0 to exit>";
    while (std::getline(std::cin, line)){
        if (line == "0") {
            break;
        }
        writeFile << line << std::endl;
    }
    
    writeFile.close();
    
    return 0;
}










