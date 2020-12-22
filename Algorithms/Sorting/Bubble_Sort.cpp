#include<iostream>
using namespace std;

const int MAX_SIZE = 1e5 + 1;

/*
*
*  Implementation of bubble sort in C++ 
*  O(n^2) time complexity 
*
*/

int main () {
	
	int n, arr[MAX_SIZE];
	
	cin>>n;
	
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	
	for(int i=0; i<n-1; i++) {
		for(int j=i+1; j<n; j++) {
			if(arr[i] > arr[j]) {
				swap(arr[i],arr[j]);
			}
		}
	}
	
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<" ";
	}
	
}
