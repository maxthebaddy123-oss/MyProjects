#include <iostream>
#include <cmath>
#include "Science.h"

    double Distance, Time, Resistance[1000], Mass1, Mass2, Radius, Angular_Distance, Dist_from_Earth, Small_Angle, Planet_Moon_Radius, Orbital_Time, Planet_Angle, Planet_Mass;
    double Con_Small_Angle, Con_Angular_Distance, Con_Planet_Angle;
    const long double PI = 3.141592653589793;
    const long double G = 0.0000000000667408;
    int n1;

    void Science::getInfo1() {
        std::cout << "## YOU HAVE CHOSEN SPEEED CALCULATOR ##\n";
        std::cout << "Enter Distance Covered By the Object: ";
        std::cin >> Distance;
        std::cout << "Enter Time Taken By The Object: ";
        std::cin >> Time;
        if(Time == 0) {
            while(Time == 0) {
            std::cout << "Invalid Option Re-Enter Time: ";
            std::cin >> Time;
            }
        }
    }

    void Science::CalculateSpeed() {
        double Speed = Distance / Time;
        std::cout << "The Speed is: " << Speed << "\n";
    }

    void Science::getInfo2() {
        std::cout << "## YOU HAVE CHOSEN EQUIVALENT RESISTANCE CALCULATOR ##\n";
        std::cout << "Enter Number Of Resistance: ";
        std::cin >> n1;
        std::cout << "Enter Resistances (Each Divided by Space) : ";

        for(int i=0; i<n1; i++) {
            std::cin >> Resistance[i];
    }
    }

    void Science::CalculateResistance() {
        int choice = 0;
        double Equivalent_Resistance = 0;
        std::cout << "\nPress 1 for Series Resistance:\n";
        std::cout << "Press 2 for parallel Resistance:\n";
        std::cin >> choice;

        switch(choice) {
            case 1:
            for(int i=0; i<n1; i++) {
                Equivalent_Resistance += Resistance[i]; 
            }  
            std::cout << "The Equivalent Sereis Resistance :  " << Equivalent_Resistance;
            break;

            case 2: //Exception by zero gives wrong result i don't know why So i Did'nt used it;
            for(int i=0; i<n1; i++) {
                Equivalent_Resistance += 1.0 / Resistance[i];
            }
            std::cout << "The Equivalent Parallel Resistance is: " << Equivalent_Resistance << '\n';

            default:
            if(choice<0) {
                std::cout << "Invalid Option Entered";
                break;
            }
        }
    }

    void Science::getInfo3() {
        std::cout << "## YOU HAVE CHOSEN GRAVITATIONAL FORCE CALCULATOR ##\n";
        std::cout << "Enter Mass of the First Object: ";
        std::cin >> Mass1;
        std::cout << "Enter Mass of the Second Object: ";
        std::cin >> Mass2;
        std::cout << "Enter The Distance Between These Two Objects(RADIUS): ";
        std::cin >> Radius;
        if(Radius == 0) {
            while(Radius == 0) {
                std::cout << "Entered Radius is 0 Enter The Correct Radius again: ";
                std::cin >> Radius;
            }
        }
    }

    void Science::CalculateGravity() {
        double Gravity = G * (Mass1 * Mass2) / (Radius * Radius);
        std::cout << "The Gravitational Force Between Two Objects is: " << Gravity << '\n';
    }

void Science::getInfo4() {
    std::cout << "## YOU HAVE CHOSEN PLANET RADIUS CALCULATOR ##\n";
    std::cout << "Enter Angular Distance: ";
    std::cin >> Angular_Distance;
    int n4;
    std::cout << "Do you know the Distance of the planet from earth\n";
    std::cout << "Press 1 to Calculate it\n";
    std::cout << "Press 2 to continue to the Radius calculation if you know already\n";
    std::cout << "Enter Option: ";
    std::cin >> n4;

    if(n4 == 1) {
        getInfo4_1();
    }
    else if(n4 == 2) {
        std::cout << "Enter Distance Between Planet and Earth: ";
        std::cin >> Dist_from_Earth;
    }
    else {
        while(n4 != 1 && n4 != 2) {
            std::cout << "Invalid option Choose Correctly: ";
            std::cin >> n4;
            getInfo4_1();
        }
    }
}

void Science::getInfo4_1() {
    double Base_Line;
    std::cout << "Enter Base Line Distance :";
    std::cin >> Base_Line;
    std::cout << "Enter Small Angle: ";
    std::cin >> Small_Angle;
    ConvertAngle();
    Dist_from_Earth = Base_Line / Con_Small_Angle;
    std::cout << "Distance of the Planet From Earth is: \n" << Dist_from_Earth;
}

void Science::ConvertAngle() {
     Con_Angular_Distance = Angular_Distance * (PI / (180.0*3600.0));
     Con_Small_Angle = Small_Angle * (PI / (180.0*3600.0));
}

void Science::CalculateRadius() {
    double Planet_Radius = (Con_Angular_Distance*Dist_from_Earth) / 2 ;
    std::cout << "The Radius Of the Planet is: " << Planet_Radius << '\n';
}

void Science::getInfo5() {
    std::cout << "## YOU HAVE CHOSEN PLANET MASS CALCULATOR ##\n";
    std::cout << "Enter Orbital Time: ";
    std::cin >> Orbital_Time;
    int n5 ;
    std::cout << "***Do you want to calculate the radius between planet and its moon***\n";
    std::cout << "Enter 1 to calculate it \n";
    std::cout << "Enter 2 if you know it \n";
    std::cin >> n5;
    if(n5 == 1) {
        getInfo5_1();
    }
    else if (n5 == 2) {
    std::cout << "Enter the radius between planet and Moon: ";
    std::cin >> Planet_Moon_Radius;
    }

    else {
        while(n5 != 1 && n5 != 2) {
            std::cout << "Invalid Option Choose Correctly: ";
            std::cin >> n5;
            getInfo5_1();
        }
    }
}

void Science::getInfo5_1() {
    double Distance_From_Earth;
    std::cout << "Enter Distance From Planet To Earth: ";
    std::cin >> Distance_From_Earth;
    ConvertPlanetAngle();
    Planet_Moon_Radius = Distance_From_Earth * Con_Planet_Angle;
    std::cout << "Distance of the planet Form Earth is : " << Planet_Moon_Radius << "\n";
}

void Science::ConvertPlanetAngle() {
    double Con_Planet_Angle = Planet_Angle * (PI / (180.0 / 3600.0));
}

void Science::CalculatePlanetMass() {
    Planet_Mass = (4* (PI*PI) * (Planet_Moon_Radius*Planet_Moon_Radius*Planet_Moon_Radius)) / (G * (Orbital_Time*Orbital_Time));
    std::cout << "The Mass of the Planet is : " << Planet_Mass;
}