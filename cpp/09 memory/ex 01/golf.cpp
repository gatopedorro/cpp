#include "golf.h"
#include <iostream>
#include <cstring>

void setgolf(golf & g, const char * name, int hc)
{
  std::strcpy(g.fullname, name);
  g.handicap = hc;
}

int setgolf(golf & g)
{
  int hc;
  char name[Len];
  std::cout << "name: ";
  std::cin.getline(name, Len);
  std::cout << "handicap: ";
  std::cin >> hc;
  std::cin.get();
  setgolf(g, name, hc);
  if(name[0] = '\0')
    return 0;
  return 1;
}

void handicap(golf & g, int hc)
{
  g.handicap = hc;
}

void showgolf(const golf & g)
{
  if(g.fullname[0] == '\0')
    std::cout  << "unnamed player, handicap " << g.handicap << "\n";
  else
    std::cout << "fullname: " << g.fullname << ", handicap:" << g.handicap << "\n";
}
