#include <iostream>
using namespace std;

int main() {

  const int LENGTH = 5;
  int lottery[LENGTH];
  int user[LENGTH];

  for (int i = 0; i < LENGTH; i++)
    {
      cin >> user[i];
  //generate lottery array
    for (int j = 0; j < LENGTH; j++)
      lottery[i] = rand() % 100 + 1;
  
    }
  int match = 0;
  for (int i = 0; i < LENGTH; i++)
    {
      if (user[i] == lottery[i])
        match++;
      
    }
  if (match == 5)
        cout << "Winner";
      else
        cout << "Sorry";
  
}