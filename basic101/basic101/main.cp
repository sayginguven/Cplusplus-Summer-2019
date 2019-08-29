////
////  main.cpp
////  basic101
////
////  Created by Saygin Guven on 2019-07-29.
////  Copyright © 2019 Saygin Guven. All rights reserved.
////
//
//#include "functions.hpp"
//#include "moreFunctions.hpp"
//#include <iostream>
//
//
//int main() {
//
//
//
//    //how to create closure in C++
//
//
//
//
//
////    std::vector<int> numbers = {1,2,3,4,5,6,7,8,9,10};
////
////    //if you want to
////    int passByReference {0};
////    int passByValue {0};
////    ForEachFunction(numbers,[&passByReference, passByValue](int number) mutable{
////        passByValue += 1;
////        std::cout << "size of this vector is " << passByValue << std::endl;
////        std::cout << "Value : " << passByReference << " " <<number << std::endl;
////        passByReference +    =1;
////    });
//
//
//
//    //challange
//
//    //create a rectangle class
//    // has lenght and width
//    //create a foreach function with the same way we have created in the class
//    // this function will have 2 parameters 1- vector or rectangles, 2-anonymous function
//    // print the area of each rectangle
//
//
//
//
//
//}


#include <iostream>
#include <string>
#include <functional>
#include <sstream>
#include <chrono>
#include <thread>

std::function<void()> func() {
    
    int i = 0;
    
    return [i]() mutable {
        std::cout << "lambda function, i : " << i << std::endl;
        i += 1;
    };
}

template< class Rep, class Period>
void countDown(std::string message, const std::chrono::duration<Rep, Period>& sleep_duration) {
    for (char c : message) {
        std::cout << c;
        std::this_thread::sleep_for(sleep_duration);
    }
}

int main()
{
    
    /*auto closureFunc = func();
     
     closureFunc();*/
    using namespace std::literals::chrono_literals;
    
    
    std::string str = "Hi guys,\n\n";
    str += "Did you figure it out?\n\n";
    str += "For closure you need to use lambda and function pointers.\n\n";
    str += "I prepared a closure example. ";
    str += "This is how you code in a creative way.\n";
    str += "I hope you like it.\n\n";
    countDown(str, 0.1s);
    
    str = "";
    str += "                 __ \n";
    str += "                / _)\n";
    str += "       _.----._/ /  \n";
    str += "      /         /      \n";
    str += "   __/   ( |  ( |      \n";
    str += "  /__.-''|_|--|_|      Lets Code!\n\n\n";
    
    countDown(str, 0.1s);
    
    str = "Please wait, we are preparing the code for you. ";
    str += "It will take couple seconds to load the code! Thank you for your patience\n\n";
    countDown(str, 0.1s);

    str = "";
    for (int i = 10; i > 0; i -= 1) {
        str += '.';
    }
    std::cout << "Loading";
    countDown(str, 0.5s);
    
    

    str = "\n\n\n#include <iostream>\n";
    str += "#include <string>\n";
    str += "#include <functional>\n\n\n";
    str += "std::function<void()> func() {\n";
    str += "   int i = 0;\n";
    str += "   return [i]() mutable{\n";
    str += "     std::cout << \"lambda function, i : \" << i << std::endl;\n";
    str += "     i += 1;\n";
    str += "   };\n";
    str += "}\n\n\n\n";
    str += "int main(){\n\n";
    str += "   auto closureFunc = func(); //dont forget to add paranteses after func\n";
    str += "   closureFunc();\n\n\n";
    str += "   return 0;\n";
    str += "}\n";
    
    countDown(str, 0.2s);
    
    
    std::cin >> str;
    return 0;
}
