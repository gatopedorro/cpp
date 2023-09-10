#include <iostream>


int main()
{
  using std::cin;
  using std::cout;
  int a, b, sum = 0;

  cout << "Input two integers to get the sum between all the numbers\n";
  cin >> a >> b;

  for(int i = a; i <= b; i++)
  {
    sum += i;
  }

  cout << "The sum of all integers between a: " << a << " and b: " << b << " is " << sum;

  return 0;
}