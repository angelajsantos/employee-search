#include <stdio.h>
#include <stddef.h> 

//provides a foundation for working with employee data
    //allows creation of instances of employee struct
    //use pointes to manipulate or read data
typedef struct { 
    long number;            //number of employee         
    char *name;             //name of employee
    char *phone;            //phone number of employee
    double salary;          //salary of employee
} Employee, *PtrToEmployee;
    //PtrToEmployee = a pointter to an employee struction
    //    can be used to point to an instance of employee and modify its contents
    //used instead of writing struct Employee *

typedef const Employee *PtrToConstEmployee; 
    //PtrToConstEmployee = a pointer to a constant employee structure
    //    can point to an instance but prevents modification of the pointed-to-data

