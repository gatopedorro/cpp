#include <iostream>

int input(int scores[]);
void display(int scores[], int scores_length);
void average(int scores[], int scores_length);

using namespace std;

int main()
{
  const int max_scores = 10;
  int scores[max_scores];

  int scores_length = input(scores);
  display(scores, scores_length);
  average(scores, scores_length);

  return 0;
}

int input(int scores[])
{
  cout << "Enter your golf scores (up to 10 scores, to terminate early type any negative)\n";

  int score;
  int i = 0;

  cout << "score #" << i << ": ";
  while(cin >> score && score >= 0)
  {
    scores[i] = score;
    i++;
    cout << "score #" << i << ": ";
  }

  return i;
}

void display(int scores[], int scores_length)
{
  cout << "Your scores are: ";
  for(int i = 0; i < scores_length; i++)
  {
    cout << scores[i] << " ";
  }
  cout << "\n";
}

void average(int scores[], int scores_length)
{
  cout << "\n";
  cout << "Your average score is: ";
  int average;
  for(int i = 0; i < scores_length; i++)
  {
    average += scores[i];
  }
  cout << average / scores_length << "\n";
}

