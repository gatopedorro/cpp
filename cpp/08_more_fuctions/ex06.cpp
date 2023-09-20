#include <iostream>
#include <cstring>

using namespace std;

template<typename T>
T maxn(T arr[], int n);

template<>
char* maxn<char *>(char* arr[], int n);

int main()
{
  int arr_int[4] = {5, 7, 90, 56};
  double arr_double[6] = {51.0, 67.4, 99.78, 567.73};
  char one[] = "one";
  char two[] = "two";
  char three[] = "three";
  char four[] = "four";
  char * arr_st[4] = {&one[0], &two[0], &three[0], &four[0]};

  int k = maxn(arr_int, 4);
  double b = maxn(arr_double, 6);
  char * c = maxn(arr_st, 4);

  std::cout << "largest int: " << k << "\nlargest double: " << b << "\naddress of longest string: " << &c << "\nlongest string is: " << c << "\n";

  return 0;
}

template<typename T>
T maxn(T arr[], int n)
{
  T max = arr[0];
  for(int i = 0; i < n; i++)
  {
    if(arr[i] > max)
    {
      max = arr[i];
    }
  }
  return max;
}

template <>
char * maxn(char * arr_pchar[], int n)
{
  int index = 0, max_strlen = 0;
  int count;
  for(int i=0; i<n; i++)
  {
    count = 0;
    int j = 0;
    while(*(arr_pchar[i] + j) != '\0')
    {
      count++;
      j++;
    }

    if(count > max_strlen)
    {
      index = i;
      max_strlen = count;
    }
  }

  return arr_pchar[index];
}

