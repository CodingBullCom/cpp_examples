// File: initilization.cpp
// Created on: 9th Nov 2018
// Updated on: 14th Dec 2018
// Author: Pawan Kumar Singh [pawan@codingbull.com]
// http://www.codingbull.com
//
// This source code is the part of free tutorial series provided by http://www.codingbull.com and
// it can be used/distributed without any restriction.

#include <iostream>
#include <cmath>
using namespace std;
//compile the code using following command $ g++ -std=c++11 initialization.cpp
int main() {

    int a1 = 10;
    int a2 = {10};
    int a3 {20};
    cout<<"a1 = "<<a1<<"\na2 = "<<a2<<"\na3 = "<<a3<<" "<<endl;
    double d1 = 2.3;       // initialize d1 with 2.3
    double d2 {2.3};       // initialize d2 with 2.3
    printf("------------");
    cout<<"\nd1 = "<<d1<<"\nd2 = "<<d2<<endl;
    auto b{true};     // a bool
    auto ch{'x'};     // a char
    auto i = 123;      // an int
    auto d = 1.2;      // a double
    auto y = sqrt(25);  // z has the type of whatever sqrt(y) returns
    auto z = sqrt(20);  // z has the type of whatever sqrt(y) returns
    printf("------------");
    cout<<"\nb = "<<b<<"\nch = "<<ch<<"\ni = "<<i<<"\nd = "<<d<<"\ny = "<<y<<"\nz = "<<z<<endl;
}
