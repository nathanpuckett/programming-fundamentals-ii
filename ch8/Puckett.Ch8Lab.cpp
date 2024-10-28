/*
  Nathan Puckett
  Program Status - Complete
*/

/*
  Payroll App

  This program reads payroll data for multiple employees from an
  external file and displays gross pay for each employee in a table.
*/

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

// Create PayRoll class with setter methods and function to calculate gross pay
class PayRoll
{
private:
  double payRate, hoursWorked;

public:
  void setPayRate(double rate)
  {
    payRate = rate;
  }
  void setHoursWorked(double hours)
  {
    hoursWorked = hours;
  }
  double calculateGrossPay()
  {
    return payRate * hoursWorked;
  }
};

int main()
{
  // Create array of payroll objects
  PayRoll companyPayroll[7];

  // Open external data file
  ifstream payrollData;
  payrollData.open("payroll.dat");

  // Show error if unable to open external file
  if (!payrollData)
  {
    cout << "Error opening payroll data file" << endl;
  }
  else
  {
    double rate, hours;

    // Read data into object array
    for (int i = 0; i < 7; i++)
    {
      payrollData >> rate >> hours;
      companyPayroll[i].setPayRate(rate);
      companyPayroll[i].setHoursWorked(hours);
    }
    payrollData.close();
  }

  cout << "Employee  Gross Pay" << endl;
  cout << "========  =========" << endl;

  // Display results
  for (int i = 0; i < 7; i++)
  {
    cout << right << setw(4) << i + 1 << ":";
    cout << right << setw(7) << "$ ";
    cout << fixed << showpoint << setprecision(2) << companyPayroll[i].calculateGrossPay() << endl;
  }

  return 0;
}