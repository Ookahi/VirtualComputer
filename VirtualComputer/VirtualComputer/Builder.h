#ifndef BUILDER_H
#define BUILDER_H

//
//  File:         Builder.h
//
//  Author:       Peter Maher
//
//  Description:  A class definition for Builder.
//
#include <iostream>
#include <string>

class Builder {
public:
    /**
     *  Constructor
     */
    Builder(const std::string& n);

    /**
     *  Destructor
     */
    ~Builder();

    /**
     *  Modifier function to set the name of the Builder
     */
    void setName(const std::string& n);

    /**
     *  Access function to get the name of the Builder
     */
    std::string getName() const;

    /**
     *  Display Builder information
     */
    void displayBuilder() const;

    /**
     *  Add a new Customer
     */
    void addNewCust();

    /**
     *  Display all existing customers
     */
    void displayCusts() const;

    /**
     *  Add an item (existing title)
     */
    void addItem();

    /**
     *  Add a new title
     */
    void addItemSpec();

    /**
     *  Display all items
     */
    void displayAllItems() const;

    /**
     *  Display a item specification
     */
    void displayItemSpec() const;

    /**
     *  Display items with a specific title
     */
    void displayItems() const;

    /**
     *  Display all videos
     */
    void displayVideos() const;

    /**
     *  Display all DVDs
     */
    void displayDVDs() const;


private:

    /**
     *  Name of Builder
     */
    std::string name;

};

/**
 *  Access function to get the name of the Builder
 */
inline
std::string Builder::getName() const
{
    return name;
}

#endif
