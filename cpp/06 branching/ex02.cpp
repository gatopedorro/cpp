#include <iostream>
#include <cctype>
#include <vector>

using namespace std;

int main()
{
  const int max_donations = 10;
  vector<double> donations;
  double donation;
  double average = 0;
  int more_than_average = 0;


  cout << "Please enter the donations made:\n";

  for(int i = 0; i < max_donations; i++)
  {
    cout << "donation #" << i + 1 << ": ";
    if(!(cin >> donation))
    {
      cin.clear();
      break;
    }
    else
    {
      donations.push_back(donation);
    }
  }

  for(int i = 0; i < donations.size() - 1; i++)
  {
    average += donations[i];
  }

  average = average / 10;

  cout << "The average donation is: " << average << "\n";

  for(int i = 0; i < donations.size() - 1; i++)
  {
    if(donations[i] > average)
    {
      more_than_average++;
    }
  }

  cout << more_than_average << " donations where greater than the average!";

  return 0;
}