#include <iostream>

using namespace std;

void silly_function(string & display, int & number_of_calls, int optional = 0)
{
  if(optional == 0)
  {
    cout << display << "\n";
  }
  else
  {
    for(int i=0; i<number_of_calls; i++)
    {
      cout << display << "\n";
    }
  }
  number_of_calls++;
}

int main()
{
  int number_of_calls = 0;
  int & n = number_of_calls;
  string display = "silly string";
  string & d = display;
  silly_function(d,n);
  silly_function(d,n);
  silly_function(d,n);
  silly_function(d,n);
  silly_function(d,n,1); //should print "silly string", 8 times at this point
  return 0;
}