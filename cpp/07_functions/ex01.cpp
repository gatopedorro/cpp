#include <iostream>

using namespace std;

float harmonic_mean(int, int);

int main()
{

  cout << "Enter pairs of numbers, I will tell you their harmonic mean.\n";
  cout << "To exit type a 0.\n";

  int x, y;

  while(cin >> x >> y)
  {
    if(x == 0 || y == 0) break;
    cout << harmonic_mean(x,y) << "\n";
  }

  cout << "bye!";
  return 0;
}

float harmonic_mean(int x, int y)
{
  return (2 * x * y) / (x + y);
}