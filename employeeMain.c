//Compile using the following command: gcc employeeMain.c employeeTable.c employeeOne.c 
//gcc employeeMain.c employeeTable.c employeeTwo.c 

#include <string.h> 
#include <stdlib.h> 
#include "employee.h" 
int main(void) { 

    //defined in employeeOne.c 
    //function prototypes are declared within the main function, indicating that these functions are defined in an external file
    // also wrappers
    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind); 
    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind); 
    PtrToEmployee searchEmployeeByPhone(const Employee table[], int sizeTable, char * phoneToFind);
    PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double salaryToFind);  
        //const Employee table[] = a pointer (const Employee*) to the first element of an array of employee structures

    //defined in employeeTable.c 
    extern Employee EmployeeTable[];
    extern const int EmployeeTableEntries;
        //external variables defined in another file, in this case employeeTable.c
    PtrToEmployee matchPtr; //Declaration 


    //searching for number
    //Example Found
    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1001); 
        //matchPtr will equal null if target element is not found due to the function
    if (matchPtr != NULL) 
        printf("Employee ID 1001 is in record %d\n", matchPtr - EmployeeTable); 
            //prints index of the found employee in the employeetable array
            //index is calculated by subtracting the base address of employeetable from the address stores in matchPtr
    else 
        printf("Employee ID 1045 is NOT found in the record\n"); 
    //Example not found
    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 9273);
    if (matchPtr != NULL) 
        printf("Employee ID 9273 is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee ID 9273 is NOT found in the record\n"); 

    //searching for name
    //Example found 
    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat"); 
    if (matchPtr != NULL) 
        printf("Employee Tony Bobcat is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee Tony Bobcat is NOT found in the record\n");  
    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Catbob"); 
    if (matchPtr != NULL) 
        printf("Employee Tony Catbob is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee Tony Catbob is NOT found in the record\n");  

    //searching for phone
    //Example found 
    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "310-555-1215");
    if (matchPtr != NULL) 
        printf("Employee Phone 310-555-1215 is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee Phone 310-555-1215 is NOT found in the record\n"); 
    //Example not found
    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "213-438-9128");
    if (matchPtr != NULL) 
        printf("Employee Phone 213-438-9128 is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee Phone 213-438-9128 is NOT found in the record\n"); 

    //searching for salary
    //Example found 
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 8.32);
    if (matchPtr != NULL) 
        printf("Employee Salary 8.32 is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee Salary 8.32 is NOT found in the record\n"); 
    //Example not found
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 12.34);
    if (matchPtr != NULL) 
        printf("Employee Salary 12.34 is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee Salary 12.34 is NOT found in the record\n"); 

    return EXIT_SUCCESS; 
}