#include <iostream>

using namespace std;

struct bop
{
  string full_name;
  string title;
  string bop_name;
  int preference; //0 = full_name, 1 = title, 2 = bop_name
};

int main()
{

  const int qty_of_members = 3;

  bop members[qty_of_members] = {
    { "member name 1", "intern", "bop name 1", 1 },
    { "member name 2", "developer", "bop name 2", 2 },
    { "member name 3", "hr", "bop name 3", 0 },
  };

  char selection;
  bool stay_on_loop = true;

  cout << "a. display by name\tb.display by title\n";
  cout << "c. display by bopname\td.display by preference\n";
  cout << "q. quit\n";

  cin.get(selection);
  cin.get();

  if(selection == 'q')
    stay_on_loop = false;

  while(stay_on_loop)
  {
    switch(selection)
    {
      case 'a':
        for(int i=0; i < qty_of_members; i++)
        {
          cout << members[i].full_name << "\n";
        }
      break;
      case 'b':
        for(int i=0; i < qty_of_members; i++)
        {
          cout << members[i].title << "\n";
        }
      break;
      case 'c':
        for(int i=0; i < qty_of_members; i++)
        {
          cout << members[i].bop_name << "\n";
        }
      break;
      case 'd':
        for(int i=0; i < qty_of_members; i++)
        {
          switch (members[i].preference)
          {
            case 0: cout << members[i].full_name << "\n"; break;
            case 1: cout << members[i].title << "\n"; break;
            case 2: cout << members[i].bop_name << "\n"; break;
          }
        }
      break;
      case 'q': stay_on_loop = false; break;
      default: cout << "Please enter a, b, c, d or q: "; cin.get(selection).get(); continue;
    }
    cin.get(selection).get();
  }

  cout << "bye!\n";


  return 0;
}