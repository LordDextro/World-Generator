#pragma once
#include "SolarSystem.h"
#include <exception>

class PlanetSpecification : public SolarSystem
{
public:
	
	~PlanetSpecification();
	PlanetSpecification();

	void LoadFromFile(int numberOfPlanets[], int star[], string SSname);

	void SetPlanetSpecs(int numberOfPlanets[], string SSname, int tempPlanetSpecM[], int tempPlanetSpecL[], int tempPlanetSpecK[], int tempPlanetSpecD[], int test);


private:

	

	string SSnameM;
	string SSnameL;
	string SSnameK;
	string SSnameD;

	//Planet Specifications//

	int tempPlanetSpecM[5];
	int tempPlanetSpecL[5];
	int tempPlanetSpecD[5];
	int tempPlanetSpecK[5];

	enum PlanetSpecs
	{

		DayCycle = 0,
		Gravity = 1,
		Atmos = 2,
		FloodAndTide = 3

	};

	//--------------------//

};

