#include <iostream>
#include <fstream>

using namespace std;

struct donator
{
 string name;
 double contribution;
};

int main()
{
  ifstream file;
  file.open("text09");

  int this_many;

  cout << "Getting donators info from file\n";
  file >> this_many;
  file.get();
  bool grand_patrons = false, patrons = false;

  donator* d = new donator[this_many];

  for(int i = 0; i < this_many; i++)
  {
  getline(file, d[i].name);
  file >> d[i].contribution;
  cout << "d[" << i << "].name: " << d[i].name << "\n";
  cout << "d[" << i << "].contribution: " << d[i].contribution << "\n";
  file.get();
  }

  int j = 0;
  if(this_many > 0)
  {
    while(!grand_patrons || !patrons)
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

  file.close();
  delete [] d;

  return 0;
}