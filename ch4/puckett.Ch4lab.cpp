// Nathan Puckett
// Program Status - Complete

// Speed of Sound
// This program takes user input of medium (air, water, or steel) & travel distance (in feet)
// and then calculates and displays the amount of time (in seconds) it will take
// for sound to travel that distance through the selected medium.

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
  // Define constants for speed of sound through various mediums
  const int SOS_IN_AIR = 1100;
  const int SOS_IN_WATER = 4900;
  const int SOS_IN_STEEL = 16400;

  // Initialize variables for medium and distance, to be defined by user input,
  // and time, to be calculated based on user input
  int medium;
  double distance;
  double time;
  string mediumString;

  // Receive user input for medium
  cout << "This program will tell you how long it takes a sound wave" << endl;
  cout << "to travel a specific distance through a particular medium." << endl;
  cout << "\nSelect a substance for the sound to travel through:" << endl;
  cout << right << setw(7) << "1." << " Air" << endl;
  cout << right << setw(7) << "2." << " Water" << endl;
  cout << right << setw(7) << "3." << " Steel" << endl;
  cin >> medium;

  // Validate user input for medium and
  // calculate and display time for sound wave to travel
  // over given distance in given medium
  // or display error message for invalid input.
  if (medium >= 1 && medium <= 3)
  {
    cout << "\nEnter the number of feet the sound wave will travel: ";
    cin >> distance;
    switch (medium)
    {
    case 1:
      time = distance / SOS_IN_AIR;
      mediumString = "air";
      break;
    case 2:
      time = distance / SOS_IN_WATER;
      mediumString = "water";
      break;
    case 3:
      time = distance / SOS_IN_STEEL;
      mediumString = "steel";
      break;
    }
    // Display formatted results
    cout << "The sound wave will travel " << distance << " feet through " << mediumString << " in ";
    cout << fixed << showpoint << setprecision(4) << time << " seconds.";
  }
  else
  {
    cout << "The valid choices are 1 through 3." << endl;
    cout << "Run the program again and select one of these." << endl;
  }

  return 0;
}