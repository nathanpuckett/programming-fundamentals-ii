// Nathan Puckett
// Program Status - Complete

// This program calculates takes the height
// of a player of a given sport in inches,
// converts it to feet and inches,
// and displays the result on the screen.

#include <string>
#include <iostream>
using namespace std;

int main()
{
  // Define variables for sport and height in inches
  string sport = "basketball";
  int heightInInches = 75;

  // Calculate feet and inches from initial height
  int feet = heightInInches / 12;
  int inches = heightInInches % 12;

  // Display result
  cout << "A " << heightInInches << " inch tall ";
  cout << sport << " player is ";
  cout << feet << " feet ";
  cout << inches << " inches tall.";

  return 0;
}