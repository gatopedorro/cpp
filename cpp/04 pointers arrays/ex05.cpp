#include <iostream>

using namespace std;

struct candy_bar {
  string brand;
  float weight;
  int calories;
};

int main()
{
  candy_bar snack = {"Mocha Munch", 2.3, 350};

  cout << "Are you going to eat that " << snack.brand <<
    "? You can see it weights " << snack.weight << ", but I think in the end is those " << snack.calories
    << " that count... better give it to me ;)";
}
