#include <iostream>

int main()
{
  float daphne = 100;
  float cleo = 100;
  int years = 0;

  std::cout << "compound interest vs simple interest\n";

  while(cleo <= daphne)
  {
    daphne += 10;
    cleo = cleo + (0.05 * cleo);
    years++;
    std::cout << "year: " << years << " cleo's money: " << cleo << " daphne's money: " << daphne << "\n";
  }

  std::cout << "it took " << years << " years for cleo's money to pass daphne's\n";
  std::cout << "cleo's money: " << cleo << " daphne's money: " << daphne << "\n";

  return 0;
}