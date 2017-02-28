#ifndef TWODAYPACKAGE_H 
#define TWODAYPACKAGE_H
#include "Package.h"
 #include <iostream>  //header files
#include <string>
using namespace std;

class TwoDayPackage :public Package
{
protected:
	double  two_day_delivery_fee; //fee

public:
	//Constructor and Destructor
	TwoDayPackage();
	~TwoDayPackage();
	TwoDayPackage(string, string, string, string, int, string, string, string, string,int, string, double, double, double); //constructor
	
	//Function declarations
	virtual double calculateCost();
	double gettwo_day_delivery_fee();
	void settwo_day_delivery_fee(double delivery_fee);
//	double calculateCost();
};

#endif

