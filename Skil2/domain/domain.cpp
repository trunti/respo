#include "domain/domain.h"
#include "data/data.h"
#include "ui/ui.h"
#include <iostream>

using namespace std;

Domain::Domain()
{

}
/*
void Domain::findRelationship(int computer_id)
{
    int id = computer_id;
    bool valid_ID ;


    cout << "Setja inn kóða sem athugar hvot ID sé til.";


    if(valid_ID)
    {

    }
    else
    {
        char selection;

        cout << "Not valid ID number!" << endl << endl;
        cout << "Do you want to try again? (Y/N): ";

        cout << "Selection: ";
        cin >> selection;

        switch (selection)
        {
        case 'Y':
        case 'y':
            UI::cleanScreen();
            cout << "#### RELATIONSHIP BTWEEN COMPUTERS AND SCIENTISTS ####" << endl << endl;
            UI::listRelationship();
            break;
        case 'N':
        case 'n':
        UI::cleanScreen();
        UI::mainMenu();
        break;
        default:
            UI::cleanScreen();
            cout << "Error: Invalid choice, try again!" << endl << endl;
            UI::listComputers();
            break;
        }

    }
}
*/


