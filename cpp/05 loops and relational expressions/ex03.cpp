#include <iostream>

int main()
{
  using std::cout;
  using std::cin;

  cout << "Type in integer numbers, I'll sum them all (to exit type 0)\n";

  int sum = 0;
  int next_int;

  do
  {
    cin >> next_int;
    sum += next_int;
  } while(next_int != 0);

  cout <<"the total is " << sum;

  return 0;
}