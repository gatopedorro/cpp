#include <iostream>

using namespace std;

struct candy_bar
{
  string brand_name;
  double weight;
  int calories;
};

void candy_bar_init(candy_bar &, string, double, int);
void display_candy_data(const candy_bar &);


int main()
{
  cout << "Enter candy bars data\n";

  candy_bar c;
  string brand_name;
  double weight;
  int calories;

  cout << "brand name: ";
  getline(cin, brand_name);
  cout << "weight: ";
  cin >> weight;
  cin.get();
  cout << "calories: ";
  cin >> calories;
  cin.get();

  candy_bar_init(c, brand_name, weight, calories);
  display_candy_data(c);

  return 0;
}


void candy_bar_init(candy_bar & ca, string brand = "Millennium Munch", double weight = 2.85, int calories = 350)
{
  ca.brand_name = brand;
  ca.weight = weight;
  ca.calories = calories;
}

void display_candy_data(const candy_bar & ca)
{
  cout << "--- --- candy bar data --- ---\n";
  cout << "brand: " << ca.brand_name << "\n";
  cout << "weight: " << ca.weight << "\n";
  cout << "calories: " << ca.calories << "\n";
}