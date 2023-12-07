/*
By: Diego Becerril and Erik Viramontes
Date: 22/10/2020
Sources:
1. - (Equality Operator Overloading) https://www.delftstack.com/es/howto/cpp/equal-equal-operator-overloading-in-cpp/
*/

#include <iostream>
#include <string>
using namespace std;

class Player {
private:
    string name;
    int jerseyNumber;

public:
    Player(const string& playerName, int number) : name(playerName), jerseyNumber(number) {
        cout << "Parameterized constructor called" << endl;
    }

    // Copy Constructor
    Player(const Player& other) : name(other.name), jerseyNumber(other.jerseyNumber) {
        cout << "Copy constructor called" << endl;
    }

    // Destructor
    ~Player() {
        cout << "Destructor called for " << name << endl;
    }

    void ShowInfo() {
        cout << "Name: " << name << ", Jersey Number: " << jerseyNumber << endl;
    }

    // Friend Function
    friend void ShowFriendInfo(const Player& player);

    // Equality Operator Overloading (==)
    bool operator==(const Player& other) const {
        return this->jerseyNumber == other.jerseyNumber;
    }
};

void ShowFriendInfo(const Player& player) {
    cout << "Friend Function: Player's Name = " << player.name << ", Jersey Number = " << player.jerseyNumber << endl;
}

int main() {
    Player player1("Lionel Messi", 10); // Calls the parameterized constructor
    Player player2 = player1; // Calls the copy constructor

    Player player3("Cristiano Ronaldo", 7); // Another player with a different jersey number

    player1.ShowInfo();
    player2.ShowInfo();
    player3.ShowInfo();

    ShowFriendInfo(player1);

    // Equality check
    if (player1 == player2) {
        cout << "Players 1 and 2 are equal." << endl;
    } else {
        cout << "Players 1 and 2 are different." << endl;
    }
     return 0;
}
