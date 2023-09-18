#include <iostream>
const int Max = 5;

double* fill_array(int limit);
void show_array(const double *begin,const double *end);
void revalue(double r, double *begin,const double *end);

int main()
{
  using namespace std;

  double* b;
  const double* e;
  b = fill_array(Max);
  e = b + 5;

  show_array(b, e);
  cout << "Enter revaluation factor: ";
  double factor;
  while(!(cin >> factor))
  {
    cin.clear();
    while(cin.get() != '\n')
      continue;
    cout << "Bad input; Please enter a number: ";
  }
  revalue(factor, b, e);
  show_array(b, e);
  cout << "Done.\n";
  delete[] b;
  return 0;
}

double* fill_array(int limit)
{
  using namespace std;
  double temp;
  int i;
  double* p = new double[Max] { -1, -1, -1, -1, -1};
  for(int i=0;i<limit;i++)
  {
    cout << "Enter value #" << i + 1 << ": ";
    cin >> temp;
    if(!cin)
    {
      cin.clear();
      while(cin.get() != '\n')
        continue;
      cout << "Bad input; input process terminated.\n";
      break;
    }
    else if(temp < 0)
      break;
      *(p + i) = temp;
  }
  cout << "\n";
  return p;
}

void show_array(const double *begin, const double *end)
{
  using namespace std;
  for(int i = 0; begin != end; begin++, i++)
    cout << "Property #" << i << ": $" << *begin << "\n";
}

void revalue(double r, double *begin,const double *end)
{
  for(;begin != end; begin++)
    *begin = *begin * r;
}
