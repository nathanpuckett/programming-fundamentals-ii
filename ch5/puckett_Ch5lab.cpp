// Nathan Puckett
// Program Status - Complete

/*
  Sales Bar Chart
  This program receives user input of a given day's sales from 3 stores
  and produces a bar graph displaying each store's sales using asterisks
  representing each $100 of sales.
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
  // Define array to store sales numbers
  float sales[3];

  // Loop through prompt to gather user input for each store's sales
  for (int i = 0; i < 3; i++)
  {
    cout << "Enter today's sales for Store " << i + 1 << ": ";
    cin >> sales[i];
    // Validate for proper input
    while (sales[i] < 0)
    {
      cout << "Please enter a positive number for Store " << i + 1 << ": ";
      cin >> sales[i];
    }
  }

  cout << endl;
  cout << setw(15) << "DAILY SALES" << endl;
  cout << setw(17) << "(each * = $100)" << endl;
  cout << endl;

  // Loop through each store and display graph for sales
  for (int i = 0; i < 3; i++)
  {
    cout << "Store " << i + 1 << ": ";
    // Populate graph with asterisks
    for (int j = 0; j < round(sales[i] / 100); j++)
    {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}