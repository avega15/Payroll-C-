#include "Paycheck.h"

using namespace std;

Paycheck::Paycheck(string idIn, string nameIn, double payIn) 
: id(idIn), name(nameIn), pay(payIn){}

string Paycheck::getID(){return id;}
string Paycheck::getName(){return name;}
double Paycheck::getPay(){return pay;}

