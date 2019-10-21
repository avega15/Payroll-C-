#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "PayrollSystem.h"

using namespace std;

int main(){
	PayrollSystem system = PayrollSystem();
	
	system.addEmployee("E101", "Bob", 5, 10);
	system.addEmployee("E102", "Marley", 5, 11.3);
	system.addEmployee("E103", "Pete", 4.5, 14);
	system.addEmployee("E104", "Mortimer", 6.7, 20);
	
	cout << "Showing all employees: " << endl;
	system.showEmployee();
	cout << endl;
	
	cout << "Printing all paychecks: " << endl;
	system.showAllPaychecks();
	cout << endl;
	
	cout << "Deleting employee E101" << endl;
	system.deleteEmployee("E101");
	cout << endl;
	
	cout << "Showing all employees: " << endl;
	system.showEmployee();
	cout << endl;
	
	cout << "Printing all paychecks: " << endl;
	system.showAllPaychecks();
	
	return 0;
}
