#ifndef EMPLOYEE
#define EMPLOYEE
#include <string>

using namespace std;

class Employee{	
	public:	
		Employee(string idIn, string nameIn, double wageIn, double hoursIn);
		string getID();
		string getName();
		double getWage();
		double getHours();
		
		double calcPay(double wageIn, double hoursIn){
			pay = wageIn * hoursIn;
			return pay;
		};
		
	private:
		string id;
		string name;
		double wage;
		double hours;
		double pay;
};
#endif
