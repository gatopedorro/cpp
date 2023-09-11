#include <iostream>

int main()
{
  using std::cout;
  using std::cin;

  int sold_books[12];
  int sum = 0;
  std::string months[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

  for(int i = 0; i < 12; i++)
  {
    cout << "How many books where sold in " << months[i] << "?\n";
    cin >> sold_books[i];
  }

  for(int i = 0; i < 12; i++)
  {
    sum += sold_books[i];
  }

  cout << "You sold " << sum << " books in the year!\n";

  return 0;
}