// File: inheritance.cpp
// Created on: 30th Nov 2018
// Updated on: 14th Dec 2018
// Author: Pawan Kumar Singh [pawan@codingbull.com]
// http://www.codingbull.com
//
// This source code is the part of free tutorial series provided by http://www.codingbull.com and
// it can be used/distributed without any restriction.

#include <iostream>

using namespace std;

class A {
public:
  void printA1() {
    cout << "a1 = " << a1 << endl;
  }

protected:
  int a2 = 20;
  void printA2() {
    cout << "a2 = " << a2 << endl;
  }
private:
  int a1 = 10;

};

class B: private A {
public:
    void printB() {
      printA1();
      printA2();
    }
};

int main() {
  A a = A();
  a.printA1();
  // a.printA2();   //compiler error: can't access as it is protected and not public.
  B b = B();
  b.printB();
  // b.printA1();   //compiler error: can't access anything from class A as it is private to class B
  // b.printA2();   //compiler error: so only class B can acess, public and protected properties of class A.
  return 0;
}
