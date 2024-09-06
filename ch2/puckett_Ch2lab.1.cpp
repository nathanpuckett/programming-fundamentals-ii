// Nathan Puckett
// Program Status - Complete

// This program calculates the sale price for a given item
// based on the cost of the item and the desired profit,
// and displays the result on the screen.

#include <string>
#include <iostream>
using namespace std;

int main()
{
  // Define variables for item, cost, & desired profit
  string item = "flash drive";
  float cost = 8.0;
  float profit = 0.35;

  // Calculate sale price
  float salePrice = cost * (1 + profit);

  // Display result
  cout << "To have a ";
  cout << profit * 100;
  cout << "% profit, the ";
  cout << item;
  cout << " should sell for $";
  cout << salePrice;

  return 0;
}