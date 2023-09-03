#include <iostream>

using namespace std;

int main()
{
  string first_name;
  string last_name;
  char grade;
  int age;

  cout << "What is your first name?\n";
  getline(cin, first_name);
  cout << "What is your last name?\n";
  getline(cin, last_name);
  cout << "What letter grade do you deserve?\n";
  cin >> grade;
  cout << "What is your age?\n";
  cin >> age;
  cout << "Name: " << last_name << ", " << first_name << "\n";

  if(grade == 'B') { grade = 'C'; }
  else if(grade == 'A') { grade = 'B'; }

  cout << "Grade: " << grade << "\n";
  cout << "Age: " << age << "\n";

  return 0;
}