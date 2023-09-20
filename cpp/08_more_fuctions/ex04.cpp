#include <iostream>
using namespace std;
#include <cstring>

struct stringy
{
  char * str;
  int ct;
};

void set(stringy &, char []);
void show(stringy & s, int op = 1)
{
  for(int i = 1; i<=op; i++)
  {
    cout << "str: " << s.str << "\n" << "ct: " << s.ct << "\n";
  }
};

void show(const char * c, int op = 1)
{
  for(int i = 1; i<=op; i++)
  {
    cout << c << "\n";
  }
};

int main()
{
  stringy beany;
  char testing[] = "Reality isnt't what it used to be.\n";
  set(beany, testing);
  show(beany);
  show(beany, 2);
  testing[0] = 'D';
  testing[1] = 'u';
  show(testing);
  show(testing, 3);
  show("Done!");

  return 0;
}

void set(stringy & s, char k[])
{
  s.ct = strlen(k);
  s.str = k;
};

