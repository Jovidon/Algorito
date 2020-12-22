#include<iostream>
using namespace std;

const int MAX_SIZE = 1e5 + 1;

/*
*
*  Implementation of insertion sort in C++ 
*  O(n^2) time complexity
*
*/

int main () {
	
	int n, arr[MAX_SIZE], key;
	
	cin>>n;
	
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	
	for(int i=1; i<n; i++) {
		
		key = arr[i];
		int j = i - 1;
		
		while(j >= 0 && key < arr[j]) {
			arr[j+1] = arr[j];
			j--;
		}	
		
		arr[j+1] = key;	
	}
	
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<" ";
	}
	
}
