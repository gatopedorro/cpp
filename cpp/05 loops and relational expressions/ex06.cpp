#include <iostream>

int main()
{
  using std::cout;
  using std::cin;

  int sold_books[3][12];
  int sum = 0;
  int total = 0;
  std::string months[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 12; j++)
    {
      cout << "How many books where sold in " << months[j] << "?\n";
      cin >> sold_books[i][j];
    }
  }


  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 12; j++)
    {
      sum += sold_books[i][j];
    }
    total += sum;
    cout << "You sold " << sum << " books in the year!\n";
    sum = 0;
  }

  cout << "You sold " << total << " books in total!\n";

  return 0;
}