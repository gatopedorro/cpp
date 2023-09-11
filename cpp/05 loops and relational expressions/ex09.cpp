#include <iostream>

using namespace std;

int main()
{

  string word;
  int total_words = 0;

  cout << "Enter the words to count, to stop type type the word done.\n";
  cin >> word;

  while(word != "done")
  {
    total_words++;
    cin >> word;
  }

  cout << "You entered a total of " << total_words;
  return 0;
}