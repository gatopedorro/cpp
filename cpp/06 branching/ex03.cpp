#include <iostream>

using namespace std;

int main()
{
  char selection;
  bool stay_on_loop = true;
  cout << "Please enter one of the following choices:\n";

  cout << "c) carnivore\t\tp) pianist\n";
  cout << "t) tree\t\t\tg) game\n\n";

  cin >> selection;

  while(stay_on_loop)
  {
    switch(selection)
    {
      case 'c': cout << "cats are carnivores just like the trex\n"; stay_on_loop = false; break;
      case 'p': cout << "a pianist plays the piano\n"; stay_on_loop = false; break;
      case 't': cout << "bears scratch their backs with trees\n"; stay_on_loop = false; break;
      case 'g': cout << "some silly text with the word game on it\n"; stay_on_loop = false; break;
      default: cout << "Please enter c, p, t or g: "; cin >> selection; cout << "\n";
    }
  }

  cout << "bye!";

  return 0;
}