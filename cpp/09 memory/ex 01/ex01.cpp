#include "golf.h"
#include <iostream>
#include <vector>

void review_players(std::vector<golf> const & players, int lenght);

int main()
{
  std::vector<golf> players;

  std::cout << "******************----******************\n";
  std::cout << "Record golf players names and handicaps.\n";
  std::cout << "******************----******************\n\n\n";

  char next = 'y';
  int current = 0;
  golf player;
  while(next == 'y')
  {
    players.push_back(player);
    setgolf(players[current]);
    std::cout << "Do you want to enter another player info? (y/n): ";
    current++;
    std::cin >> next;
    std::cin.get();
  }

  int lenght = players.size();
  review_players(players, lenght);

  std::cout << "Do you want to change any player's handicap? (y/n): ";
  std::cin >> next;



  int wich_player, new_handicap;
  while(next == 'y')
  {
    std::cout << "Enter two numbers (first number indicates the player, the second it's new handicap): ";
    std::cin >> wich_player >> new_handicap;

    if(wich_player < 0 || wich_player >= lenght)
    {
      std::cout << "Player not found\n";
    }
    else if(new_handicap < 0)
    {
      std::cout << "Invalid handicap value\n";
    }
    else
    {
      handicap(players[wich_player], new_handicap);
    }

    std::cout << "Do you want to modify another player's hadicap? (y/n): ";
    std::cin >> next;
    std::cin.get();
  }

  review_players(players, lenght);

  return 0;
}


void review_players(std::vector<golf> const & players, int lenght)
{
  char next;
  std::cout << "Do you want to review all players info? (y/n): ";
  std::cin >> next;

  if(next == 'y')
  {
    for(int i =0; i < lenght; i ++)
    {
      std::cout << "Player #" << i+1 << " ";
      showgolf(players[i]);
    }
  }
}