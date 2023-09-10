#include <iostream>

using namespace std;

int main()
{
  string name;
  string last_name;

  cout << "Type in your first name\n";
  getline(cin, name);

  cout << "Type in your last name\n";
  getline(cin, last_name);

  cout << "Here's the information in a single string: " << last_name << ", " << name;
  return 0;
}