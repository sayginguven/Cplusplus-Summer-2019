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
#include "../OOP/Cat.hpp"
#include "../OOP/Time.hpp"
#include "../OOP/Employee.hpp"
#include "../OOP/Shallow.h"
#include "../OOP/Deep.h"
#include "../OOP/Person/Person.hpp"
#include "../OOP/Account/Account.hpp"
#include "../OOP/Animals/Animals.cpp"
#include "../OOP/Shapes/Shapes.cpp"
#include "../OOP/OperatorOverloading/Player.hpp"
#include "../OOP/Lambda/Rectangle.hpp"
#include "../OOP/IceCream/IceCream.hpp"
#include "../OOP/Beer/Beer.hpp"

#include <iostream>
#include <string>
#include <cstring>
#include <functional>
#include <sstream>
#include <chrono>
#include <thread>
#include <memory>
#include <vector>



//global variables
const int stackSizeStaticArr = 100;
int staticStackArr[stackSizeStaticArr] = {0};
int stackToS {-1};

struct MyStack
{
    int * StackAddr;
    int StackSize;
};
MyStack MyStack;

int * TosWithPointer;

void InitStack(){
    
    std::cout<< "What will be the size of stack? : ";
    std::cin >> MyStack.StackSize;
    MyStack.StackAddr = (int *) malloc(sizeof(int)*MyStack.StackSize);
    
    TosWithPointer = MyStack.StackAddr;
    int * CurrentElement;
    CurrentElement = MyStack.StackAddr;
    for (int i = 0; i < MyStack.StackSize; i+=1)
    {
        *CurrentElement = 0;
        CurrentElement+=1;
    }
    std::cout << "Your Stack is Initialized with "<< MyStack.StackSize <<" zeros" << std::endl;

}

bool PushWithPointer(int value){
    
    if(TosWithPointer == MyStack.StackAddr + MyStack.StackSize){
        message("stack is full");
        return false;
    }
    
    *TosWithPointer  = value;
    TosWithPointer +=1;
    return true;

}

int PopWithPointer(){
    
    if(TosWithPointer == MyStack.StackAddr){
        //the only bug is when the stack is empty
        // it will return -1
        message("stack is empty");
        return -1;
    }
    
    int * currentValue = TosWithPointer-1;
    int poppedValue = *(currentValue);
    *currentValue = 0;
    TosWithPointer -= 1;
    return poppedValue;
    
}

void PrintStackWithPointer()
{
    if (TosWithPointer == MyStack.StackAddr)
    {
       message("Stack is Empty");
       return;
    }

    int * currentElement;
    currentElement = TosWithPointer - 1 ;
    while (currentElement >= MyStack.StackAddr)
    {
        if (*currentElement != 0)
        {
            std::cout << *currentElement << " ";
            PopWithPointer();
        }
        currentElement-=1;
    }
    
    std::cout << std::endl;
    
}



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



