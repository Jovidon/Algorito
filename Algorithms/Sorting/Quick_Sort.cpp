#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int partitionArr(int arr[],int lb,int ub){

    int pivot = arr[lb];
    int startPos = lb;
    int endPos = ub;

    while(startPos<endPos){

        while(arr[startPos] <= pivot)
            startPos++;
        while(arr[endPos] > pivot)
            endPos--;
        if(startPos<endPos)
            swap(arr[startPos],arr[endPos]);
    }
    swap(arr[lb],arr[endPos]);
    return endPos;

}

void quickSort(int arr[],int lb,int ub){
    if(lb<ub){
        int loc = partitionArr(arr,lb,ub);
        quickSort(arr,lb,loc-1);
        quickSort(arr,loc+1,ub);
    }
}


//Print the sorted array
void printSortedArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int arr[] = {9,3,7,5,6,4,8,2}; // Unsorted Array - Test Case
    int arr_size = sizeof(arr) / sizeof(arr[0]); //Getting array size
    quickSort(arr,0,arr_size-1); // Send the array to qucikSort
    printSortedArray(arr,arr_size); // Print the sorted array
    return 0;
}