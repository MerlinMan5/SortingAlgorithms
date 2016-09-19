//============================================================================
// Name        : bubble-sort.cpp
// Author      : Jonathan Arauco, Zac Sanford and Zac Christie
// Date        : 
// Copyright   : 2016
// Description : Implementation of bubble sort in C++
//============================================================================

#include "sort.h"
using namespace std;

void 
BubbleSort::sort(int A[], int size)			// main entry point
{
 // cout << "bubbles, bubbles, bubbles," << endl;
  int temp = 0;
  while (size > 0)
  { 
    for (int i = 1; i < size; i++) 
    {
      num_cmps++;
      if (A[i - 1] > A[i]) { //if the left element is greater than the right, swap them.
        temp = A[i];
        A[i] = A[i-1];
        A[i-1] = temp;
      }
    }
    size--; //reduce size by one so elements that are already sorted won't be compared.
  }
  /* Complete this function with the implementation of bubble sort algorithm 
     Record number of comparisons in variable num_cmps of class Sort
  */
}
