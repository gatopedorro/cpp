#include <iostream>
#include <array>
#include <string>

const int seasons = 4;
//const std::array<std::string, seasons> snames = {"spring", "summer", "fall", "winter"};
struct expenses
{
  double e[seasons];
};

const char snames[seasons][7] = {"spring", "summer", "fall", "winter"};

//void fill(std::array<double, seasons> *pa);
expenses fill(expenses);
//void show(std::array<double, seasons> da);
void show(expenses);

int main()
{
  //std::array<double, seasons> expenses;
  expenses ex = fill(ex);
  show(ex);
  return 0;
}

expenses fill(expenses ex)
{
  using namespace std;
  for(int i=0; i < seasons; i++)
  {
    cout << "Enter " << snames[i] << " expenses: ";
    cin >> ex.e[i];
  }
  return ex;
}

void show(expenses ex)
{
  using namespace std;
  double total = 0.0;
  cout << "\nEXPENSES\n";
  for(int i=0; i < seasons; i++)
  {
    int j = 0;
    while(snames[i][j] != '\0')
    {
      cout << snames[i][j];
      j++;
    }
    cout << ": $" << ex.e[i] << "\n";
    total += ex.e[i];
  }
  cout << "Total Expenses: $" << total << "\n";
}