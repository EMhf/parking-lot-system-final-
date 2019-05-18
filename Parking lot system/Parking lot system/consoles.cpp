//
#include<iostream>
#include "consoles.h"
using namespace std;

// CLASS ADMIN Methouds 

void Admin::AddDeleteoperators(int userid,string action) {

	if (action == "del") {
		operatorlist.insert(operatorlist.begin() + userid, 0);
	}

	if (action == "add") {
		operatorlist.insert(operatorlist.begin() + userid, 1);
	}

}



void Admin::AddDeleteparkinglot(int parkinglotid, string action) {
	if (action == "del") {
		operatorlist.insert(parkinglist.begin() + userid, 0);
	}

	if (action == "add") {
		operatorlist.insert(parkinglist.begin() + userid, 1);
	}


}



void Admin::getoperators() {

	for (int i = 0; i <= operatorlist.size(); i++)
	{


		cout << operatorlist.at(i) << endl;


	}
}

	


void Admin::getparkinglot() {

	for (int i = 0; i <= parkinglist.size(); i++)
	{


		cout << parkinglist.at(i) << endl;


	}

}



bool Admin::passwordcheck(int userid, int pass)
{

	if (operatorlist.at(userid) == pass) {

		return true;

	}

	if (parkinglist.at(userid) != pass) {
		operatorlist.insert(operatorlist.begin() + userid, 1);

		return false;
	}
}


///////////////////////////////////

//// CLASS OPERATOR Methouds 




