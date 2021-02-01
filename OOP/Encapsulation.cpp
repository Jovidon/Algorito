#include<stdio.h>
#include<iostream>
using namespace std;

/*
*
*  Object-oriented programming  in C++ 
*  Implementation of  abstraction, encapsulation  in C++ 
*  Access modifiers:  public, private, protected
*
*/

class Coffee {
	
	private: 
		string name;

	public: 
	
		Coffee(string _name) {
			name = _name;
		}
		
		string getName() {
			return name;
		} 
		
		void setName(string _name) {
			name = _name;
		}
		
};

int main () {
	
	Coffee coffee("Cappuccino");
	
	cout<<coffee.getName(); // Cappuccino
	
}
