#include <iostream>

using namespace std;

struct candy_bar {
  string brand;
  float weight;
  int calories;
};

int main()
{
  candy_bar *candies =  new candy_bar[3];

  candies[0].brand = "chocobrand";
  candies[0].weight = 0.32;
  candies[0].calories = 274;
  candies[1].brand = "le brand";
  candies[1].weight = 0.54;
  candies[1].calories = 400;
  candies[2].brand = "rico";
  candies[2].weight = 0.12;
  candies[2].calories = 150;

  cout << "The first candy bar is " << candies[0].brand << ", it weights " << candies[0].weight << "kg, and has " << candies[0].calories << " calories.\n";
  cout << "The second candy bar is " << candies[0].brand << ", it weights " << candies[0].weight << "kg, and has " << candies[0].calories << " calories.\n";
  cout << "The last candy bar is " << candies[0].brand << ", it weights " << candies[0].weight << "kg, and has " << candies[0].calories << " calories.\n";

  delete[] candies;

  cout << "All the candies where allocated dynamically (and deleted too)";

  return 0;
}