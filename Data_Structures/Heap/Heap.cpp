#include<iostream>
#include<vector>
using namespace std;

/**
*
* 	Implementation of heap data structure in C++
*	
*/

class Heap {
	private: 
		vector<int> heap;
		
	public:
		
		void heapify(int i) {
			int size = heap.size();
			int largest = i;
			int l = 2 * i + 1;
			int r = 2 * i + 2;
			
			if (l < size && heap[l] > heap[largest]) {
				largest = l;
			}
			
			if (r < size && heap[r] > heap[largest]) {
				largest = r;
			}
			
			if (largest != i) {
				swap(heap[i], heap[largest]);
				heapify(largest);
			}
			
		}
		
		void insert(int item) {
			int size = heap.size();
			if (size == 0) {
				heap.push_back(item);
			} else {
				heap.push_back(item);
				for (int i = size / 2; i>=0; i--) {
					heapify(i);
				}
			}
		}
		
		void remove(int num) {
			int size = heap.size();
			int i;
			for (i = 0; i < size; i++){
			    if (num == heap[i])
			      break;
			}
			swap(heap[i], heap[size - 1]);
			heap.pop_back();
			for (int i = size / 2 - 1; i >= 0; i--){
		       heapify(i);
		  	}
		}
		
		void print() {
		  for (int i = 0; i < heap.size(); ++i)
		    cout << heap[i] << " ";
		  cout << "\n";
		}
		
};


int main () {
	Heap heap;	
	heap.insert(1);
	heap.insert(2);	
	heap.insert(3);
	heap.print();
}
