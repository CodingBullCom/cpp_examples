// File: function_parameter_types.cpp
// Created on: 10th Nov 2018
// Updated on: 30th May 2018
// Author: Pawan Kumar Singh [pawan@codingbull.com]
// http://www.codingbull.com
//
// This source code is the part of free tutorial series provided by http://www.codingbull.com and
// it can be used/distributed without any restriction.

// Function passing argument
// 1. Pass by value: actual and formal parameters are different copies
// 2. Pass by reference: formal parameters are aliases of actual parameters
// 3. Pass by pointer: formal parameters holds the address of actual parameters

#include <iostream>
using namespace std;

//Pass by value
void swapvalues(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
  cout<<"In swap (Pass by value) function"<<"\na = "<<a<<" b = "<<b<<endl;
}

//Pass by reference
void swapreferences(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
  cout<<"In swap (Pass by reference) function"<<"\na = "<<a<<" b = "<<b<<endl;
}

//Pass  by pointer
void swappointers(int *a, int *b) {
  int *temp = a;
  a = b;
  b = temp;
  cout<<"In swap (Pass by pointers) function"<<"\na = "<<*a<<" b = "<<*b<<endl;
}

int main() {
  int a = 10, b = 20;
  cout<<"In main function"<<"\na = "<<a<<" b = "<<b<<endl;
  swapvalues(a, b);
  cout<<"In main function"<<"\na = "<<a<<" b = "<<b<<endl;
  swapreferences(a, b);
  cout<<"In main function"<<"\na = "<<a<<" b = "<<b<<endl;
  swappointers(&a, &b);
  cout<<"In main function"<<"\na = "<<a<<" b = "<<b<<endl;
  return 0;
}
