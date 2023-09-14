#include <iostream>

using namespace std;

struct donator
{
 string name;
 double contribution;
};

int main()
{
  int this_many;

  cout << "How many donators are there?\n";
  cin >> this_many;
  cin.get();
  bool grand_patrons = false, patrons = false;

  donator* d = new donator[this_many];

  for(int i = 0; i < this_many; i++)
  {
  cout << "Enter the data of the donator #" << i + 1 <<"\ndonator's name: ";
  getline(cin, d[i].name);
  cout << "donator's contribution: ";
  cin >> d[i].contribution;
  cin.get();
  }

  int j = 0;
  if(this_many > 0)
  {
    while(!grand_patrons && !patrons)
    {
      if(d[j].contribution >= 10000)
      {
        grand_patrons = true;
      } else {
        patrons = true;
      }
      j++;
    }
  }



  cout << "------------ Grand Patrons ------------" << "\n";
  if(grand_patrons)
  {
    for(int i = 0; i < this_many; i++)
    {
      if(d[i].contribution >= 10000)
        cout << d[i].name << "\n";
        grand_patrons = true;
    }
  } else { cout << "none\n"; }

  cout << "------------ Patrons ------------" << "\n";
  if(patrons)
  {
    for(int i = 0; i < this_many; i++)
    {
      if(d[i].contribution < 10000)
        cout << d[i].name << "\n";
    }
  } else { cout << "none\n"; }

  delete [] d;

  return 0;
}