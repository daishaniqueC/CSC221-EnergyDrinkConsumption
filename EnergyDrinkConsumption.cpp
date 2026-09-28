// This program calculates energy drink preferences from survey data.

#include <iostream>
using namespace std;

int main()
{
    const int totalSurveyed = 16500;
    const double energyDrinkPercent = 0.15;
    const double citrusPercent = 0.58;

    double energyDrinkCustomers = totalSurveyed * energyDrinkPercent;
    double citrusCustomers = energyDrinkCustomers * citrusPercent;

    int citrusCustomersWhole = static_cast<int>(citrusCustomers);

    cout << "Customers who purchase energy drinks: " << energyDrinkCustomers << endl;
    cout << "Customers who prefer citrus energy drinks: " << citrusCustomersWhole << endl;

    return 0;
}