#include "SolarSystem.h"


SolarSystem::SolarSystem()
{
	string SSname;
	string no;

	cout << "Create new or read old (n/o): ";
	cin >> no;

	if(no == "n")
	{
		{
			cout << "Solar systems name: ";

			cin >> SSname;

			SSname = "SavedData/" + SSname + ".txt";

			ofstream SaveName;

			SaveName.open("SavedData/tempname.txt");

			SaveName << SSname;

			SaveName.close();

		}
	int star[4] = {0,0,0,0};
	int numberOfPlanets[4] = {0,0,0,0};
	int absolute = 0;

	Star(star, absolute, SSname);

	PlanetNumbersTypes(star, SSname, absolute, numberOfPlanets);

	}
	else if(no == "o")
	{
		string rfName;
		cout << "Enter the name of the solar system: ";
		cin >> rfName;

		rfName = "SavedData/" + rfName + ".txt";

		ifstream Input;

		Input.open(rfName, ios::app);
		//create a read function or do it here??
	}
	else
	{
		cout << "You have to input one of the options: \"n\" or \"o\"" << endl;
		system("pause");
		
	}
	
}

void SolarSystem::Star(int star[], int absolute, string SSname)
{
	srand((unsigned)time(NULL));
	cout << "Select star type: \n1.Solo star\n2.Binary star\n3.Eclipsing star\n4.Giant star\n5.Random\n>";
	cin >> absolute;

	switch(absolute)
	{
	default:
		{
			star[starType(rand()%4)]++;
			
		}break;
	case 1:
		{
			star[Solo]++;
		}break;
	case 2:
		{
			star[Binary]++;
		}break;
	case 3:
		{
			star[Eclipsing]++;
		}break;
	case 4:
		{
			star[Giant]++;
		}break;

	}

	cout << endl << endl << "Result: " << endl;

	for(int i = 0; i < 4; i++)
	{
		cout << star[i] << endl;
	}

	{

		ofstream Output;
		
		Output.open(SSname, ios::app);
		if(Output.is_open())
		{
			Output << "TypeOfStar(Solo,Binary,Eclipsing,Giant)" << endl;

			for(int i = 0; i < 4; i++)
			{
				Output << star[i] << endl;
			}
		}
		else
		{
			cout << "Can't open the file!" << endl;
		}
		Output.close();
	}

}

void SolarSystem::PlanetNumbersTypes(int star[], string SSname, int absolute, int numberOfPlanets[])
{
	//set the default amount of class m planets depending on star type

	if(star[Solo] == 1)
	{
		numberOfPlanets[ClassM] = 0;
	}
	else if(star[Binary] == 1)
	{
		numberOfPlanets[ClassM]+= 1;
	}
	else if(star[Eclipsing] == 1)
	{
		numberOfPlanets[ClassM]+=2;
	}
	else if(star[Giant] == 1)
	{
		numberOfPlanets[ClassM]+=2;
	}
	else
	{
		cout << endl << "Error!"<< endl;
	}
	
	//----------------------------------------------------------

	//adds a random amount of planets if star type is eclipsing or giant
	if(star[Eclipsing] == 1 || star[Giant] == 1 )
	{

		srand((unsigned)time(NULL));

		numberOfPlanets[ClassM] += rand() % 16;
	}

	//------------------------------------------------------------------

	//Set number of class d planets

	numberOfPlanets[ClassD] += rand() % 27;

	//----------------------------

	//Set number of class k planets

	numberOfPlanets[ClassK] += rand() % 7;

	//----------------------------

	//Set number of class l planets

	numberOfPlanets[ClassL] += rand() % 32;

	//----------------------------

	cout << endl << endl << "Result: " << endl;

	for(int i = 0; i < 4; i++)
	{
		cout << numberOfPlanets[i] << endl;
	}

	{

		ofstream Output;
		
		Output.open(SSname, ios::app);
		if(Output.is_open())
		{
			Output << "NumberOfTheDifferentPlanetTypes(classM,classL,classD,classK)" << endl;

			for(int i = 0; i < 4; i++)
			{
				Output << numberOfPlanets[i] << endl;
			}
		}
		else
		{
			cout << "Can't open the file!" << endl;
		}
		Output.close();
	}

}

SolarSystem::~SolarSystem()
{
}
