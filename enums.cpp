#include <iostream>

using namespace std;

enum GameMode{
  Easy = 10,
  Medium = 25,
  Hard = 100

};

int main(void){
  
  GameMode difficulty = Medium;

  switch (difficulty){
    case Easy:
      cout << "Selected mode: Easy" << endl << "Have fun, the enemies shouldn't be that much of an issue, with a score of: " << Easy << endl;
      break;
    case Medium:
      cout << "Selected mode: Medium" << endl << "Good Luck, the enemies are a bit difficult, with a score of: " << Medium <<endl;
      break;
    case Hard:
      cout << "Selected mode: Hard" << endl << "I'd wish you luck, but it won't help, the enemies are of difficulty: " << Hard << endl;
      break;
  };

  return 0;
}
