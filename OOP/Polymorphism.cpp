#include<math.h>
#include<iostream>
using namespace std;

/*
*
*  Object-oriented programming  in C++ 
*  Implementation of Polymorphism  in C++ 
*  A method or behaviour has many forms
*/

class Shape {
	
	private: 
		string name;
	
	public: 
		Shape(string _name) {
			name = _name;
		}
		
		string getName() {
			return name;
		} 
		
		void setName(string _name) {
			name = _name;
		}
		
		// Defining getArea function which calculates the area 
		double getArea() {}  
		
};

// Inherit Circle class from Shape class 

class Circle : public Shape {
	
	private: 
		double radius;
		
	public: 
		Circle(string _name, double _radius) : Shape(_name) {
			radius = _radius;
		}
		
		double getRadius() {
			return radius;
		}
		
		void setRadius(double _radius) {
			radius = _radius;
		}
		
		
		getArea(){
			return M_PI*radius*radius;
		};
};

// Inherit Rectangular class from Shape class 

class Rectangle : public Shape {
	
	private: 
		double width, height;
		
	public: 
		Rectangle(string _name, double _width, double _height) : Shape(_name) {
			height = _height;
			width = _width;
		}
		
		double getHeight() {
			return height;
		}
		
		double getWidth() {
			return width;
		}
		
		
		getArea() {
			return height*width;
		}
};


int main () {

	Circle circle("circle", 3.33);

	cout<<circle.getName()<<" "<<circle.getRadius()<<" "<<circle.getArea()<<endl;

	Rectangle rectangle("rectangle", 2, 3);
	
	cout<<rectangle.getName()<<" "<<rectangle.getHeight()<<" "<<rectangle.getWidth()<<" "<<rectangle.getArea();		
	
}
