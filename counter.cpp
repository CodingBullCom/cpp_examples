// File: counter.cpp
// Created on: 30th Dec 2016
// Updated on: 14th Dec 2018
// Author: Pawan Kumar Singh [pawan@codingbull.com]
// http://www.codingbull.com
//
// This source code is the part of free tutorial series provided by http://www.codingbull.com and
// it can be used/distributed without any restriction.

#include <iostream>

class counter{
	private:
		int i;
	public:
		void printCount(int n){
			std::cout << "\n";
			i = 1;
			while (i <= n){
				std::cout << " " << i++;
			}
			std::cout << "\n";
		}
};

int main() {
	counter co;
	co.printCount(10);
}
