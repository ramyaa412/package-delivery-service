#include <iostream>    //Header files defined
#include <string>
#include "OvernightPackage.h"
#include "Package.h"
using namespace std;

//Default Constructor nitialized
OvernightPackage::OvernightPackage()
{

	setovernight_delivery_fee(0);
}

//Initilisation constructor
OvernightPackage::OvernightPackage(string sn, string sa, string sc, string ss, int zips, string rn, string addr, string rc, string rs, int zipr, string type_of_package,  double cost, double wt, double fee)
{
	setweight(wt);
	setcost(cost);
	setSname(sn);
	setSaddr(sa);
	setScity(sc);
	setSstate(ss);
	setSzip(zips);

	setRname(rn);
	setRaddr(addr);
	setRcity(rc);
	setRstate(rs);
	setRzip(zipr);
	
	setovernight_delivery_fee(fee);
	settype(type_of_package);
}

// get overnight fee
double OvernightPackage::getovernight_delivery_fee()
{
	return overnight_delivery_fee;
}

//set overnight fee
void OvernightPackage::setovernight_delivery_fee(double fee)
{
	if (fee >= 0)
		overnight_delivery_fee = fee; //check is fee is there
	else
		//If fee is negative
		cout << "\n Invalid flat-fee";

}

//Calculate the cost of the package
double OvernightPackage::calculateCost()
{
	return Package::calculateCost() + overnight_delivery_fee;
}

//default destructor
OvernightPackage::~OvernightPackage() {}

