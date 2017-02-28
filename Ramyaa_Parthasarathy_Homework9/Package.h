#ifndef PACKAGE_H
#define PACKAGE_H
#include <iostream> //header files
#include <string>
using namespace std;

//base class
class Package
{
protected: 
	string Sname;
	string Saddr;
	string Scity;
	string Sstate;
	int Szip;

	string Rname;
	string Raddr;
	string Rcity;
	string Rstate;
	int Rzip;

	string type_of_package;
	double weight, cost_per_ounce;

public:
	//Constructors
	Package();
	Package(string, string, string, string, int, string, string, string, string,  int, string, double, double);
	virtual double calculateCost();
	~Package();

	//Function Declarations
	void setweight(double);
	double getweight();

	void setcost(double);
	double getcost();

	void settype(string);
	string gettype();

	string getSname();
	void  setSname(string);

	string getSaddr();
	void  setSaddr(string);

	string getScity();
	void  setScity(string);

	string getSstate();
	void setSstate(string);

	int getSzip();
	void setSzip(int);

	string getRname();
	void setRname(string);

	string getRaddr();
	void  setRaddr(string);

	string getRcity();
	void setRcity(string);

	string getRstate();
	void setRstate(string);

	int getRzip();
	void setRzip(int);
	
};


#endif