#ifndef PAYROLLSYSTEM
#define PAYROLLSYSTEM
#include <iostream>
#include <vector>
#include <string>
#include "Employee.h"
#include "Paycheck.h"

using namespace std;

class PayrollSystem{	
	public:	
		void addEmployee(string idIn, string nameIn, double wageIn, double hoursIn);
		void showEmployee();
		int findByID(string idIn);
		void deleteEmployee(string idIn);
		void showIndividualPaycheck(string idIn);
		void showAllPaychecks();
		
	private:
		vector <Employee> people;
		vector <Paycheck> paychecks;
	
};
#endif
