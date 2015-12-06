#include "presentation.h"

//#include "ui/ui.h"
//#include "domain/domain.h"

#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

Presentation::Presentation()
{

}

void Presentation::mainMenu()
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
            relationship();
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

void Presentation::cleanScreen()
{
    system("CLS");
}

void Presentation::listScientists()
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

void Presentation::listComputers()
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

void Presentation::relationship()
{
    char selection;
    cout << "Enter computer's ID to see the scientist behinde the machine: ";

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
        //findRelationship(selection);
        break;
    }
}
/*
void findRelationship(int computer_id)
{
    int id = computer_id;

    // Setja inn kóða sem athugar hvot id sé til, ef svo er birtir það venslin.
    else
    {
        char selection;

        cout << "Not valid ID number!" << endl;
        cout << endl << "Do you want to try again? (Y/N): ";

        cout << "Selection: ";
        cin >> selection;

        switch (selection)
        {
        case 'Y':
        case 'y':
            cleanScreen();
            cout << "#### RELATIONSHIP BTWEEN COMPUTERS AND SCIENTISTS ####" << endl << endl;
            relationship();
            break;
        case 'N':
        case 'n':
        cleanScreen();
        mainMenu();
        break;
        default:
            cleanScreen();
            cout << "Error: Invalid choice, try again!" << endl << endl;
            listComputers();
            break;
        }

    }
}
*/
