

// Consoles classes

#include <iostream>
#include <vector>


using namespace std;


//Admin CONSOLE
class Admin  
{
public:
	// Constructor
	Admin() {}

	// Destructor
	~Admin(){}


   // Member Functions() 
	void AddDeleteoperators(int userid, string action);
	void AddDeleteparkinglot(int parkinglotid, string action);
	void getoperators();
	void getparkinglot();

	bool passwordcheck(int userid, int pass);


private:
	
	int totalparking = 50;
	int totaloperator = 100;
	vector <int> operatorlist(totaloperator);// it should be 3-dim

	vector <int> parkinglist(totalparking);//it should be 3-dim

};

/////////////////////////////////////////////////////////////////////////////////////


//Operator CONSOLE
class Operator: public Admin  //INHERITANCE
{
public:

	int Parkinglotrevenue;
	// Constructor
	Operator() {};

	// Destructor
	~Operator() {};


	// Member Functions() inside the class
	
	int getparkingslotstotalNUM() {
		return parkingslotstotalNUM;
	}

	int getparkingslotstotalNUM() {
		return parkingslotstotalNUM;
	}


private:

	int revenuetotalamount = 45;
	int parkingslotstotalNUM = 100;

};


/////////////////////////////////////////////////////////////////////////////////

//Customer CONSOLE
class Customer : public Operator
{
public:
	
    vector <int> parkinglot(0);
	int carnum;
	int revenue;
	int fare = 2;
	
	// Constructor
	Customer() {

		cout << "welcome enter UR car no" << endl;
		cin >> carnum;

		parkinglot.push_back(carnum);
	
	}

	// Destructor
	~Customer() {
	
		int num;
		cout << "enter the number of hours"<<endl;
		cin >> num;
		revenue = num * fare;
		Parkinglotrevenue = Parkinglotrevenue + revenue;

		cout << "good bye" << endl;
	
	}


	// Member Functions() 
	


	
};