#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "PayrollSystem.h"

using namespace std;

	
void PayrollSystem::addEmployee(string idIn, string nameIn, double wageIn, double hoursIn){
	people.push_back(Employee(idIn, nameIn, wageIn, hoursIn));
	
	double pay = people[people.size()].calcPay(wageIn, hoursIn);
	paychecks.push_back(Paycheck(idIn, nameIn, pay));
};

void PayrollSystem::showEmployee(){
	for(unsigned int i = 0; i < people.size(); i++){
		cout << people[i].getName() << endl;
		}
};

void PayrollSystem::showIndividualPaycheck(string idIn){
	int employeeIndex = findByID(idIn);
	if(employeeIndex == -1){
		cout << "No employee by that ID." << endl;
		}
	else{
		cout << "Payroll for Company:" << endl;
		paychecks[employeeIndex].paycheckTell();
		//people[employeeIndex].hours = 0;
		}
};

void PayrollSystem::showAllPaychecks(){
	cout << "Payroll for Company:" << endl;
	
	for(unsigned int i = 0; i < people.size(); i++){
		paychecks[i].paycheckTell();
		}
};

void PayrollSystem::deleteEmployee(string idIn){
	int employeeIndex = findByID(idIn);
	if(employeeIndex == -1){
		cout << "No employee by that ID." << endl;
		}
	else{
		people.erase(people.begin() + employeeIndex);
		paychecks.erase(paychecks.begin() + employeeIndex);
		}
};

int PayrollSystem::findByID(string idIn){
	for(unsigned int i = 0; i < people.size(); i++){
		if(people[i].getID() == idIn){
			return i;
			}
	}
	return -1;
};
