#include <iostream>
#include <cctype>

using namespace std;

int main()
{
  cout << "I will count how many of the words you type in begin with a vowel a consonant or neither\nenter a lone q to signal the end\n";
  int vowel = 0, consonant = 0, other = 0;
  string word;

  while(cin >> word && word != "q")
  {
    char c = word[0];
    if(isalpha(c))
    {
      if(c == 'a' || c == 'e' ||c == 'i' ||c == 'o' ||c == 'u') { vowel++; }
      else{ consonant++; }
    } else { other++; }
  }

  cout << vowel << " words started with vowel\n";
  cout << consonant << " words started with consonant\n";
  cout << other << " words started with other character\n";
  return 0;
}