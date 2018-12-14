// File: stl_queue.cpp
// Created on: 30th Nov 2018
// Updated on: 14th Dec 2018
// Author: Pawan Kumar Singh [pawan@codingbull.com]
// http://www.codingbull.com
//
// This source code is the part of free tutorial series provided by http://www.codingbull.com and
// it can be used/distributed without any restriction.

#include <iostream>
#include <queue>

using namespace std;

int main() {
      queue<int> que;
      que.push(10);
      que.push(20);
      que.push(30);
      que.push(40);
      que.push(50);
      que.push(60);
      que.push(70);
      while(que.empty() == false) {
          cout << que.front() << " ";
          que.pop();
      }
      cout << endl;
}
