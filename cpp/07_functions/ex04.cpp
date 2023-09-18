#include <iostream>

long double probability(unsigned numbers, unsigned picks);

int main()
{
  using namespace std;

  double total, choices, mega_field;
  cout << "Enter the total number of choices on the game card and\n";
  cout << "the number of picks allowed, also how many numbers are there to pick the mega number:\n";

  while((cin >> total >> choices >> mega_field) && choices <= total)
  {
    cout << "You have one chance in ";
    cout << probability(total, choices) * 1/mega_field;
    cout << " of winning.\n";
    cout << "Next two numbers (q to quit): ";
  }

  cout << "bye\n";
  return 0;
}

long double probability(unsigned numbers, unsigned picks)
{
  long double result = 1.0;
  long double n;
  unsigned p;

  for(n = numbers, p = picks; p > 0; n--, p--)
    result = result * n / p;
  return result;
}