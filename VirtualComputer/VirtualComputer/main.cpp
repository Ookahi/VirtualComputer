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

    Builder s;
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

    cout << "A) Select Parts\n\n"
         << "B) Compare Prices\n\n"
         << "C) Predit Performance\n\n"
         << "D) Check Part Compatibility\n\n"
         << "E) Check Game Compatibility\n\n"
         << "F) Save Computer\n\n"
         << "G) Login\n\n"
         << "H) Create Account\n\n"
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
        case 'A': s.selectParts();
                  break;
        case 'B': s.comparePrices();
                  break;
        case 'C': s.predictPeformance();
                  break;
        case 'D': s.checkPartCompatibility();
                  break;
        case 'E': s.checkGameCompatibility();
                  break;
        case 'F': s.saveComputerToProfile();
                  break;
        case 'G': s.login();
                  break;
        case 'H': s.createUser();
                  break;
        case 'Q': cout << "Quitting Application" << endl;
                  break;
        default:  cout << "Unknown option" << endl;
    }
    cout << "\n\n---Any character to continue";
    cin.get();
}
