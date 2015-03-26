//
//  File:         Builder.cpp
//
//  Author:       Peter Maher
//
//  Description:  Non-inline member function definitions.
//
#include "Builder.h"
#include <fstream>

/**
 *  Constructor
 */
Builder::Builder(const std::string& n)
{
    using namespace std;

    setName(n);

    cout << "Builder constructor executed" << endl;
}

/**
 *  Destructor
 */
Builder::~Builder()
{
    using namespace std;

    cout << "Builder destructor executed" << endl;
}

/**
 *  Modifier function to set the name of the Builder
 */
void Builder::setName(const std::string& n)
{
    name = n;
}

/**
 *  Display Builder information
 */
void Builder::displayBuilder() const
{
    using namespace std;

    cout << "Builder's name: " << name << endl;
}

/**
 *  Add a new Customer
 */
void Builder::addNewCust()
{
   using namespace std;

   cout << "Adding a new customer" << endl;
}

/**
 *  Display all existing customers
 */
void Builder::displayCusts() const
{
   using namespace std;

   cout << "Displaying all existing customers" << endl;
}

/**
 *  Add an item (existing title)
 */
void Builder::addItem()
{
    using namespace std;

    cout << "Adding an item" << endl;
}

/**
 *  Add a new title
 */
void Builder::addItemSpec()
{
    using namespace std;

    cout << "Add a new title" << endl;
}

/**
 *  Display all items
 */
void Builder::displayAllItems() const
{
   using namespace std;

   cout << "Display all items" << endl;
}

/**
 *  Display a item specification
 */
void Builder::displayItemSpec() const
{
   using namespace std;

   cout << "Display an item specification" << endl;
}

/**
 *  Display items with a specific title
 */
void Builder::displayItems() const
{
    using namespace std;

    cout << "Display items with a specified title" << endl;
}

/**
 *  Display all videos
 */
void Builder::displayVideos() const
{
    using namespace std;

    cout << "Display all videos" << endl;
}

/**
 *  Display all DVDs
 */
void Builder::displayDVDs() const
{
   using namespace std;

   cout << "Display all DVDs" << endl;
}