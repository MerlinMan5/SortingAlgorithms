#include <iostream>
#include <iterator>
#include <ctime>
#include <cstdio>
#include <cstdlib>
#include "option.h"
#include "sort.h"
#include <limits>
#include <vector>
#include <fstream>

using namespace std;

int main(int argc, char** argv)
{
   cout << "yo mama" << endl;

   ofstream intList1{ "10^2_rand.txt" };
   intList1 << "100" << endl;

 //10^2 random

   for (int i = 0; i < pow(10, 2); i++) {
	   intList1 << rand() % 1000 << endl;
   }
   intList1 << endl;
   intList1.close();
   cout << endl << endl;  
//10^2 increasing

   ofstream intList2{ "10^2_inc.txt" };
   intList2 << "100" << endl;


   for (int i = 0; i < pow(10, 2); i++)
   {
	   intList2 << (i+1) * 2 << endl;
   }
   intList2 << endl;
   intList2.close();
   cout << endl << endl;
//10^2 decreasing
	
   ofstream intList3{ "10^2_dec.txt" };
   intList3 << "100" << endl;

   for (int i = pow(10,2); i > 0; i--)
   {
	   intList3 << i+1 << " ";
   }
   intList3 << endl;
   intList3.close();
   cout << endl << endl;


}