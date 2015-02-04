#pragma once
#include <iostream>
#include <time.h>
#include <string>
#include <fstream>

using namespace std;

class SolarSystem
{
public:

	
	SolarSystem();
	~SolarSystem();

	//Functions:
	void Star(int star[], int absolute, string SSname);
	void PlanetNumbersTypes(int star[], string SSname, int absolute, int numberOfPlanets[]);

	

protected:
	//Class Global variables:

	int absolute;
	string SSname;

	//-------------------//


	//Star:
	int star[4];
	enum starType
	{
		Solo = 0,
		Binary = 1,
		Eclipsing = 2,
		Giant = 3
	};

	//-------------------//

	//Planets, types and quantity:

	int numberOfPlanets[4];

	enum planetClass
	{
		ClassM = 0,
		ClassL = 1,
		ClassD = 2,
		ClassK = 3
	};

	//--------------------//



};

