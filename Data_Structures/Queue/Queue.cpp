#include<iostream>
using namespace std;

/**
*
*	Design of Queue data structure with our own library.
*	First In First Out
*
*/

const int MAX_SIZE = 1e5;

template <typename T>
class Queue {
	private:
		T arr[MAX_SIZE];
		int pop_index = 0;
		int push_index = 0;
		
	public: 
		void push_back(T item) {
			arr[push_index++] = item;
		}
	
		void pop_front() {
			arr[pop_index++] = NULL;
		}
		
		void top() {
			if(!isEmpty()){
			  cout<<arr[pop_index]<<endl;
			  return;
			}
			puts("Queue is empty!");
		}
	
		bool isEmpty() {
			return pop_index == push_index;
		}
	
	
};


int main () {
	
	Queue<int> que;
	
	que.top();
	que.push_back(2);
	que.top();
	que.pop_front();
	que.push_back(3);
	que.top();
	
	
}
