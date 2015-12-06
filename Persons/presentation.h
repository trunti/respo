#ifndef PRESENTATION_H
#define PRESENTATION_H
#include "service.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

// UI klasinn sér um samskipti við notenda og sækir upplýsingar í Domain klasann.

class Presentation
{
public:
    Presentation();
    void mainMenu();            // Aðalvalmynd - Býður notenda uppá að velja aðgerðir
private:
    void cleanScreen();         // Hreinsar allt sem er á skjánum
    void listScientists();      // Valmynd - Býður uppá mismunandi valmöguleika til að sýna vísindamenn í gagnagrunniþ
    void listComputers();       // Valmynd - Býður uppá mismunandi valmöguleika til að sýna tölvur í gagnagrunni.
    void relationship();        // Sýnir tengsl á milli tölvu og vísindamanna.
};

#endif // PRESENTATION_H
