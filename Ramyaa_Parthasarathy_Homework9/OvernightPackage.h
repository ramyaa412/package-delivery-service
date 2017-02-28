#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include "Package.h" //header files
#include <iostream>
#include <string>
using namespace std;

class OvernightPackage :public Package
{
protected:
	double overnight_delivery_fee;
public:

	//Constructors and destructor
	OvernightPackage();
	~OvernightPackage();
	OvernightPackage(string, string, string, string, int,string, string, string, string, int, string, double, double, double);
	
	//Other Function delclarations
	virtual double calculateCost();

	double getovernight_delivery_fee();
	void setovernight_delivery_fee(double delivery_fee);
};

#endif