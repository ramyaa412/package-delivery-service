#include "Package.h"
#include <iostream> //header files
#include <string>
using namespace std;

//Default Constructor
Package::Package()
{
	setcost(0);
	setweight(0);
}

//Initialized constructor
Package::Package(string sn, string sa, string sc, string ss, int sz, string rn, string ra, string rc, string rs,int rz, string type, double cost, double wt)
{
	setweight(wt);
	setcost(cost);
	setSname(sn);
	setSaddr(sa);
	setScity(sc);
	setSstate(ss);
	setSzip(sz);

	setRname(rn);
	setRaddr(ra);
	setRcity(rc);
	setRstate(rs);
	setRzip(rz);
	
	settype(type);

}

//Calculate the cost
double Package::calculateCost()
{

	return weight*cost_per_ounce;

}


void Package::settype(string type)
{
	type_of_package = type;
}

string Package::gettype()
{
	return type_of_package;
}


void Package::setweight(double wt)
{
	if (wt >= 0)
	{
		weight = wt;
	}

	else
		cout << "\n The weight is invalid"; //If the weight is negative
}

void Package::setcost(double cost)
{
	if (cost >= 0)
	{
		cost_per_ounce = cost;

	}
	else
		cout << "\n The cost is invald"; //invalid fees i.e negative

}

string Package::getSname()
{
	return Sname;
}

string Package::getSaddr()
{
	return Saddr;
}

string Package::getSstate()
{
	return Sstate;
}

string Package::getScity()
{
	return Scity;
}

int Package::getSzip()
{
	return Szip;
}

string Package::getRname()
{
	return Rname;
}

string Package::getRaddr()
{
	return Raddr;
}

string Package::getRstate()
{
	return Rstate;
}

string Package::getRcity()
{
	return Rcity;
}

int Package::getRzip()
{
	return Rzip;
}

double Package::getweight()
{
	return weight;
}

double Package::getcost()
{
	return cost_per_ounce;
}


void  Package::setSname(string sn)
{
	Sname = sn;
}
void  Package::setRname(string rn)
{
	Rname = rn;
}
void  Package::setSaddr(string sa)
{
	Saddr = sa;
}
void  Package::setScity(string sc)
{
	Scity = sc;
}
void Package::setSstate(string ss)
{
	Sstate = ss;
}
void Package::setSzip(int sz)
{
	Szip = sz;
}
void Package::setRaddr(string ra)
{
	Raddr = ra;
}
void Package::setRcity(string rc)
{
	Rcity = rc;
}
void Package::setRstate(string rs)
{
	Rstate = rs;
}
void Package::setRzip(int rz)
{
	Rzip = rz;
}


Package::~Package() //destructor
{

}