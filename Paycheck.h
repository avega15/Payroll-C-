#ifndef PAYCHECK
#define PAYCHECK
#include <iostream>
#include <string>

using namespace std;

class Paycheck{	
	public:	
		Paycheck(string idIn, string nameIn, double payIn);
		string getID();
		string getName();
		double getPay();
		
		void paycheckTell(){
				cout << "Paycheck for $" << pay << " issued to " << id << " " << name << endl;
			};
		
	private:
	string id;
	string name;
	double pay;
};
#endif
