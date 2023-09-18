#include <iostream>

void fill_array(double values[], int size);
void show_array(double values[], int size);
void reverse_array(double values[], int size);

using namespace std;

int main()
{
  int max_size = 8;
  double values[max_size];
  fill_array(values, max_size);
  show_array(values, max_size);
  reverse_array(values, max_size);
  show_array(values, max_size);
  reverse_array(values + 1, max_size - 2);
  show_array(values, max_size);
  return 0;
}

void fill_array(double values[], int size)
{
  cout << "*********filling the array*********\n";
  int i = 0;
  double new_value;
  cout << "value #" << i + 1 << ": ";
  while(i < size && cin >> new_value)
  {
    values[i] = new_value;
    if(i == size - 1)
      break;
    cout << "value #" << i + 2 << ": ";
    i++;
  }
}

void show_array(double values[], int size)
{
  cout << "*********values in array*********\n";
  for(int i=0; i < size; i++)
  {
    cout << values[i] << " ";
  }
  cout << "\n";
}

void reverse_array(double values[], int size)
{
  cout << "*********reversing array*********\n";
  int temp;
  for(int i = 0; i < size / 2; i++)
  {
    cout << "switching " << values[i] << " with " << values[size - 1 - i] << "\n";
    temp = values[i];
    values[i] = values[size - 1 - i];
    values[size - 1 - i] = temp;
  }
}
