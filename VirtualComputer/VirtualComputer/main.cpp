//
//  File:         main.cpp
//
//  Author:       Peter Maher
//
//  Description:  Driver application.
//
#include "Builder.h"
#include <iostream>

/**
 *  Display the main menu and read selection from user
 */
char mainMenu();

/**
 *  Select desired menu option
 */
void selectOption(Builder& s, char option);

int main()
{
    using namespace std;

    Builder s("Tower Records");
    char option;

    do {
 
        option = mainMenu();
        selectOption(s, option);

    } while (option != 'q' && option != 'Q');

    return 0;
}

/**
 *  Display the main menu and read selection from user
 */
char mainMenu()
{
    using namespace std;

    char option;

    system("cls");

    cout << "A) Add new customer\n\n"
         << "B) Display Customers\n\n"
         << "C) Add a new item (existing title)\n\n"
         << "D) Add a new video specification\n\n"
         << "E) Display all items\n\n"
         << "F) Display a video specification\n\n"
         << "G) Display items with specified title\n\n"
         << "H) Display all videos\n\n"
         << "I) Display all DVDs\n\n"
         << "Q) Quit\n\n" << endl;

    cout << "Enter option: ";
    cin >> option;
    cin.ignore();
    cout << "\n\n" << endl;
    return option;
}

/**
 *  Select desired menu option
 */
void selectOption(Builder& s, char option)
{
    using namespace std;

    switch (toupper(option)) {
        case 'A': s.addNewCust();
                  break;
        case 'B': s.displayCusts();
                  break;
        case 'C': s.addItem();
                  break;
        case 'D': s.addItemSpec();
                  break;
        case 'E': s.displayAllItems();
                  break;
        case 'F': s.displayItemSpec();
                  break;
        case 'G': s.displayItems();
                  break;
        case 'H': s.displayVideos();
                  break;
        case 'I': s.displayDVDs();
                  break;
        case 'Q': cout << "Quitting Application" << endl;
                  break;
        default:  cout << "Unknown option" << endl;
    }
    cout << "\n\n---Any character to continue";
    cin.get();
}
