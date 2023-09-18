#include <iostream>

long double factorial(int);

using namespace std;

int main()
{
  int f;
  cout << "Enter a number to get its factorial ";
  cin >> f;
  cout << f << "! = " << factorial(f);
  return 0;
}

long double factorial(int n)
{
  long double f = 1;

  if(n > 2)
  {
    f = n * factorial(n - 1);
  }
  else if(n == 2)
  {
    f = 2;
  }

  return f;
}