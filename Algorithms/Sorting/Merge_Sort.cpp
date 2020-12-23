#include<iostream>
using namespace std;

const int MAX_SIZE = 1e5 + 1;

/*
*
*  Implementation of merge sort in C++ 
*  O(n*log(n)) time complexity
*
*/

void merge(int arr[], int l, int m, int r) {
	
	// Merges two sorted arrays arr(l, m) and arr(m+1,r)
	
	const int len1 = m - l + 1, len2 = r - m;
	
	int arr1[len1 + 1];
	int arr2[len2 + 1];
	
	for(int i=0; i<len1; i++) 
		arr1[i] = arr[i+l];
	
	for(int j=0; j<len2; j++) 
		arr2[j] = arr[j+m+1];
	
	int index1 = 0, index2 = 0;
	
	for(int i=0;i < len1+len2;i++) {
		if(arr1[index1] < arr2[index2]) {
			if(index1 < len1) 
				arr[i+l] = arr1[index1++];
			else 
				arr[i+l] = arr2[index2++];
		} else {
			if(index2 < len2)
				arr[i+l] = arr2[index2++];
			else 
				arr[i+l] = arr1[index1++];
		}	
	} 
}


void mergeSort(int arr[], int l, int r) {
	
	if( l < r) {
		
		// Divide array into two subarrays
		int m = (l+r)/2;
		
		mergeSort(arr, l, m);
		mergeSort(arr, m+1,r);
		
		// Merge two sorted arrays
		merge(arr, l, m, r);
	}
}



int main() {
	
	int n,arr[MAX_SIZE];
	
	cin>>n;
	
	for(int i=0;i<n;i++) 
		cin>>arr[i];
	
	mergeSort(arr,0, n-1);
	
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<" ";
	}
	
}
