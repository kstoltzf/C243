/*********************************************************************
  Author:        Dana Vrajitoru, IUSB, CS
                 W. Knight, IUSB, CS
  Class:         C243 Data Structures
  File name:     general.cc
  Last updated:  January 18, 2012
  Description:   Some useful general purpose functions.
**********************************************************************/

#include <iostream>
using namespace std;

#include <stdlib.h>

#include "general.h"

/*********************  T E S T   A L L O C A T I O N  ********************

This utility function accepts as an argument a pointer of any type whatsoever.
It tests the pointer "p" to see whether it is NULL, and if it is, the function
terminates the program with an error message saying "dynamic allocation
failed."  If "p" is not NULL, the function does nothing.  This function is NOT 
a member of the "stack_of" class.  Documented and coded by W. Knight.  */

void testAllocation(void *p)
{
  if (!p)
  {
    cout << "Dynamic allocation failed.  Program being terminated."
	 << endl;
    exit(1);
  }
}
