// File: stl_stack.cpp
// Created on: 10th Nov 2018
// Updated on: 14th Dec 2018
// Author: Pawan Kumar Singh [pawan@codingbull.com]
// http://www.codingbull.com
//
// This source code is the part of free tutorial series provided by http://www.codingbull.com and
// it can be used/distributed without any restriction.

#include <iostream>
#include <stack>

using namespace std;

int main() {
   stack<int> stk;
   stk.push(10);
   stk.push(30);
   stk.push(20);
   stk.push(60);
   stk.push(50);
   stk.push(70);
   while(stk.empty() == false){
     cout << stk.top() << endl;
     stk.pop();
   }
}
