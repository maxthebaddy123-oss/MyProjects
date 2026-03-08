#include <iostream>

void ArithmaticCalculator() {
    double num1,num2,ans;
    int op;

    std::cout << "######### MY CALCULATOR ##########\n";

    std::cout << "Enter Number 1: ";
    std::cin >> num1 ;

    std::cout << "Choose Operand:      (choose the corresponding number to the operator only)\n";
    std::cout << "1.+, ";
    std::cout << "2.-, ";
    std::cout << "3.*, ";
    std::cout << "4./, ";
    std::cout << "5.%, \n";
    std::cin >> op;

    std::cout << "Enter Number 2: ";
    std::cin >> num2;

    switch (op) {
        case 1:
        std::cout << "ans = " <<  num1 + num2;
        break;

        case 2:
        std::cout << "ans = " << num1 - num2;
        break;

        case 3:
        std::cout << "ans = " << num1 * num2;
        break;

        case 4:
        if(num2 == 0){
            std::cout << "Invalid Chech The Input Values";
        }
        else{
        std::cout << "ans = " << num1 / num2;
        }
        break;

        case 5:
        if (static_cast<int>(num2) == 0){
            std::cout << "Invalid Chech The Input Values";
        }
        else{
            std::cout << "ans = " << static_cast<int>(num1) % static_cast<int>(num2);
        }
        break;

        default:
        std::cout << "Invalid";
    }
}