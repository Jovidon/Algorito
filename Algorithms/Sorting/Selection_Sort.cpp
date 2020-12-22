#include<iostream>
using namespace std;

const int MAX_SIZE = 1e5 + 1;

/*
*
*  Implementation of selection sort in C++ 
*  O(n^2) time complexity
*
*/

int main () {
	
	int n, arr[MAX_SIZE], min_Index;
	
	cin>>n;
	
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	
	for(int i=0; i<n-1; i++) {
		min_Index = i;
		for(int j=i+1; j<n; j++) {
			// Find the index of min element of array
			if(arr[min_Index] > arr[j]) {
				min_Index = j;
			}
		}
		// swap current element with found minimum one
		swap(arr[i], arr[min_Index]);		
	}
	
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<" ";
	}
	
}
