#include <iostream>
#include <array>
#include <string>

const int seasons = 4;
//const std::array<std::string, seasons> snames = {"spring", "summer", "fall", "winter"};

const char snames[seasons][7] = {"spring", "summer", "fall", "winter"};

//void fill(std::array<double, seasons> *pa);
void fill(double pa[]);
//void show(std::array<double, seasons> da);
void show(double da[]);

int main()
{
  //std::array<double, seasons> expenses;
  double expenses[seasons];
  fill(expenses);
  show(expenses);
  return 0;
}

void fill(double pa[])
{
  using namespace std;
  for(int i=0; i < seasons; i++)
  {
    cout << "Enter " << snames[i] << " expenses: ";
    cin >> pa[i];
  }
}

void show(double da[])
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
    cout << ": $" << da[i] << "\n";
    total += da[i];
  }
  cout << "Total Expenses: $" << total << "\n";
}