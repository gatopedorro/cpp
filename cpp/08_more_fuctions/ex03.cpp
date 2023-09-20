#include <iostream>
#include <cctype>

using namespace std;

void upper_casing(string &);

int main()
{
  string st;
  cout << "Enter a string to convert to upper case. (to exit type q)\n";
  while(getline(cin, st) && st != "q")
  {
    upper_casing(st);
    cout << "the uppercase version is " << st << "\nNext string (q to quit): ";
  }

  return 0;
}

void upper_casing(string & s)
{
  int lenght = s.length();
  for(int i=0; i<lenght;i++)
  {
    s[i] = toupper(s[i]);
  }
}