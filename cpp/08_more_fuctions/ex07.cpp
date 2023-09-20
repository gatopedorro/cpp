#include <iostream>

template<typename T>
void ShowArray(T arr[], int n);

template<typename T>
void ShowArray(T * arr[], int n);

template<typename T>
void SumArray(T arr[], int n);

template<typename T>
void SumArray(T * arr[], int n);

struct debts
{
  char name[50];
  double amount;
};

int main()
{
  using namespace std;
  int things[6] = {13 ,31, 103, 301, 310, 130};
  struct debts mr_E[3] =
  {
    {"name 1", 24.0},
    {"name 2", 13.0},
    {"name 3", 18.0}
  };
  double *pd[3];

  for(int i = 0; i < 3; i++)
  {
    pd[i] = &mr_E[i].amount;
  }

  cout << "Listing mr E count of things\n";
  ShowArray(things, 6);
  cout << "Listing mr E debts\n";
  ShowArray(pd, 3);

  cout << "Listing mr E count of things\n";
  SumArray(things, 6);
  cout << "Listing mr E debts\n";
  SumArray(pd, 3);

  return 0;
}

template<typename T>
void ShowArray(T arr[], int n)
{
  using namespace std;
  cout << "template A\n";
  for(int i=0; i < n; i++)
  {
    cout << arr[i] << ' ';
  }
  cout << "\n";
}

template<typename T>
void ShowArray(T* arr[], int n)
{
  using namespace std;
  cout << "template B\n";
  for(int i=0; i<n; i++)
  {
    cout << *arr[i] << ' ';
  }
  cout << "\n";
}

template<typename T>
void SumArray(T arr[], int n)
{
  using namespace std;
  cout << "sum template A\n";
  T sum;
  for(int i=0; i < n; i++)
  {
    sum += arr[i];
  }
  cout << sum << "\n";
}

template<typename T>
void SumArray(T* arr[], int n)
{
  using namespace std;
  T sum;
  cout << "sum template B\n";
  for(int i=0; i<n; i++)
  {
    sum += *arr[i];
  }
  cout << sum << "\n";
}