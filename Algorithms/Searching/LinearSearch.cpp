#include<iostream>
using namespace std;

/*
*
*  Implementation of Linear Search in C++
*  O(n) Time Complexity
*
*/

int linearSearch(int arr[], int size, int key) {
	
	for(int i=0; i<size; i++) {
		if(arr[i] == key) return i;
	}
	
	return -1;
}


int main () {
	
    int arr[] = { 0, 13, 24, 333, 401 }; 
    int key = 334; 
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int found = linearSearch(arr, size, key);
    
    (found == -1) 
        ? cout << "Item is not present in array"
        : cout << "Item is present at index " << found; 
    
    
}
