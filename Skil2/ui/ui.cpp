#include "ui/ui.h"
#include "domain/domain.h"

#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

UI::UI()
{

}

void UI::mainMenu()
{
    char selection;
    bool flag = true;

    cout << "########## THE COMPUTER SCIENTISTS DATABASE ##########" << endl;
    cout << endl;
    cout << "Please select 1-5 (You can always press Q to quit): " << endl;
    cout << endl;
    cout << "1: See list of scientists in the database." << endl;
    cout << "2: See list of computers in the database." << endl;
    cout << "3: See relationship between computers and scientists" << endl;
    cout << "4: Add new computer or scientists to database. " << endl;
    cout << "5: Search for scientists or computer." << endl;



    cout << endl;
    cout << "Selection: ";
    cin >> selection;

    while (flag)
    {
        switch (selection) {
        case '1':
            cleanScreen();
            cout << "##################### SCIENTISTS #####################" << endl << endl;
            flag = false;
            listScientists();
            break;
        case '2':
            cleanScreen();
            cout << "##################### COMPUTERS ######################" << endl << endl;
            flag = false;
            listComputers();
            break;
        case '3':
            cleanScreen();
            cout << "#### RELATIONSHIP BTWEEN COMPUTERS AND SCIENTISTS ####" << endl << endl;
            flag = false;
            listRelationship();
            break;
        case '4':
            cleanScreen();
            cout << "################## ADD TO DATABASE ###################" << endl << endl;
            flag = false;
            break;
        case '5':
            cleanScreen();
            cout << "####################### SEARCH #######################" << endl << endl;
            flag = false;
            break;

        case 'q':
        case 'Q': return exit (-1);
            break;
        default:
            cleanScreen();
            cout << "Error: Invalid choice, try again!" << endl << endl;
            mainMenu();
            break;
        }
    }
}

void UI::cleanScreen()
{
    system("CLS");
}

void UI::listScientists()
{
    char selection;
    bool flag = true;

    cout << "How should the list be sorted: " << endl << endl;
    cout << "1: By name (A-Z)" << endl;
    cout << "2: By name (Z-A)" << endl;
    cout << "3: By gender (M/F)" << endl;
    cout << "4: By gender (F/M)" << endl;
    cout << "5: By..." << endl;

    cout << endl << "You can press 'M' for MAIN or 'Q' to QUIT." << endl;

    cout << endl;
    cout << "Selection: ";
    cin >> selection;

    while (flag)
    {
        switch (selection) {
        case '1':
            cleanScreen();
            cout << "################## SCIENTISTS (A-Z) ##################" << endl << endl;
            flag = false;
            // Setja inn eitthvað sorting fall...
            break;
        case '2':
            cleanScreen();
            cout << "################## SCIENTISTS (Z-A) ##################" << endl << endl;
            flag = false;
            // Setja inn eitthvað sorting fall...
            break;
        case '3':
            cleanScreen();
            cout << "################## SCIENTISTS (M-F) ##################" << endl << endl;
            flag = false;
            // Setja inn eitthvað sorting fall...
            break;
        case '4':
            cleanScreen();
            cout << "################## SCIENTISTS (F-M) ##################" << endl << endl;
            flag = false;
            // Setja inn eitthvað sorting fall...
            break;
        case '5':
            cleanScreen();
            cout << "################## SCIENTISTS (...) ##################" << endl << endl;
            flag = false;
            // Setja inn eitthvað sorting fall...
            break;
        case 'm':
        case 'M':
            cleanScreen();
            mainMenu();
            break;
        case 'q':
        case 'Q': return exit (-1);
            break;
        default:
            cleanScreen();
            cout << "Error: Invalid choice, try again!" << endl << endl;
            listScientists();
            break;
        }
    }
}

void UI::listComputers()
{
    char selection;
    bool flag = true;

    cout << "How should the list be sorted: " << endl << endl;
    cout << "1: By name (A-Z)" << endl;
    cout << "2: By name (Z-A)" << endl;
    cout << "3: By build year" << endl;
    cout << "5: By..." << endl;

    cout << endl << "You can press 'M' for MAIN or 'Q' to QUIT." << endl;

    cout << endl;
    cout << "Selection: ";
    cin >> selection;

    while (flag)
    {
        switch (selection) {
        case '1':
            cleanScreen();
            cout << "################## COMPUTERS (A-Z) ###################" << endl << endl;

            flag = false;
            // Setja inn eitthvað sorting fall...
            break;
        case '2':
            cleanScreen();
            cout << "################## COMPUTERS (Z-A) ###################" << endl << endl;
            flag = false;
            // Setja inn eitthvað sorting fall...
            break;
        case '3':
            cleanScreen();
            cout << "################## COMPUTERS BY YEAR #################" << endl << endl;
            flag = false;
            // Setja inn eitthvað sorting fall...
            break;
        case '4':
            cleanScreen();
            cout << "################## COMPUTERS (...) ###################" << endl << endl;
            flag = false;
            // Setja inn eitthvað sorting fall...
            break;
        case 'm':
        case 'M':
            cleanScreen();
            mainMenu();
            break;
        case 'q':
        case 'Q': return exit (-1);
            break;
        default:
            cleanScreen();
            cout << "Error: Invalid choice, try again!" << endl << endl;
            listComputers();
            break;
        }
    }
}

void UI::listRelationship()
{
    char selection;

    cout << "How should the list be sorted: " << endl << endl;

    cout << "1: Select computer to see the scientist behinde the machine." << endl;
    cout << "2: Select scientist to see his machines." << endl;
    cout << "3: Display full list." << endl;
    cout << "4: Display list of ." << endl;
    cout << "5: Display full list." << endl;


    cout << endl << "You can press 'M' for MAIN or 'Q' to QUIT." << endl;

    cout << endl;
    cout << "Selection: ";
    cin >> selection;

    switch (selection)
    {
    case 'm':
    case 'M':
        cleanScreen();
        mainMenu();
        break;
    case 'q':
    case 'Q': return exit (-1);
        break;
    default:
        cleanScreen();
       // Domain::findRelationship(char selection);
        break;
    }
}

