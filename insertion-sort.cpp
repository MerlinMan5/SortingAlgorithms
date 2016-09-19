//============================================================================
// Name        : insertion-sort.cpp
// Author      : Jonathan Arauco, Zac Sanford and Zac Christie
// Date        :
// Copyright   : 
// Description : Implementation of insertion sort in C++
//============================================================================

#include "sort.h"

void
InsertionSort::sort(int A[], int size)				// main entry point
{
  int i, j, tmp;
    for (i = 1; i < size; i++) {
        j = i;
        while (j > 0 && A[j - 1] > A[j]) {
            tmp = A[j];
            A[j] = A[j - 1];
            A[j - 1] = tmp;
            j--;
        }
    }
  /* Complete this function with the implementation of insertion sort algorithm 
  Record number of comparisons in variable num_cmps of class Sort
  */
}
