#include<iostream>
#include<vector>
using namespace std;

/*
*
* Rather designs of Stack in C++ with our own library
*
*/

/**
* Design stack class with Array data structure.
*/

const int MAX_SIZE = 1e5;

template <typename T>
class StackWithArray {
	
	private:
        T arr[MAX_SIZE];
        int top_index = 0;
	
	public: 
	    void push (T item) {
	      this->arr[this->top_index++] = item;
	    }
	
	    void pop () {
	       if (this->top_index > 0) {
	       		this->arr[this->top_index] = 1LL;
	       		this->top_index--;
		   }
	    }
	
	    bool isEmpty () {
	      return this->top_index == 0;
	    }
	
	    T top () {
	      return this->arr[this->top_index-1];
	    }
};

/*****************************************************/

/**
* Design stack class with Vector data structure.
*/

template <typename T>
class StackWithVector {
	
	private:
        vector<T> vec;
	
	public: 
	    void push (T item) {
	      this->vec.push_back(item);
	    }
	
	    void pop () {
	       this->vec.pop_back();
	    }
	
	    bool isEmpty () {
	      return this->vec.size() == 0;
	    }
	
	    T top () {
	      return this->vec[vec.size()-1];
	    }
};


/*****************************************************/



int main () {

	StackWithArray<char> stack_arr;

	(stack_arr.isEmpty()) ? cout<<"Stack is empty. Test case #1 succeeded!" : "Stack is not empty. Test case #1 failed!";
	cout<<endl;
	
	stack_arr.push('1');
	(stack_arr.top()=='1') ? cout<<"The top of stack is 1. Test case #2 succeeded!" : "The top of stack is not 1. Test case #2 failed!";
	cout<<endl;


	stack_arr.push('a');
	(stack_arr.top()=='a') ? cout<<"The top of stack is a. Test case #3 succeeded!" : "The top of stack is not a. Test case #3 failed!";
	cout<<endl;
	
	stack_arr.pop();
	
	(stack_arr.top()=='1') ? cout<<"The top of stack is 1. Test case #4 succeeded!" : "The top of stack is not 1. Test case #4 failed!";
	
}
