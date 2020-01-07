#include "Employee.public.h"


int main()
{
	//Emp e;
	Empptr newEmployee = CreateNewEmployee(1, 10000);
	newEmployee->Id = 10;
	PrintEmployeeDetail(newEmployee);
}