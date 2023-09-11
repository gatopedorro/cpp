#include <iostream>

using namespace std;

int main()
{
  int rows;
  cout << "How many rows do you want to see?\n";
  cin >> rows;

  int total_dots = rows;
  int total_asterisks = 1;

  for(int i = 1; i <= rows; i++)
  {
    for(int dots = total_dots; dots > 1; dots--)
      cout << ".";
    for(int asterisks = 1; asterisks <= total_asterisks; asterisks++)
      cout << "*";
    cout << "\n";
    total_dots--;
    total_asterisks++;
  }

  return 0;
}