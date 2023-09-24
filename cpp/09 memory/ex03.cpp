#include <iostream>

struct chaff
{
  char dross[20];
  int slag;
};

char buffer[300];

int main()
{

  chaff * c = new (buffer) chaff[2] { {"chaff 1", 4}, { "chaff 2", 5} };
  chaff * p = new chaff[2] { {"chaff 1 b", 4}, { "chaff 2 b", 5} };

  for(int i = 0; i < 2; i++)
  {
    std::cout << "dross: " << (c + i)->dross << " slag: " << (c + i)->slag << " address: " << &c[i] <<"\n";
    std::cout << "dross: " << (p + i)->dross << " slag: " << (p + i)->slag << " address: " << &p[i] <<"\n";
  }

  std::cout << "Bye!\n";

  return 0;
}