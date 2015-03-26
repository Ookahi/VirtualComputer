//
//  File:         Builder.cpp
//
//  Author:       Katherine Bradley
//                Sanela Osmanovic
//
//  Description:  Non-inline member function definitions.
//
#include "Builder.h"
#include <fstream>

using namespace std;


Builder::Builder()
{
    using namespace std;

    cout << "Builder constructor executed" << endl;
}

Builder::~Builder()
{
    using namespace std;

    cout << "Builder destructor executed" << endl;
}

void Builder::selectParts()
{
    cout << "Select Parts"<< endl;
}
void Builder::comparePrices()
{
	cout << "Compare Prices" << endl;
}
void Builder::createUser()
{
	cout << "Create Users" << endl;
}
void Builder::login()
{
	cout << "Login" << endl;
}
void Builder::predictPeformance()
{
	cout << "Predict Performance" << endl;
}
void Builder::checkPartCompatibility()
{
	cout << "Check Part Compatibility" << endl;
}
void Builder::checkGameCompatibility()
{
	cout << "Check Game Compatbility" << endl;
}
void Builder::saveComputerToProfile()
{
	cout << "Save Computer to Profile" << endl;
}