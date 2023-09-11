#include <iostream>


using namespace std;
struct car
{
  string make;
  int year;
};

int main()
{
  int cars_to_catalog;
  cout << "How many cars do you want to catalog?\n";
  cin >> cars_to_catalog;
  cin.get();

  car* p_cars = new car[cars_to_catalog];


  for(int i = 0; i < cars_to_catalog; i++)
  {
    cout << "Car #" << i + 1 << "\n";
    cout << "Please enter the make: ";
    getline(cin, p_cars[i].make);
    cout << "Please enter the year made: ";
    cin >> p_cars[i].year;
    cin.get();
  }

  cout << "Here's your collection\n";
  for(int i = 0; i < cars_to_catalog; i++)
  {
    cout << p_cars[i].year <<  " " << p_cars[i].make << "\n";
  }

  delete [] p_cars;
  return 0;
}