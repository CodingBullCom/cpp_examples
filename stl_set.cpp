// File: stl_set.cpp
// Created on: 30th Nov 2018
// Updated on: 30th May 2018
// Author: Pawan Kumar Singh [pawan@codingbull.com]
// http://www.codingbull.com
//
// This source code is the part of free tutorial series provided by http://www.codingbull.com and
// it can be used/distributed without any restriction.

#include<iostream>
#include<set>
#include<unordered_set>
#include<iterator>

using namespace std;

int main() {
  set<int, greater<int> > gquiz1;
  int arr[] = {40, 30, 60, 20, 50, 50, 10};
  for (int i: arr) {
    gquiz1.insert(i);
  }
  set<int, greater<int> > :: iterator itr;
  for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
      cout << *itr << " ";
  }
  cout << endl;


  set<char, greater<char> > gquiz2;
  char arr1[] = {'A', 'M', 'c', 't', 'l', 'E', 'x'};
  for (char i: arr1) {
    gquiz2.insert(i);
  }
  set<char, greater<char> > :: iterator itr1;
  for (itr1 = gquiz2.begin(); itr1 != gquiz2.end(); ++itr1) {
      cout << *itr1 << " ";
  }
  cout << endl;


  // declaring set for storing string data-type
      unordered_set<string> stringSet;

      // inserting various string, same string will be stored
      // once in set
      stringSet.insert("code");
      stringSet.insert("in");
      stringSet.insert("c++");
      stringSet.insert("is");
      stringSet.insert("fast");

      string key = "slow";

      //     find returns end iterator if key is not found,
      //  else it returns iterator to that key
      if (stringSet.find(key) == stringSet.end())
          cout << key << " not found\n\n";
      else
          cout << "Found " << key << endl << endl;

      key = "c++";
      if (stringSet.find(key) == stringSet.end())
          cout << key << " not found\n";
      else
          cout << "Found " << key << endl;

      // now iterating over whole set and printing its
      // content
      cout << "\nAll elements : ";
      unordered_set<string> :: iterator itr3;
      for (itr3 = stringSet.begin(); itr3 != stringSet.end(); itr3++)
          cout << (*itr3) << endl;

  return 0;
}
