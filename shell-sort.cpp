//============================================================================
// Name        : shell-sort.cpp
// Author      : Jonathan Arauco, Zac Sanford and Zac Christie
// Date        :
// Copyright   : 
// Description : Implementation of shell sort in C++
//============================================================================

#include "sort.h"
#include <iostream>

inline int next_gap(int gap) { //get the next gap, increasing the size of the subarrays
	if (gap == 2) return 1;
	else {
		return (int)gap / 2.2;
	}
}

void ShellSort::sort(int A[], int size)
{
	int gap = size / 2;
	for (gap; gap > 0; gap = next_gap(gap)) {
		for (int i = gap; i < size; i++) {
			int temp = A[i];
			int j = i;
			while (j >= gap && (num_cmps++, temp < A[j - gap])) {
				A[j] = A[j - gap];
				j -= gap;
			}
			//num_cmps++; //takes care of last comparison when the terminate condition is reached
			A[j] = temp; //put A[i] in the right spot
		}
	}
	/* Complete this function with the implementation of shell sort algorithm
	Record number of comparisons in variable num_cmps of class Sort
	*/
}
