// William Coughlin
// This program estimates the membership fees for a country club for the next 6 years

#include <iostream>
#include <iomanip>

int main()
{
    double fee = 2500;
    int year = 2020;

    for (int i = 0; i < 6; i++) {
        year++;
        fee *= 1.04;
        std::cout << std::setprecision(6) << "The membership fees for " << year << " are estimated to be $" << fee << std::endl;
    }
}

