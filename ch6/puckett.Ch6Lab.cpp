// Nathan Puckett
// Program Status - Complete

/*
  Winning Division

  This program determines which of a company's four divisions
  had the greatest sales for a quarter using reusable functions
  and modular programming principles.
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Receive user input for sales figures for given division
double getSales(string divisionName)
{
  double sales = 0.0;
  do
  {
    if (sales < 0)
    {
      cout << "Sales figures cannot be negative. Please re-enter." << endl;
    }
    cout << "Enter the quarterly sales for the " << divisionName << " division: ";
    cin >> sales;
  } while (sales < 0);
  return sales;
};

// Calculate largest sales figure from four divisions
// and display result.
void findHighest(double ne, double se, double nw, double sw)
{
  string name;
  double amount;

  if (ne > se && ne > nw && ne > sw)
  {
    name = "Northeast";
    amount = ne;
  }
  else if (se > ne && se > nw && se > sw)
  {
    name = "Southeast";
    amount = se;
  }
  else if (nw > ne && nw > se && nw > sw)
  {
    name = "Northwest";
    amount = nw;
  }
  else
  {
    name = "Southwest";
    amount = sw;
  }

  cout << "The " << name << " division had the highest sales this quarter." << endl;
  cout << "Their sales were $";
  cout << fixed << showpoint << setprecision(2) << amount << endl;
};

int main()
{
  double northeastSales = getSales("Northeast");
  double southeastSales = getSales("Southeast");
  double northwestSales = getSales("Northwest");
  double southwestSales = getSales("Southwest");

  cout << endl;

  findHighest(northeastSales, southeastSales, northwestSales, southwestSales);

  return 0;
}