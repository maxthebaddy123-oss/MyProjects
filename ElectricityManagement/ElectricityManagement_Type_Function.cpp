// This Program that i written using only functions is 100lines approxmately;
#include <iostream>

void getInfo(std::string &ConsumerName, std::string &ConnectionType, double &PrevMonthReading, double &CurrentMonthReading, int &ConsumerNo, int &op) {

    std::cout << "Enter Comsumer Name: ";
    std::cin >> ConsumerName;
    std::cout << "Enter ConsumerNo: ";
    std::cin >> ConsumerNo;

    std::cout << "Choose Connection Type: \n";
    std::cout << "1.Domestic\n";
    std::cout << "2.Commercial\n";
    std::cout << "Enter Option: ";
    std::cin >> op;
    switch(op) {
        case 1:
        ConnectionType = "Domestic";
        break;

        case 2:
        ConnectionType = "Commercial";
        break;

        default:
        std::cout << "Invalid Choice";
    }

    std::cout << "Enter Previous Month Reading: ";
    std::cin >> PrevMonthReading;
    std::cout << "Enter Current Month Reading: ";
    std::cin >> CurrentMonthReading;
}

double Check(double PrevMonthReading, double CurrentMonthReading) {
    if(PrevMonthReading > CurrentMonthReading) {
        return -1*(CurrentMonthReading - PrevMonthReading);
    }
    else {
        return CurrentMonthReading - PrevMonthReading;
         
    }
}

void CalculateBill(int op, std::string ConnectionType, double &billAmount, double unit) {
    if(op == 1) {
        if(unit <100) {
            billAmount = 1*unit;
            std::cout << billAmount;
        }
        else if(unit < 100 && unit <= 200 ) {
            billAmount = 2.50*unit;
            std::cout << billAmount;
        }
        else {
            billAmount = 3*unit;
            std::cout << billAmount;
        }
    }
    else if (op == 2){
        if(unit <= 100) {
            billAmount = 2*unit;
            std::cout << billAmount;
        }
        else if(unit >100 && unit <=300) {
            billAmount = 3.50*unit;
            std::cout << billAmount;
        }
        else {
            billAmount = 5*unit;
            std::cout << billAmount;
        }
    } 
}

void Display(std::string ConsumerName, std::string ConnectionType, double PrevMonthReading, double CurrentMonthReading, int ConsumerNo) {
    std::cout << "Name: " << ConsumerName << '\n';
    std::cout << "ConsumerNo: " << ConsumerNo << '\n';
    std::cout << "Connection Type: " << ConnectionType << '\n';
    std::cout << "Previous Month Readings: " << PrevMonthReading << '\n';
    std::cout << "Current Month Reading: " << CurrentMonthReading << '\n';
}

int main() {
    std::string ConsumerName , ConnectionType;
    double PrevMonthReading , CurrentMonthReading;
    int ConsumerNo;
    int op;
    double billAmount;
    double unit;

    std::cout << "*****Enter Details****\n";
    getInfo (ConsumerName, ConnectionType, PrevMonthReading, CurrentMonthReading, ConsumerNo, op);

    unit = Check(PrevMonthReading, CurrentMonthReading);

    std::cout << "*********Electricity Bill************\n";
    Display(ConsumerName, ConnectionType, PrevMonthReading, CurrentMonthReading, ConsumerNo);
    std::cout << "Your Bill: ";
    CalculateBill(op, ConnectionType, billAmount, unit);
    std::cout << " Rs/-";
}