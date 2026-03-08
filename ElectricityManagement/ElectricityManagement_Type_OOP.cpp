#include <iostream>

class ElectricityBill {
    std::string ConsumerName;
    int ConsumerNo;
    std::string ConnectionType;
    int PrevMonthReading;
    int CurrentMonthReading;
    double BillAmount;

    public:

    void getInfo() {
        std::cout << "Enter Consumer Name: ";
        std::cin >> ConsumerName;
        std::cout << "Enter Consumer Number: ";
        std::cin >> ConsumerNo;

        int op;
        std::cout << "Choose Connection Type: \n";
        std::cout << "Press 1 if it is **Domestic**\n";
        std::cout << "Press 2 if it is **Commercial**\n";
        std::cin >> op;
        if(op == 1) {
            ConnectionType = "Domestic";
        }
        else if(op == 2) {
            ConnectionType = "Commercial";
        }
        else {
            std::cout << "Invalid Option";
        }
        std::cout << "Enter Previous Month Reading: \n";
        std::cin >> PrevMonthReading;
        std::cout << "Enter Current Month Reading: \n";
        std::cin >> CurrentMonthReading;
    }

    void CalculateBill () {
        int unit;
        if(PrevMonthReading > CurrentMonthReading) {
            unit = -1*(CurrentMonthReading - PrevMonthReading);
        }
        else if(PrevMonthReading == CurrentMonthReading) {
            unit = CurrentMonthReading;
        }
        else {
            unit = CurrentMonthReading - PrevMonthReading;
        }
        if (ConnectionType == "Domestic") {
            if (unit <= 100) {
                BillAmount = 1*unit;
            }
            else if (unit > 100 && unit <= 200) {
                BillAmount = 2.50*unit;
            }
            else if (unit > 200 && unit <= 300) {
                BillAmount = 3*unit;
            }
            else {
                BillAmount = 5*unit;
            }
        }
        else {
            if (unit <= 100) {
                BillAmount = 2*unit;
            }
            else if (unit > 100 && unit <= 200) {
                BillAmount = 3.50*unit;
            }
            else if (unit >200 && unit <= 300) {
                BillAmount = 4*unit;
            }
            else {
                BillAmount = 5*unit;
            }
        }
    }

    void Display() {
    std::cout << "\n\n############### THIS MONTH BILL #############\n";
    std::cout << "Name: " << ConsumerName << '\n';
    std::cout << "ConsumerNo: " << ConsumerNo << '\n';
    std::cout << "Connection Type: " << ConnectionType << '\n';
    std::cout << "Previous Month Readings: " << PrevMonthReading << '\n';
    std::cout << "Current Month Reading: " << CurrentMonthReading << '\n';
    std::cout << "Your Bill Is: " << BillAmount;
    }
};

int main() {
    int n;
    std::cout << "Enter Number of Consumers to Enter Data: ";
    std::cin >> n;
    ElectricityBill e1[n];

    for(int i=0; i<n; i++) {
        std::cout << "\n\nEnter Details For Consumer: " << i+1 << '\n';
    e1[i].getInfo();
    e1[i].CalculateBill();
    e1[i].Display();
    }
}