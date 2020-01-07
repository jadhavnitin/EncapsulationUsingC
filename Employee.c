#include<stdio.h>
#include <malloc.h>
#include "Employee.private.h"
#include "Employee.public.h"


void PrintEmployeeDetail(Empptr e)
{
	printf("Id  = %d , Salary = %f", e->Id, e->Salary);	
}

Empptr CreateNewEmployee(int ID, float salary)
{
	Empptr newEmployee = (Empptr)malloc(sizeof(struct Emp));
	newEmployee->Id = ID;
	newEmployee->Salary = salary;
}


/*
void SetEmployeeDetail(Empptr  e)
{
	struct Emp emp;
	emp.Id = e.Id;
	emp.Salary = e.Salary;
}
*/

