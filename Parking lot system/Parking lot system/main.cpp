#include<iostream>
#include <string>

#include "consoles.h"

using namespace std;

int main()
{
	//main loop
	while (1)
	{

		string consol;

		cin >> consol;

		if (consol == "Admin")
		{

			Admin admin; // create admin object


		}

		if (consol == "Operator") {

			Operator operatopr; // create Operator object
			int pass;
			int id;
			cin >> pass >> id;
			bool a = operatopr.passwordcheck(id, pass);


		}

		if (consol == "Customer ") {

			Customer customer; //create customer object
		}


	}

	return 0;
}





