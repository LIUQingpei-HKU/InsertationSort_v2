#include <iostream>
#include <algorithm>
#include "SortTestHelper.h"
#include "SelectionSort.h"

using namespace std;

template<typename T>
void insertionSort(T arr[], int n){
    for(int i=1;i<n;i++){

        T e  = arr[i];
        int j=i; //initialize the right position of e
        for(;j>0&&arr[j-1]>e;j--){
            arr[j] = arr[j-1];
        }
        arr[j] = e;
    }
}

int main(){
    int n=10000;
    int *arr = SortTestHelper::generateRandomArray(n,0,10);
    int *arr2 = SortTestHelper::copyIntArray(arr,n);

    SortTestHelper::testSort("Insertion Sort", insertionSort,arr,n);
    SortTestHelper::testSort("Selection Sort", selectionSort,arr2,n);


    delete[] arr;
    delete[] arr2;

    return 0;
}

















