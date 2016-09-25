//============================================================================
// Name        : radix-sort.cpp
// Author      : Jonathan Arauco, Zac Sanford and Zac Christie
// Date        :
// Copyright   : 
// Description : Implementation of radix sort in C++
//============================================================================

#include "sort.h"
#include <iostream>
using namespace std;
void
RadixSort::sort(int A[], int size)
{

	int max = A[0];
	int min = A[0];
	for (int i = 1; i < size;i++) {
		if (A[i]>max) {
			max = A[i];
		}
		if(A[i]<min){
			min=A[i];
		}
	}
	if(min<0){
		for(int i=0;i<size;i++){
			A[i] = A[i] - min;
			cout << "HIIIIII";
			cout<<A[i]<<" ";
		}
		max-= min;
	}
	for (int exp = 1; max / exp > 0; exp *= 10) {
		int output[size]; // output arrays
		int i, count[10] = { 0 };

		for (i = 0; i < size; i++)
			count[(A[i] / exp) % 10]++;

		for (i = 1; i < 10; i++)
			count[i] += count[i - 1];

		for (i = size - 1; i >= 0; i--)
		{
			output[count[(A[i] / exp) % 10] - 1] = A[i];
			count[(A[i] / exp) % 10]--;
		}

		for (i = 0; i < size; i++)
			A[i] = output[i];
	}
	if(min<0){
		for(int i=0;i<size;i++){
			A[i] = A[i] + min;
		}
	}
	/*
     Complete this function with the implementation of radix sort
     algorithm.
  */
}
