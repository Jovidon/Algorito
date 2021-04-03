#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;

/**
*	 OOP Concept - Abstraction
*        Abstraction in C++ with Coffee Machine working process illustration.
*	 Applying abstraction means that each object should only expose a high-level mechanism for using it.
*/


/**
*	 Abstaction can be thought as extention to Encapsulation.
*	 
*        Diff:
*	     Abstraction solves the problem in design level.
*	     Encapsulation solves the problem in implemention level.
*/


enum Coffee_Type {
	ESPRESSO = 1,
	CAPPUCCINO = 2,
	AMERICANO = 3,
	CORRETO = 4
};

enum Coffee_Machine_Configuration {
	TIME_OF_GRINDING_COFFEE_BEAN = 6,
	TIME_OF_RISING_TEMPERATURE = 7,	
	TIME_OF_MIXING = 4					
};

class Coffee {
	private:
		Coffee_Type type;
	public:		
		Coffee(Coffee_Type _type) {
			this->type = _type;
		}
};

void print(string message, int printDuration) {
	cout<<message;
	for(int i=0;i<printDuration; i++) {
		cout<<".";
		sleep(1);
	}
	cout<<endl;
}

class CoffeeMachine {
	private:
		void grind(){
			print("Grinding coffee bean", TIME_OF_GRINDING_COFFEE_BEAN);	
		}
		
		void heat() {
			print("Rising temperature", TIME_OF_RISING_TEMPERATURE);
		}	
		
		void mix() {
			print("Mixing", TIME_OF_MIXING);
		}
		
	public:		
		Coffee brew(Coffee_Type type, int quantity) {
			print("Preparing coffee", 0);		
			Coffee newCoffee(type);	
			this->grind();
			this->mix();
			this->heat();
			puts("Your coffee is ready!");	
			return newCoffee;			
		}
	
};

int main () {
	
	CoffeeMachine machine;
	
	Coffee preparedCoffee =	machine.brew(ESPRESSO, 1);
	
	puts("Pleasant appetite!");
	
}
