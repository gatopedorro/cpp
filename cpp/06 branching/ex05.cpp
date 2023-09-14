#include <iostream>
#include <cctype>

using namespace std;

int main()
{
  float first_tier;
  float second_tier;
  float third_tier;

  float to_be_taxed;

  float tax = 0;
  cout << "Tax calculator, enter the money to be taxed, to exit type a negative number or a nondigit character\n";

  while((cin >> to_be_taxed) && to_be_taxed > 0)
  {

    if(to_be_taxed <= 5000)
    {
      cout << "No need to pay taxes\nType another income to be taxed, or a nondigit or negative value to exit\n";
      continue;
    }

    cout << "The amount of tax for $" << to_be_taxed << " is...";

    third_tier = to_be_taxed - 35000;
    if(third_tier > 0)
    {
      cout << "\n$" << third_tier << " x 0.20 = $" << third_tier * 0.20f << " ";
      tax += third_tier * 0.20f;
      to_be_taxed = 35000;
    }

    second_tier = to_be_taxed - 15000;
    if(second_tier > 0)
    {
      cout << "\n$" << second_tier << " x 0.15 = $" << second_tier * 0.15f << " ";
      tax += second_tier * 0.15f;
      to_be_taxed = 15000;
    }

    first_tier = to_be_taxed - 5000;
    if(first_tier > 0)
    {
      cout << "\n$" << first_tier << " x 0.10 = $" << first_tier * 0.10f << " ";
      tax += first_tier * 0.10f;
    }

    cout << "\nTotal: $" << tax << "\nType another income to be taxed, or a nondigit or negative value to exit\n";

  }

  cout << "\nbye!";

  return 0;
}