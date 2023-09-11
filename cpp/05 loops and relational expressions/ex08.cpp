#include <iostream>
#include <cstring>

using namespace std;

int main()
{

  char word[15];
  int total_words = 0;

  cout << "Enter the words to count, to stop type type the word done.\n";
  cin >> word;

  while(strcmp(word, "done"))
  {
    total_words++;
    cin >> word;
  }

  cout << "You entered a total of " << total_words;
  return 0;
}