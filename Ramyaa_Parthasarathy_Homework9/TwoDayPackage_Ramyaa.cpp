//Header files
#include <iostream>
#include <string>
#include "TwoDayPackage.h"
#include "Package.h"
using namespace std;

//Default Constructor initilized
TwoDayPackage::TwoDayPackage()
{
	settwo_day_delivery_fee(0);
}

//Initialising Constructor
TwoDayPackage::TwoDayPackage(string sn, string sa, string sc, string ss, int sz, string rn, string ra, string rc, string rs, int rz, string type_of_package,  double cost, double wt, double fee)
{
	setweight(wt);
	setcost(cost);
	setSname(sn);
	setSaddr(sa);
	setScity(sc);
	setSstate(ss);

	setRname(rn);
	setRaddr(ra);
	setRcity(rc);
	setRstate(rs);
	setRzip(rz);
	setSzip(sz);
	settwo_day_delivery_fee(fee);
	settype(type_of_package);
}

//get function for the fee
double TwoDayPackage::gettwo_day_delivery_fee()
{
	return two_day_delivery_fee;
}
//set function for the fee
void TwoDayPackage::settwo_day_delivery_fee(double fee)
{
	if (fee >= 0)
		two_day_delivery_fee = fee;
	else //if fee is negative
		cout << "\n Invalid Fee";

}

//Calculating the cost for two day package
double TwoDayPackage::calculateCost()
{
	return Package::calculateCost() + two_day_delivery_fee;
}

//Destructor 
TwoDayPackage::~TwoDayPackage()
{
}
