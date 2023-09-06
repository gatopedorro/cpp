#include <iostream>

using namespace std;

int main()
{
  const int array_size = 21;
  char name[array_size];
  char last_name[array_size];

  cout << "Type in your first name (20 characters max)\n";
  cin.getline(name, array_size);

  cout << "Type in your last name (20 characters max)\n";
  cin.getline(last_name, array_size);

  cout << "Here's the information in a single string: " << last_name << ", " << name;

  return 0;
}