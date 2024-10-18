// Nathan Puckett
// Program Status - Complete

/*
  Gratuity Calculator

  This program collects the tax rate, total bill amount,
  and desired tip percentage from a user
  and calculates an appropriate tip.
*/

#include <iostream>
#include <iomanip>
using namespace std;

// Create Tips class
class Tips
{
private:
  double taxRate;

public:
  // Constructor has a default tax rate if none is provided
  Tips(double customTaxRate = 0.085)
  {
    taxRate = customTaxRate;
  }

  // This function returns the tip calculated with the pre-tax bill
  double computeTip(double totalBill, double tipRate)
  {
    double preTax = totalBill / (1 + taxRate);
    return preTax * (tipRate / 100);
  }
};

int main()
{
  cout << "This program will compute a restaurant tip based on a total" << endl;
  cout << "bill amount and the % the patron wishes to tip the server." << endl;

  // User inputs tax rate
  double localTaxRate;
  cout << "\nTax % for this location: ";
  cin >> localTaxRate;

  // Validate that the tax rate is greater than or equal to zero
  while (localTaxRate < 0)
  {
    cout << "Tax % cannot be less than 0. Please re-enter tax %: ";
    cin >> localTaxRate;
  }

  // Create tips object based on Tips class
  Tips tips(localTaxRate / 100);

  // Initialize repeat flag
  char repeatFlag;

  do
  {
    double billAmount, desiredTip;

    cout << "\n************* Tip Helper ***********" << endl;

    // Collect user input
    cout << "\nEnter total bill amount: ";
    cin >> billAmount;
    cout << "Enter desired tip % ";
    cin >> desiredTip;

    cout << "\nThe tip should be $ ";
    cout << fixed << showpoint << setprecision(2) << tips.computeTip(billAmount, desiredTip);

    cout << "\nCompute another tip (y/n)? ";
    cin >> repeatFlag;

  } while (repeatFlag == 'y');

  return 0;
}