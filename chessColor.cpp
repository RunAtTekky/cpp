#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<char> files = {'a','b','c', 'd', 'e', 'f', 'g', 'h'};
  vector<int> ranks = {1,2,3,4,5,6,7,8};

  bool gameOver = false;
  int n = files.size();
  
  int correctScore = 0;
  int incorrectScore = 0;

  srand(time(0));
  
  while (!gameOver) {
    int file = rand()%n;
    int rank = rand()%n;

    // even -> black and odd -> white
    int realAnswer = file + rank;
    cout << files[file] << ranks[rank] << "?\n";
    cout << "Enter w for white and b for black\n";

    char answer; 
    bool correctInput = false;
    while (!correctInput) {
      cin >> answer;
      if (answer == 'q' || answer == 'Q') {gameOver = true; break;}
      if (answer == 'w' || answer == 'W' || answer == 'b' || answer == 'B') {
        correctInput = true;
      } else {
        cout << "Enter w or b\n";
      }
    }
    if (gameOver) break;
    bool guessWhite = false;
    if (answer == 'w' || answer == 'W') {
      guessWhite = true;
    }

    if (!(guessWhite ^ (realAnswer&1))) {
      cout << "Correct Answer\n";
      correctScore++;
    } else {
      cout << "Wrong answer\n";
      incorrectScore++;
    }
    cout << "\n";
  }

  cout << "\nCorrect Score: " << correctScore << "\n";
  cout << "Incorrect Score: " << incorrectScore << "\n";
}