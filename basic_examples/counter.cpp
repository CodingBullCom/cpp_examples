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