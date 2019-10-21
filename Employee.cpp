#include "Employee.h"

using namespace std;

Employee::Employee(string idIn, string nameIn, double wageIn, double hoursIn) 
: id(idIn), name(nameIn), wage(wageIn), hours(hoursIn){}

string Employee::getID(){return id;}
string Employee::getName(){return name;}
double Employee::getWage(){return wage;}
double Employee::getHours(){return hours;}
