#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream file;
  int chars_in_file = 0;
  file.open("text08");

  while(!file.eof())
  {
    chars_in_file++;
    file.get();
  }

  cout << "Total chars in file " << chars_in_file << "\n";

  file.close();

  return 0;
}