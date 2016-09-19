//============================================================================
// Name        : selection-sort.cpp
// Author      : Jonathan Arauco, Zac Sanford and Zac Christie
// Date        :
// Copyright   : 
// Description : Implementation of selection sort in C++
//============================================================================

#include "sort.h"
#include <iostream>

void
SelectionSort::sort(int A[], int size)				// main entry point
{
  
  /* Complete this function with the implementation of selection sort algorithm 
  Record number of comparisons in variable num_cmps of class Sort
  */
	int tmp;
  for (int i = 0; i < size- 1; i++)
	{

		for (int j = i + 1; j < size; j++)
		{
			num_cmps++;
			if (A[i] > A[j])
			{
				tmp = A[i];
				A[i] = A[j];
				A[j] = tmp;
			}
			
		}
		
	}
	
}
