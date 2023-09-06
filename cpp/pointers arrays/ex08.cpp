#include <iostream>

using namespace std;

struct pizza_data {
  string company_name;
  float diameter;
  float weight;
};

int main()
{
  pizza_data *pizza = new pizza_data;
  cout << "Please enter the info of the pizza\n";
  cout << "pizza company: ";
  getline(cin, pizza->company_name);
  cout << "pizza diameter: ";
  cin >> pizza->diameter;
  cout << "weight: ";
  cin >> pizza->weight;

  cout << "\n\nData entered\nCompany: " << pizza->company_name << "\nDiameter: " << pizza->diameter << "\nWeight: " << pizza->weight << "\n";

  delete pizza;
  return 0;
}

