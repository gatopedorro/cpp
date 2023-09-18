#include <iostream>

using namespace std;

double calculate(double, double, double (*pf)(double, double));
double addition(double x, double y);
double multiplication(double x, double y);
double substraction(double x, double y);

int main()
{
  double (*pf[3])(double, double) = { addition, multiplication, substraction };

  cout << "Enter pairs of numbers and I will calculate something with them\n";
  cout << "To exit type a non digit";
  double x, y;

  while(cin >> x >> y)
  {
    for(int i = 0; i < 3; i++)
    {
      cout << calculate(x, y, pf[i]) << "\n";
    }
  }
  return 0;
}

double calculate(double x, double y, double (*pf)(double, double))
{
  return (*pf)(x , y); //the same as pf(x,y)
}

double addition(double x, double y)
{
  cout << x << " + " << y << " = ";
  return x + y;
}

double multiplication(double x, double y)
{
  cout << x << " * " << y << " = ";
  return x * y;
}

double substraction(double x, double y)
{
  cout << x << " - " << y << " = ";
  return x - y;
}