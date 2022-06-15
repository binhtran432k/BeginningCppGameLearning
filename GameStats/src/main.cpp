// Game Stats
// Demonstrates declaring and initializing variables

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
    int score;
    double distance;
    char playAgain;
    bool shieldsUp;

    short lives, aliansKilled;

    score = 0;
    distance = 1200.76;
    playAgain = 'y';
    shieldsUp = true;
    lives = 3;
    aliansKilled = 10;
    double engineTemp = 6572.89;

    cout << "\nscore: " << score << endl;
    cout << "distance: " << distance << endl;
    cout << "playAgain: " << playAgain << endl;
    // skipping shieldsUp since you don't generally print Boolean values
    cout << "lives: " << lives << endl;
    cout << "aliansKilled: " << aliansKilled << endl;
    cout << "engineTemp: " << engineTemp << endl;

    int fuel;
    cout << "\nHow much fuel? ";
    cin >> fuel;
    cout << "fuel: " << fuel << endl;

    typedef unsigned short int ushort;
    ushort bonus = 10;
    cout << "\nbonus: " << bonus << endl;

    return 0;
}
