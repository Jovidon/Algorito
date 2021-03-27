#include<iostream>
#include<vector>
using namespace std;

/**
*
* Design of Deque data structure with our own library
*
*/


template <typename T>
class Deque {
	private: 
	  	typename std:: vector<T>::iterator it;
	  	vector<T> vec;
	  	
	public: 
		bool isEmpty() {
			return (vec.size() == 0);
		}
		
		void push_back(T item) {
			vec.push_back(item);
		}
		
		void pop_back() {
			vec.pop_back();
		}
		
		T back() {
			return vec[vec.size() - 1];
		}
		
		void push_front(T item) {
			it = vec.begin();
			vec.insert(it, item);
		}
		
		void pop_front() {
			vec.erase(vec.begin());
		}
		
		T front() {
			return vec[0];
		}
	
};

int main () {
	
	Deque<int> deq;
	
	cout<<"Test case #1 ";
	(deq.isEmpty())? cout<<"succedded!" : cout<<"failed!";
	cout<<endl;
	
	deq.push_back(2);
	
	// deque = [ 2 ]	
	
	cout<<"Test case #2 ";
	(deq.back() == 2) ? cout<<"succedded!" : cout<<"failed!";
	cout<<endl;
	
	
	cout<<"Test case #3 ";
	(deq.front() == 2) ? cout<<"succedded!" : cout<<"failed!";
	cout<<endl;
	
	deq.push_front(3);
	
	// deque = [ 3, 2 ]
	
	cout<<"Test case #4 ";
	(deq.back() == 2) ? cout<<"succedded!" : cout<<"failed!";
	cout<<endl;
	
	
	cout<<"Test case #5 ";
	(deq.front() == 3) ? cout<<"succedded!" : cout<<"failed!";
	cout<<endl;
	
	deq.push_back(1);
	
	// deque = [ 3, 2, 1 ]
	
	cout<<"Test case #6 ";
	(deq.back() == 1) ? cout<<"succedded!" : cout<<"failed!";
	cout<<endl;
	
	cout<<"Test case #7 ";
	(deq.front() == 3) ? cout<<"succedded!" : cout<<"failed!";
	cout<<endl;
		
}
