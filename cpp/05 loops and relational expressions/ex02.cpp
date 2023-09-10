#include <iostream>
#include <array>
#include <string.h>

const int ar_size = 100;

int main()
{
  std::array<long double, 100> factorials;

  factorials[1] = factorials[0] = 1;

  for(int i = 2; i < ar_size; i++)
  {
    factorials[i] = i * factorials[i - 1];
  }

  for(int i = 0; i < ar_size; i++)
  {
    std::cout << i << "! = "<< std::to_string(factorials[i]) << "\n";
  }

  return 0;
}