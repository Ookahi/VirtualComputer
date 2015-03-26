//
//  File:         Builder.cpp
//
//  Author:       Peter Maher
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
}
void Builder::createUser()
{
}
void Builder::login()
{
}
void Builder::predictPeformance()
{
}
void Builder::checkPartCompatibility()
{
}
void Builder::checkGameCompatibility()
{
}
void Builder::saveComputerToProfile()
{
}