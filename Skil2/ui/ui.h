#ifndef UI_H
#define UI_H

// UI klasinn sér um samskipti við notenda og sækir upplýsingar í Domain klasann.

class UI
{
public:
    UI();
    void mainMenu();            // Aðalvalmynd - Býður notenda uppá að velja aðgerðir
private:
    void cleanScreen();         // Hreinsar allt sem er á skjánum
    void listScientists();      // Valmynd - Býður uppá mismunandi valmöguleika til að sýna vísindamenn í gagnagrunni.
    void listComputers();       // Valmynd - Býður uppá mismunandi valmöguleika til að sýna tölvur í gagnagrunni.
    void listRelationship();    // Valmynd -  Býður upp á mismunandi valmöguleika til að skoða tengsl milli vísindamanna og tölva


};


#endif // UI_H
