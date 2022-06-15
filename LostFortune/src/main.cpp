// Lost Fortune
// A personalized adventure

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  const int GOLD_PIECES = 900;
  int adventurers, killed, survivors;
  string leader;

  // get the information
  cout << "Welcome to Lost Fortune" << endl;
  cout << "\nPlease enter the following for your personalized adventure"
       << endl;

  cout << "Enter a number: ";
  cin >> adventurers;

  cout << "Enter a number, smaller than the first: ";
  cin >> killed;

  survivors = adventurers - killed;

  cout << "Enter your last name: ";
  cin >> leader;

  // tell the story
  cout << "\nA brave group of " << adventurers << " set out on a quest "
       << "-- in search of the Lost treasure of the Ancient Dwarves. "
       << "The group was led by that legendary rogue, " << leader << "."
       << endl;
  cout << "\nAlong the way, a band of marauding ogres ambushed the party. "
       << "All fought bravely under the command of " << leader
       << ", and the ogres were defeated, but at a cost. "
       << "Of the adventurers, " << killed << " were vanquished, "
       << "leaving just " << survivors << " in the group." << endl;
  cout << "\nThe party was about to give up all hope. "
       << "But while laying the decreased to rest, "
       << "they stumbled upon the buried fortune. "
       << "So the adventurers split " << GOLD_PIECES << " gold pieces. "
       << leader << " held on to the extra " << (GOLD_PIECES % survivors)
       << " pieces to keep things fair of course." << endl;

  return 0;
}
