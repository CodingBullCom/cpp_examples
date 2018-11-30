// File: class_example.cpp
// Created on: 9th Nov 2018
// Updated on: 30th May 2018
// Author: Pawan Kumar Singh [pawan@codingbull.com]
// http://www.codingbull.com
//
// This source code is the part of free tutorial series provided by http://www.codingbull.com and
// it can be used/distributed without any restriction.

#include <iostream>
using namespace std;

class X {

private:                        // the representation (implementation) is private

     int m;

public:                         // the user interface is public

     X(int i = 1000) :m{i} { }      // a constructor (initialize the data member m)

     int mf(int i)              // a member function
     {
          int old = m;
          m = i;                // set a new value
          return old*i;           // return the old value

     }

};


int user(X var, X *ptr)
{

    int x = var.mf(7);          // access using . (dot)

    int y = ptr->mf(9);         // access using -> (arrow)

    // int z = var.m;              // error: cannot access private member
    cout<<"x="<<x<<"\ny="<<y<<endl;
    return 0;
}

int main() {
  X var ;  // a variable of type X, initialized to 7
  user(var, &var);
  return 0;
}
