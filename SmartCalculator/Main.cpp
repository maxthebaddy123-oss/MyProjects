#include <iostream>
#include "fun.h"
#include "Science.h"

int main() {
    int choose = 0;
    int choose2 = 0;
    while(true) {
    std::cout << "\n^^^^^^^^^^^ SMART CALCULATOR ^^^^^^^^^^^^^\n";
    std::cout << "1.Arithmatic Calculator\n";
    std::cout << "2.Unit Converter\n";
    std::cout << "3.Scientific Calculator\n";

    std::cout << "6.Exit\n";
    std::cout << "Choose Option: ";
    std::cin >> choose;

    switch(choose) {

        case 1:
        ArithmaticCalculator();
        break;

        case 2:
        UnitConverter();
        break;

        //Scientific Calculator :
        case 3:{
        int n = 0;
        Science s1;

    while (n!=5) {
    std::cout << "########## SCIENTIFIC CALCULATOR ##########";
    std::cout << "\n\nEnter Option: \n";
    std::cout << "1.SpeedCalculator\n";
    std::cout << "2.Equivalent Resistance\n";
    std::cout << "3.Gravitaional Force\n";
    std::cout << "4.Planet Radius\n";
    std::cout << "5.Planet Mass\n";
    std::cout << "10.Enter 10 to Exit\n";
    std::cout << "Calculator Chosen: ";

    std::cin >> n;
    switch(n) {
        case 1:
        s1.getInfo1();
        s1.CalculateSpeed();
        break;

        case 2:
        s1.getInfo2();
        s1.CalculateResistance();
        break;

        case 3:
        s1.getInfo3();
        s1.CalculateGravity();
        break;

        case 4:
        s1.getInfo4();
        s1.ConvertAngle();
        s1.CalculateRadius();
        break;

        case 5:
        s1.getInfo5();
        s1.ConvertPlanetAngle();
        s1.CalculatePlanetMass();
        break;


        default:
        if(n <= 0 && n > 10) {
            std::cout << "Invalid Option Entered Enter The Correct Option you Bastard";
        }
        else {
            std::cout << "Exiting Scientific Calculator\n";
        }
        break;
    }
    }

    }
    std::cout << "Press 1 to Enter Main Menu: \n";
    std::cout << "Press 2 to Exit Calculator: \n";
    std::cout << "Enter Option:";
    std::cin >> choose2;
    if(choose2 == 1) {
        std::cout << "Entering Main Menu\n";
    }
    else if(choose2 == 2) {
    case 6:
    std::cout << "Exiting Calculator \n";
    return 0;
}
    else {
        while(choose2 == 1 || choose2 == 2) {
        std::cout << "Enter Valid Option";
        }
    }
    }
}
}