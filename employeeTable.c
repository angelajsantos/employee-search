#include <string.h>     //string manipulation
#include <stdlib.h>     //functions involving memory allocation 
#include "employee.h"   //contains struct definition for employee

Employee EmployeeTable[] = //array of employee structures 
    //each element of the array represents an employee with their info
{ 
    {1001, "Daphne Borromeo", "909-555-2134", 8.78}, 
    {1011, "Tammy Franklin", "213-555-1212", 4.50}, 
    {1140, "Dorris Perl", "310-555-1215", 7.80}, 
    {4011, "Tony Bobcat", "909-555-1235", 6.34}, 
    {5045, "Brian Height", "714-555-2749", 8.32} 

}; 
//a constant integer representing the number of entries in the employeetabl array
const int EmployeeTableEntries = sizeof(EmployeeTable)/sizeof(EmployeeTable[0]);
    //calculates the number of entries by dividing the total size of the array (in bytes) by the size of a single element
