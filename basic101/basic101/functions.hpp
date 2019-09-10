//
//  functions.hpp
//  basic101
//
//  Created by Saygin Guven on 2019-07-29.
//  Copyright © 2019 Saygin Guven. All rights reserved.
//

#pragma once
#include <string>
#include <iostream>

template<typename T1, typename T2>
void printThis(T1 value1, T2 value2){
    std::cout << "you typed " << value1 << " " << value2  << std::endl;
    
}

void someDataTypes(void);
void stackMenuWithStaticArr();
bool push(int val);
void pop();
void printStack();
void message(std::string );
void InitStack();
bool PushWithPointer(int);
int PopWithPointer();
void PrintStackWithPointer();
void stackMenuWithPointer();
void catTest();
void timeTest();
void employeeTest();
void PersonTest();
void AnimalTest();
void ShapeTest();
void PlayerTest();
void LambdaTest();
void RectangleTest();
void ClosureTest();
void ForEachFunction(std::vector<int> &numbers,std::function<void(int)> func);
void ForEachFunctionTest();
void SmartPointersTest();
void BeerTest();

void calculateFuelConsumption(double kilometers, double liters);
// function3 throws runtime error
void function3();
// function2 invokes function3
void function2();
// function1 invokes function2
void function1();
void ExceptionHandlingTest();
