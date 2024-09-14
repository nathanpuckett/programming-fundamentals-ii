// Nathan Puckett
// Program Status - Complete

// Property Tax
// This programs takes user input of actual property value and tax rate
// and then calculates and displays assessed value and annual property tax.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  // Define constant for actual to assessed property value conversion
  const double ASSESSED_PERCENTAGE = 0.6;

  // Define variables for actual value and tax rate
  double propertyValue;
  double taxRate;

  // Receive user input for value and tax rate variables
  cout << "Enter the actual property value: $";
  cin >> propertyValue;
  cout << "Enter the amount of tax per $100 of assessed value: $";
  cin >> taxRate;

  // Calculate assessed value and property tax
  double assessedValue = propertyValue * ASSESSED_PERCENTAGE;
  double propertyTax = assessedValue * (taxRate / 100);

  // Display formatted results
  cout << left << setw(15) << "Property Value:" << right << setw(2) << "$";
  cout << setw(10) << fixed << showpoint << setprecision(2) << propertyValue << endl;
  cout << left << setw(15) << "Assessed Value:" << right << setw(2) << "$";
  cout << setw(10) << fixed << showpoint << setprecision(2) << assessedValue << endl;
  cout << left << setw(15) << "Property Tax:" << right << setw(2) << "$";
  cout << setw(10) << fixed << showpoint << setprecision(2) << propertyTax << endl;

  return 0;
}