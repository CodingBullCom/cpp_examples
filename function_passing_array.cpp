// File: function_passing_array.cpp
// Created on: 10th Nov 2018
// Updated on: 14th Dec 2018
// Author: Pawan Kumar Singh [pawan@codingbull.com]
// http://www.codingbull.com
//
// This source code is the part of free tutorial series provided by http://www.codingbull.com and
// it can be used/distributed without any restriction.

#include <iostream>
using namespace std;

const int MAX = 5;
void centimize(double *array) {
    for (int i = 0; i < MAX; i++)
    array[i] *= 2.54;
}

int main () {
  double array[MAX] = {10.0, 12.0, 15.0, 20.0, 18.0};
  for ( double val: array) {
    cout<<val<<" ";
  }
  cout<<endl;
  centimize(array);
  for ( double val: array) {
    cout<<val<<" ";
  }
  cout<<endl;
  return 0;
}
