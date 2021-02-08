#include<iostream>
using namespace std;

/*
*
*  Implementation of recursive Binary Search in C++
*  O(log(n)) Time Complexity
*  Prerequests: array has to be sorted before implemenation.
*
*/

int binarySearch(int arr[], int left, int right, int key) {
	
    if(left <= right) {
    
	int mid = (left + right)/2;
    	
    	if(arr[mid] == key) {
    		return mid;
	}
		
	if(arr[mid] > key) {
		return binarySearch(arr, left, mid - 1, key);
	}
		
	return binarySearch(arr, mid + 1, right, key); 
    	
	}
	
	return -1;
}


int main () {
	
    int arr[] = { 0, 13, 24, 333, 401 }; 
    int key = 333; 
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int found = binarySearch(arr, 0, size, key);
    
    (found == -1) 
        ? cout << "Item is not present in array"
        : cout << "Item is present at index " << found; 
    
    
}
