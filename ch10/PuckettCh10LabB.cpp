/*
  Nathan Puckett
  Program Status - Complete

  Dynamic Memory Allocation
  Movie Data
*/

// Including algorithm library for sorting and iomanip library for displaying average
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

// Steps through array and collects number of movies watched, with input validation
void getMovieData(int *movieData, int n)
{
  for (int i = 0; i < n; i++)
  {
    int numOfMovies;
    do
    {
      cout << "How many movies has student " << i + 1 << " seen? ";
      cin >> numOfMovies;
      if (numOfMovies < 0)
      {
        cout << "Number of movies cannot be less than zero...please try again.\n";
      }
    } while (numOfMovies < 0);
    *(movieData + i) = numOfMovies;
  };
};

// Sorts movieData array using algorithm library
void sortMovieData(int *movieData, int n)
{
  sort(movieData, movieData + n);
}

// Displays sorted data
void displayMovieData(int *movieData, int n)
{
  cout << "\nNumber of Movies Watched" << endl;
  cout << "------------------------" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << *(movieData + i) << endl;
  }
  cout << "---------" << endl;
}

// Calculates average of values in movieData array and returns double value
double getAverage(int *movieData, int n)
{
  double sum = 0.0;
  for (int i = 0; i < n; i++)
  {
    sum += *(movieData + i);
  }
  return sum / n;
}

int main()
{
  int numOfStudents;

  // Collects number of students surveyed, with input validation
  do
  {
    cout << "How many students were surveyed? ";
    cin >> numOfStudents;
    if (numOfStudents < 1)
    {
      cout << "At least 1 student must be surveyed...please try again.\n";
    };
  } while (numOfStudents < 1);

  // Declares array using dynamic memory allocation
  int *movieData = new int[numOfStudents];

  // Calls all functions in order and displays average result
  getMovieData(movieData, numOfStudents);
  sortMovieData(movieData, numOfStudents);
  displayMovieData(movieData, numOfStudents);
  cout << "Average  " << fixed << showpoint << setprecision(1) << getAverage(movieData, numOfStudents) << endl;

  // Deallocates memory for array
  delete[] movieData;

  return 0;
}