#include "PlanetSpecification.h"


PlanetSpecification::PlanetSpecification()
{
	test = 0;

	int numberOfPlanets[5] = {0,0,0,0};
	int star[5] = {0,0,0,0};
	int tempPlanetSpecM[5] = {0,0,0,0,0};
	int tempPlanetSpecL[5] = {0,0,0,0,0};
	int tempPlanetSpecK[5] = {0,0,0,0,0};
	int tempPlanetSpecD[5] = {0,0,0,0,0};

	{
		ifstream SavedName;
		SavedName.open("SavedData/tempname.txt");

		SavedName >> SSname;

		SavedName.close();
	}
	LoadFromFile(numberOfPlanets, star, SSname);
	SetPlanetSpecs(numberOfPlanets, SSname, tempPlanetSpecM, tempPlanetSpecL, tempPlanetSpecK, tempPlanetSpecD, test);
	/*tempPlanetSpec[0] = 0;
	tempPlanetSpec[1] = 0;
	tempPlanetSpec[2] = 0;
	tempPlanetSpec[3] = 0;
	try
	{
		SetPlanetSpecs(numberOfPlanets, SSname, tempPlanetSpec);
	}
	catch(exception& e)
	{
		cout << endl <<"an error with var" << endl;
	}*/
}


void PlanetSpecification::LoadFromFile(int numberOfPlanets[], int star[], string SSname)
{
	fstream StarAndPlanet;

	StarAndPlanet.open(SSname, ios::app | ios::in);

	string temp;

	StarAndPlanet >> temp;
	cout << temp << endl;
	for(int i = 0; i < 4; i++)
	{
		StarAndPlanet >> star[i];
		cout << star[i] << endl;
	}	
	StarAndPlanet >> temp;
	for(int i = 0; i < 4; i++)
	{
		StarAndPlanet >> numberOfPlanets[i];
		cout << numberOfPlanets[i] << endl;
	}
	StarAndPlanet.close();

	
	
}


void PlanetSpecification::SetPlanetSpecs(int numberOfPlanets[], string SSname, int tempPlanetSpecM[], int tempPlanetSpecL[], int tempPlanetSpecK[], int tempPlanetSpecD[], int test)
{
	srand((unsigned)time(NULL));

//ClassM
	
	{
		SSnameM = "SavedData/PlanetClass/M/" + SSname;
		ofstream SaveM;

		SaveM.open(SSnameM, ios::app);
		for(int i = 0; i < numberOfPlanets[0];i++)
		{
			SaveM << "PlanetNumber" << i << endl;
			tempPlanetSpecM[i] = rand() % 2;
			SaveM << tempPlanetSpecM[i] << endl;
			tempPlanetSpecM[i] = rand() % 2;
			SaveM << tempPlanetSpecM[i] << endl;
			tempPlanetSpecM[i] = rand() % 2;
			SaveM << tempPlanetSpecM[i] << endl;
			tempPlanetSpecM[i] = rand() % 2;
			SaveM << tempPlanetSpecM[i] << endl;
		}

		SaveM.close();
	}
	

//ClassL
	{
		SSnameL = "SavedData/PlanetClass/L/" + SSname;
		ofstream SaveL;

		SaveL.open(SSnameL, ios::app);
		for(int i = 0; i < numberOfPlanets[1];i++)
		{
			SaveL << "PlanetNumber" << i << endl;
			tempPlanetSpecL[i] = rand() % 2;
			SaveL << tempPlanetSpecL[i] << endl;
			tempPlanetSpecL[i] = rand() % 2;
			SaveL << tempPlanetSpecL[i] << endl;
			tempPlanetSpecL[i] = rand() % 2;
			SaveL << tempPlanetSpecL[i] << endl;
			tempPlanetSpecL[i] = rand() % 2;
			SaveL << tempPlanetSpecL[i] << endl;
		}

		SaveL.close();
	}


//ClassD
	{
		SSnameD = "SavedData/PlanetClass/D/" + SSname;
		ofstream SaveD;

		SaveD.open(SSnameD, ios::app);
		for(int i = 0; i < numberOfPlanets[2];i++)              // OBS! ADD DEVIDER AFTER EACH TIME IT LOOPS!!!!!
		{
			SaveD << "PlanetNumber" << i << endl;
			tempPlanetSpecD[i] = rand() % 2;
			SaveD << tempPlanetSpecD[i] << endl;
			tempPlanetSpecD[i] = rand() % 2;
			SaveD << tempPlanetSpecD[i] << endl;
			tempPlanetSpecD[i] = rand() % 2;
			SaveD << tempPlanetSpecD[i] << endl;
			tempPlanetSpecD[i] = rand() % 2;
			SaveD << tempPlanetSpecD[i] << endl;
		}

		SaveD.close();
	}

//ClassK
	{
		SSnameK = "SavedData/PlanetClass/K/" + SSname;
		ofstream SaveK;

		SaveK.open(SSnameK, ios::app);
		for(int i = 0; i < numberOfPlanets[3];i++)
		{
			SaveK << "PlanetNumber" << i << endl;
			tempPlanetSpecK[i] = rand() % 2;
			SaveK << tempPlanetSpecK[i] << endl;
			tempPlanetSpecK[i] = rand() % 2;
			SaveK << tempPlanetSpecK[i] << endl;
			tempPlanetSpecK[i] = rand() % 2;
			SaveK << tempPlanetSpecK[i] << endl;
			tempPlanetSpecK[i] = rand() % 2;
			SaveK << tempPlanetSpecK[i] << endl;
		}

		SaveK.close();
	}


	

}

PlanetSpecification::~PlanetSpecification()
{
}
