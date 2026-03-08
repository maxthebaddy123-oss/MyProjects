#include <iostream>

void UnitConverter() {
    int From,To;
    double num,metre;

    std::cout << "########### UNIT CONVERTER ###########\n";

    std::cout << "Select Input Unit: \n";
    std::cout << "1.mm\n";
    std::cout << "2.cm\n";
    std::cout << "3.m\n";
    std::cout << "4.km\n";
    std::cout << "Choose: ";
    std::cin >> From;

    std::cout << "Select Output Unit: \n";
    std::cout << "1.mm\n";
    std::cout << "2.cm\n";
    std::cout << "3.m\n";
    std::cout << "4.km\n";
    std::cout << "Choose: ";
    std::cin >> To;

    std::cout << "Enter Number : ";
    std::cin >> num;

    switch (From) {

        case 1: {
        metre = num/1000;
        break;
    }

        case 2:{
        metre=num/100;
        break;
    }

        case 3: {
        metre=num;
        break;
    }

        case 4: {
        metre=num*1000;
        break;
    }

        default:
            std::cout << "Invaiid";
    }

    switch (To) {
        case 1:
        std::cout << "= " << metre*1000 << "mm";
        break;

        case 2:
        std::cout << "= " << metre*100 << "cm";
        break;

        case 3:
        std::cout << "= " << metre << "m";
        break;

        case 4:
        std::cout << "= " << metre/1000 << "km";
        break;

        default:
        std::cout << "Invalid:";
}

}