#include <iostream>

void getInfo(int &num1, int &num2) {

    std::cout << "Enter Number 1: ";
    std::cin >> num1;

    std::cout << "Enter Number 2: ";
    std::cin >> num2;
}

int Add(int num1, int num2) {
    int Sum = num1+num2;;
    return Sum;
}

int Sub(int num1, int num2) {
    int Sub = num1-num2;
    return Sub;
}

int Prod(int num1, int num2) {
    int Prod = num1*num2;
    return Prod;
}

float Div(int num1, int num2) {
    float Div = (float)num1/num2;
    return Div;
}

int main() {
    int num1, num2;
    getInfo(num1, num2);

    int op;
    std::cout << "1.Addition\n";
    std::cout << "2.Subtraction\n";
    std::cout << "3.Multiplication\n";
    std::cout << "4.Division\n";
    std::cin >> op;

    switch(op) {
        case 1:
        std::cout << "The Sum Is: " << Add(num1, num2);
        break;

        case 2:
        std::cout << "The Difference Is: " << Sub(num1, num2);
        break;

        case 3:
        std::cout << "The Product is: " << Prod(num1, num2);
        break;

        case 4:
        if(num2 != 0) {
            std::cout << "The Division is: " << Div(num1, num2);
        }
        else {
            std::cout << "Invalid";
        }
        break;
    }
}