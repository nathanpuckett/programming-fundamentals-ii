// Nathan Puckett
// Program Status - Complete
//
// Snow Conditions
//
// This program accepts user input of date and snowfall in inches,
// sorts data by date, and displays data in order.

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Create SnowfallData structure with date and inches variables
struct SnowfallData
{
  string date;
  double inches;
};

// This function returns a single structure with inputted data
SnowfallData inputSnowfallData()
{
  SnowfallData data;

  cout << "Enter date (MM/DD): ";
  cin >> data.date;

  cout << "Enter snowfall inches: ";
  cin >> data.inches;

  // Validations to make sure inches is not negative
  while (data.inches < 0)
  {
    cout << "Snowfall inches cannot be negative.\n";
    cout << "Please enter snowfall inches again: ";
    cin >> data.inches;
  }

  return data;
}

// Uses selection sort to sort snowfall data by date
void sortSnowfallData(SnowfallData data[], int entries)
{
  for (int i = 0; i < entries - 1; i++)
  {
    int minIndex = i;

    for (int j = i + 1; j < entries; j++)
    {
      if (data[j].date < data[minIndex].date)
      {
        minIndex = j;
      }
    }

    SnowfallData temp = data[i];
    data[i] = data[minIndex];
    data[minIndex] = temp;
  }
}

// Displays snowfall data with single decimal for snowfall inches
void displaySnowfallData(SnowfallData data[], int entries)
{
  cout << "\nSorted Snowfall Data at the Taos Ski Area" << endl;
  cout << "-----------------------------------------" << endl;
  for (int i = 0; i < entries; i++)
  {
    cout << data[i].date << ": " << fixed << showpoint << setprecision(1) << data[i].inches << " inches" << endl;
  }
}

int main()
{
  int entries;

  cout << "Enter the number of snowfall data entries: ";
  cin >> entries;

  // Validates that entries is not greater than 100
  while (entries > 100)
  {
    cout << "Number of data entries cannot exceed 100.\n";
    cout << "Please enter the number of data entries again: ";
    cin >> entries;
  }

  SnowfallData snowfallData[entries];

  // Loops through array and calls inputSnowfallData to retrieve user input
  for (int i = 0; i < entries; i++)
  {
    snowfallData[i] = inputSnowfallData();
  }

  sortSnowfallData(snowfallData, entries);

  displaySnowfallData(snowfallData, entries);

  return 0;
}