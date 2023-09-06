#include <iostream>
#include <array>

using namespace std;

int main()
{
  array<float, 3> dash_times;

  cout << "Enter the dash times (3 in total), for the 40 meters race (in seconds)\n";
  cout << "1: "; cin >> dash_times[0];
  cout << "2: "; cin >> dash_times[1];
  cout << "3: "; cin >> dash_times[2];

  float average = (dash_times[0] + dash_times[1] + dash_times[2]) / 3;

  cout << "the times are " << dash_times[0] << ", " << dash_times[1] << ", " << dash_times[2] << ", and their average is " << average;

  return 0;
}