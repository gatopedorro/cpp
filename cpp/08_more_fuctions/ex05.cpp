#include <iostream>


template <typename T>
T max5(T arr[])
{
  T max = arr[0];
  for(int i=1; i < 5; i++)
  {
    if(arr[i] > max)
    {
      max = arr[i];
    }
  }
  return max;
}

int main()
{
  int arr_int[5] = {1,2,3,4,5};
  double arr_double[5] = {3.0,2.0,100.0,899.0,5.0};

  std::cout << max5(arr_int) << "\n";
  std::cout << max5(arr_double) << "\n";

  return 0;
}