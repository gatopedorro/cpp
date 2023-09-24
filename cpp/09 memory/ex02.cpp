#include <iostream>

void strcount(std::string s);

int main()
{
  char next;
  std::string input;

  do
  {
    std::cout << "Enter a line of text: (enter empty line to exit)\n";
    std::getline(std::cin, input);
    strcount(input);
  }
  while(input != "");

  std::cout << "Bye!\n";
  return 0;
}

void strcount(std::string s)
{
  using std::cout;
  int size = s.size();
  static int total = 0;

  cout << "\"" << s << "\" contains " << size << " characters\n";
  total += size;
  cout << total << " characters total\n";
}
