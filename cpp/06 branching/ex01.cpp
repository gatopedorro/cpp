#include <iostream>
#include <cctype>
#include <vector>

using namespace std;

int main()
{
  cout << "Enter some text, I will transform lower case to upper and vice versa. (to end type @, I will skip digits)\n";

  char ch;
  cin.get(ch);

  vector<char> text;

  while(ch != '@')
  {
    if(isalpha(ch))
    {
      if(islower(ch))
      {
        ch = toupper(ch);
      }
      else
      {
        ch = tolower(ch);
      }
      text.push_back(ch);
    }
    else if(isdigit(ch))
    {
      cin.get(ch);
      continue;
    }
    else {
      text.push_back(ch);
    }
    cin.get(ch);
  }

  for (auto character : text)
  {
    cout << character;
  }

  cout << "\n";

  return 0;
}