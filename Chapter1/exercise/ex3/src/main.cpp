// Exercise 3
// Answer for exercise 3: Write a program that gets three game scores from the
// user and displays the average.

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  int score1, score2, score3;
  cout << "Please enter 3 score." << endl;

  cout << "Score 1: ";
  cin >> score1;
  cout << "Score 2: ";
  cin >> score2;
  cout << "Score 3: ";
  cin >> score3;

  double averageScore = (score1 + score2 + score3) / (double) 3;
  cout << "\nThe average score is " << averageScore << "." << endl;

  return 0;
}