void stackMenuWithStaticArr(){
    
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

void stackMenuWithPointer(){
    
    std::cout << "Please Enter your name?";
    std::string Username;
    std::cin >> Username;
    int option {5};
    
    do
    {
        
        std::cout << "Welcome ";
        std::cout << Username<< std::endl;
        std::cout << "************** MAIN MENU ****************" << std::endl;
        std::cout << "Please Enter one of the following Choices" << std::endl;
        std::cout << "************** MAIN MENU ****************\n" << std::endl;
        std::cout << "1. Init the stack" << std::endl;
        std::cout << "2. Push a value in Stack" << std::endl;
        std::cout << "3. Pop a value from Stack" << std::endl;
        std::cout << "4. Print Stack" << std::endl;
        std::cout << "5: Exit The Program" << std::endl;
        std::cin >> option;
        // Print Your choices here
        
        switch (option)
        {
            case 1:
                InitStack();
                break;
            case 2:
                std::cout << "Please give me an integer value to push?";
                int val;
                std::cin >> val;
                PushWithPointer(val);
                break;
            case 3:
                std::cout << PopWithPointer() << " is popped."<< std::endl;;
                break;
            case 4:
                PrintStackWithPointer();
                break;
            case 5:
                return;
            default:
                std::cout << "ops that doesnt exist." << std::endl;
        }
    } while ( option != 5);
    
    
}


bool push(int val){

    if(stackToS >= stackSizeStaticArr-1){
        message("sorry stack is full!");
        return false;
    }
    
    stackToS+=1;
    staticStackArr[stackToS] = val;

    return true;
    
}

void pop(){
    
    if(stackToS < 0 ){
        message("sorry stack is empty!");
        return;
    }
    
    //pop the top of stack assign the value to 0;
    staticStackArr[stackToS] = 0;
    stackToS-=1;
    
    
}

void printStack(){
    
  
    //if stack is empty
    // error message
    if(stackToS < 0){
        message("sorry stack is empty!");
        return;
    }
   
    //call the pop message and empty the stack
    while(stackToS >= 0){
        std::cout << staticStackArr[stackToS] << " ";
        pop();
    }
   
    std::cout << std::endl;
    
}

void message(std::string msg){
    std::cout << msg << std::endl;
}


void catTest(){
    
    //check how many cats in the memory
    std::cout << Cat::howManyObject() << " objects in the memory" << std::endl;
    
    if(1==1){
        //default constructor will be called
        Cat delegatedCat{};
        delegatedCat.introduceYourself();
        delegatedCat.jump();
        
    }
    
    std::cout << Cat::howManyObject() << " objects in the memory" << std::endl;
    
    std::cout << "_____________" << std::endl;
    Cat fluffy("Fluffy", "Black and white", false, 10.4, 100);
    fluffy.introduceYourself();
    fluffy.eat();
    
    
    std::cout << "_____________" << std::endl;
    //C++11 syntax
    Cat sylvester {"Sylvester","White",true, 5.4,95};
    sylvester.introduceYourself();
    sylvester.sleep();
    
    std::cout << "_____________" << std::endl;
    Cat kit{"Homer", 100 };
    kit.introduceYourself();
    kit.eat();
    kit.jump();
    
    std::cout << "_____________" << std::endl;
    Cat copyFluffy(fluffy);
    copyFluffy.introduceYourself();
    
    
    std::cout << "_____________" << std::endl;
    
    std::cout << Cat::howManyObject() << " objects in the memory" << std::endl;
}

void timeTest(){
    
    Time def;
    Time over1{"AM",1,2,3};
    Time over2{6,56,"PM"};
    Time over2withoutDef{6,56};
    
    def.whatTimeIsIt();
    def.shortTime();
    
    over1.whatTimeIsIt();
    over1.shortTime();
    
    
    over2.whatTimeIsIt();
    over2.shortTime();
    
    over2withoutDef.whatTimeIsIt();
    over2withoutDef.shortTime();
}

void employeeTest(){
    
    Employee *emp1 = new Employee{"saygin", new Time{11,47,"AM"}};
    // 2 ways
    
    //using pointers to access the object method
    (emp1->getTime())->shortTime();
    
    //using what pointer is pointing to to access the object method
    (*((*emp1).getTime())).shortTime();
}

void printObject(Shallow obj) {
    std::cout << obj.getData();
}

void printObject(Deep obj) {
    std::cout << obj.getData();
}

void PersonTest(){
    Person *myPerson = new Person{"saygin","guven","sayginguven@gmail.com","604 700 43 42", "Vancouver", 105};
    
    //same result different way to reach data
    //    (*myPerson).toString();
    //    myPerson->toString();
    
    Account myAccount(1, {0,1,2}, {1000,200,300}, 123, myPerson);
    //myAccount.toString();
    
    Account copyAccount(myAccount);
    
    
    copyAccount.toString();
    
    //copyAccount.transfer(2500, 0, 1);
    
    //copyAccount.toString();
}

void AnimalTest(){
    Mouse mouse;
    Bird bird;
    Dog dog;
    
    //static binding
    std::cout << "static binding" << std::endl;
    mouse.sound();
    bird.sound();
    dog.sound();
    
    //dynamic binding
    std::cout << "dynamic binding" << std::endl;
    Animal * animals[3];
    animals[0] = &mouse;
    animals[1] = &bird;
    animals[2] = &dog;
    
    for (auto animal : animals){
        animal->sound();
    }
    
    std::cout << "sound function with pointers" << std::endl;
    
    Animal * animalptr[] = {new Mouse(), new Bird(), new Dog()};
    for (auto animal : animalptr){
        animal->sound();
        (*animal).sound();
    }
}

void ShapeTest(){
    std::vector<Shape *> shapes;
    shapes.push_back(new Circle());
    shapes.push_back(new Square());
    shapes.push_back(new Triangle());
    
    for (auto shape : shapes ) {
        shape->draw();
    }
}


void PlayerTest(){
    const Player wizzard(100, 99, 0.8);
    const Player wolf(40, 10, 1.6/2);
    const Player boosterMagician(20,9999,2.0);
    
    const Player wolfman = wizzard + wolf * boosterMagician;
    std::cout << wolfman << std::endl;
    
    
    Player empty;
    std::cout << "provide health, xp, boost info in the same order" << std::endl;
    std::cin >> empty;
    std::cout << empty <<std::endl;
    
    
    
    Player hero1(100,50,1.0);
    Player hero2(100,50,1.0);
    
    if( hero1 != hero2 ) {
        std::cout << "hero 1 and 2 are NOT same "<<std::endl;
    } else{
        std::cout << "hero 1 and 2 are same "<<std::endl;
    }
}

void LambdaTest(){
    
    //c way to create a lambda or with pointers
    void(*cwayLabda)() = [](){
        std::cout << "I am lambda" << std::endl;
    };
    cwayLabda();
    
    //c++ way to create a lambda
    std::function<void()> lambda = [](){
        std::cout << "I am lambda" << std::endl;
    };
    lambda();
    
    //c++ autoway to create a labda
    auto autoLambda = [](){
        std::cout << "I am lambda" << std::endl;
    };
    autoLambda();
}

void RectangleTest(){
    
    
    std::cout << "Creating a rectangle with length 1 and width 2" <<std::endl;
    Rectangle incrementRec(1,2);
    std::cout << "incrementing the rectangel with ++ operator" <<std::endl;
    incrementRec++;
    std::cout << "Printing the rectangle ++ object" <<std::endl;
    std::cout << incrementRec;
    
    std::cout << "_____________" <<std::endl;
    std::cout << "Creating the Rectangle vector and printing them" <<std::endl;
    std::cout << "_____________" <<std::endl;


    std::vector<Rectangle> rectangles
    {
        Rectangle(4.0,5.0),
        Rectangle(2.0,6.1),
        Rectangle(7.3,2.5),
        Rectangle(5.2,6.1)
    };
    
    
    Rectangle::ForEach(rectangles, [](Rectangle rec){
        
        std::cout << rec;
        std::cout << "area of rectagle : " << rec.area() << std::endl;
        std::cout << "surface of rectagle : " << rec.surface() << std::endl;
        std::cout << "_______________\n" << std::endl;
        
    });
}



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

void ClosureTest(){
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
}


void ForEachFunction(std::vector<int> &numbers,std::function<void(int)> func){
    
    for(int number: numbers){
        func(number);
    }
    
};
void ForEachFunctionTest(){
    std::vector<int> numbers = {1,2,3,4,5,6,7,8,9,10};
    
    //if you want to
    int passByReference {0};
    int passByValue {0};
    
    ForEachFunction(numbers,[&passByReference, passByValue](int number) mutable{
        passByValue += 1;
        std::cout << "size of this vector is " << passByValue << std::endl;
        std::cout << "Value : " << passByReference << " " <<number << std::endl;
        passByReference +=1;
    });
}


void SmartPointersTest(){
    
    //unique pointer
    //3 ways to declare
    //1
    std::unique_ptr<IceCream> icecream { new IceCream() };
    //2
    //    std::unique_ptr<IceCream> icecream = std::make_unique<IceCream>();
    //3
    //    auto icecream = std::make_unique<IceCream>();//recommended
    
    auto icecream2 = std::make_unique<IceCream>("cookie and cream");
    
    icecream2 = std::move(icecream);
    
    
    std::cout << "memory location of my object is : " << icecream2.get() << std::endl;
    icecream2->setFlavor("chocolate");
    std::cout << "the flavor changed to " << icecream2->getFlavor() << std::endl;

    icecream2.reset();//delete the unique pointer
    
    std::cout << "_____________\n";
    //unqie pointers can not assign to another unique pointer
    //std::unique_ptr<IceCream> icecream2 { icecream } ; //error
    
    
    
    std::unique_ptr<IceCream> ice1 = std::make_unique<IceCream>("strawberry");
    std::unique_ptr<IceCream> ice2 = std::make_unique<IceCream>("mango");
    std::unique_ptr<IceCream> ice3 = std::make_unique<IceCream>("blueberry");

    //store these ice creams in one container


    std::vector<std::unique_ptr<IceCream>> ices;

    //moving all the unique pointer values to ices vector
    ices.push_back(std::move(ice1));
    ices.push_back(std::move(ice2));
    ices.push_back(std::move(ice3));


    for(auto &icecream : ices){
        std::cout << icecream->getFlavor() <<std::endl;
    }
    
    
    
    std::shared_ptr<IceCream> sharedIceCream1 = std::make_shared<IceCream>("mapple and oat cookie");
    std::shared_ptr<IceCream> sharedIceCream2 = sharedIceCream1;

    std::weak_ptr<IceCream> weakPointer = sharedIceCream2;
    sharedIceCream1.reset();
    sharedIceCream2.reset();

    //you need to lock the shared pointer if you assign it to weak pointer
    //if use count is not 0 weak pointer will work
    if( auto lockedPtr = weakPointer.lock()){
        std::cout << lockedPtr->getFlavor();
    } else{
        
        std::cout << "weak pointer is expired" << std::endl;
        std::cout << "Is weak pointer is : weakPointer.expired() ? " << std::boolalpha <<          weakPointer.expired() << std::endl;
        
    }

    std::cout <<"\n\n";



    //weak pointer will not increment use count
    std::cout << "weak pointer added : " << sharedIceCream1.use_count(); // 2


    sharedIceCream1.reset();// count 1
    sharedIceCream2.reset();// count 0
    std::cout << "after pointer resets : " <<sharedIceCream1.use_count() << std::endl;



}

void BeerTest(){
        Beer<std::string> beer1("9 oz");
        std::cout << "the size of beer1 is : " << beer1.getSource() << std::endl;
    
        Beer<double> beer2(5.25);
        std::cout << "the price of beer2 is : " << beer2.getSource() << std::endl;
    
        Beer<double>* beer3 = new Beer<double>(5.0f);
        std::cout << "the persentage of alchohol for beer3 is : " << beer3->getSource() << std::endl;
}

void calculateFuelConsumption(double kilometers, double liters){
    
    
    if(kilometers < 0){
        throw std::logic_error("kilometers must be positive");
    }
    if(liters == 0){
        throw std::invalid_argument("liters can not be 0");
    }
    
    if(kilometers > 10000){
        throw std::length_error("kilometers is too long!");
    }
    
    std::cout << "your fuel consumption is " << 100*(liters/kilometers) << " lt/ per 100km" << std::endl;
}

// function3 throws runtime error
void function3() {
    std::cout << "In function 3" << std::endl;
    // no try block, stack unwinding occurs, return control to function2
    throw std::runtime_error{"runtime_error in function3"}; // no print
}

// function2 invokes function3
void function2() {
    std::cout << "function3 is called inside function2" << std::endl;
    //function3(); // stack unwinding occurs, return control to function1
    
    //try and catch before return control to function1
    try{
        function3();
    } catch (std::exception &ex){
        std::cout << "exception handled in function 2"<<std::endl;
    }
    
    std::cout << "function2 ends" << std::endl;
}

// function1 invokes function2
void function1() {
    std::cout << "function2 is called inside function1" << std::endl;
    function2(); // stack unwinding occurs, return control to main
    std::cout << "function1 ends" << std::endl;
}

void ExceptionHandlingTest(){
    try {
        std::cout << "function1 is called inside main" << std::endl;
        function1(); // call function1 which throws runtime_error
    }
    catch (const std::runtime_error& error) { // handle runtime error
        std::cout << "Exception occurred: " <<  std::endl;
        std::cout << "Exception handled in main" << std::endl;
    }
    std::cout << "bye" << std::endl;
    
    
    while(true){
        try{
            std::cout << "how many kilometers you have travelled? " << std::endl;
            double km;
            std::cin >> km;
            std::cout << "how many lites of fuel you have filled?" << std::endl;
            double liters;
            std::cin >> liters;
            calculateFuelConsumption(km, liters); // error
        } catch (std::invalid_argument &ex){
            std::cout << ex.what() <<std::endl;
        } catch(std::logic_error &ex){
            std::cout << ex.what() <<std::endl;
        } catch(...){
            std::cout << " something is really wrong " <<std::endl;
        }
    }
    
}
