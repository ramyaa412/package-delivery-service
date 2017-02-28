#include <iostream> //Header files
#include <string>
#include "OvernightPackage.h"
#include "Package.h"
#include "TwoDayPackage.h"
#include <iostream>
#include <vector>
using namespace std;

//To calculate total cost
double Total = 0;

//Print the output
void Package_Pointer(Package *);

int main()
{
	//COst of packages
	std::cout << "\n\t\t\t Package delivery services program \n\n Cost per ounce for a package:  $.50/ounce \n Additional cost for two day delivery:  $2.00/ounce \n Additional cost for overnight delivery: $5.00/ounce"<<endl;

	//Constructor to pass values
	Package Pack("Adam", "24, New Haven", "Raleigh", "NC", 90182, "Ray", "2,Kyrene Avenue", "Phoenix", "Arizona", 90182, "Regular",  5.00, 3);

	OvernightPackage Overnightpackage("Marcus", "14B, Delany street", "Santa Barbara", "CA", 98019, "Tom Hanks", "987 Bishop Street", "Hartford", "Connecticut", 87540, "Overnight", 0.5, 12, 1.10);

	TwoDayPackage TwoDayPackage("Paula", "820 Palm Street", "Miami", "Florida", 22112, "Steve Jobs", "123 Main Street", "Manhattan", "NY", 07612, "Two Day", 2 , 8 , 5);


	//Vector for objects of the different classes
	vector< Package *> Package_Vector(3);
	Package_Vector[0] = &Pack;
	Package_Vector[1] = &Overnightpackage;
	Package_Vector[2] = &TwoDayPackage;

	//Calling functions of classes
	for (int i = 0; i < Package_Vector.size(); i++)
	{
		cout << "\nPackage : " << i + 1 << endl;
		Package_Pointer(Package_Vector[i]);
	}

	//Displaying the total cost
	cout << "\n\n\t\t\t The Total cost of all the packages is $" << Total << "\n\n\n\n\n";
	return(0);
}


void Package_Pointer(Package *ptr)
{
	//Displaying sender's address
	cout << "\nSender: "<<endl;
	cout << ptr->getSname() << endl;
	cout << ptr->getSaddr() << endl;
	cout << ptr->getScity() << "," << ptr->getSstate() << " - " << ptr->getSzip() << "\n";

	//Displaying reciever's address
	cout << "\nReceiver: "<<endl;
	cout<< ptr->getRname() << endl;
	cout << ptr->getRaddr() << endl;
	cout<< ptr->getRcity() << "," << ptr->getRstate() << " - " << ptr->getRzip() << "\n";

	//Displaying the weight of the package
	cout << "Weight of the package: " << ptr->getweight() << endl;
	cout << "Type of delivery : " << ptr->gettype() << endl;
	cout<<"Cost of the package: $" << ptr->calculateCost()<<endl;

	//Calculating the cost
	Total = Total + ptr->calculateCost();

}