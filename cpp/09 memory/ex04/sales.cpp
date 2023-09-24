#include <iostream>
#include "sales.h"

namespace sales{

  void setSales(Sales & s)
  {
    double avg = 0;
    double d = 0;
    double min = 1000, max=0;
    for(int i = 0; i < QUARTERS; i++)
    {
      std::cout << "Enter sales of Q" << i << ": ";
      std::cin >> d;
      s.sales[i] = d;
      avg += s.sales[i];
      if(d > max)
        max = d;
      if(d < min)
        min = d;
    }

    s.average = avg / QUARTERS;
    s.max = max;
    s.min = min;
  }

  void showSales(const Sales & s)
  {
    std::cout << "******sales******\n";
    std::cout << "Q1: $" << s.sales[0] << "\n";
    std::cout << "Q2: $" << s.sales[1] << "\n";
    std::cout << "Q3: $" << s.sales[2] << "\n";
    std::cout << "Q4: $" << s.sales[3] << "\n";
    std::cout << "*****************\n";
    std::cout << "average: $" << s.average << "\n";
    std::cout << "max: $" << s.max << "\n";
    std::cout << "min: $" << s.min << "\n";
  }
}