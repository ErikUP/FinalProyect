/*
By: Diego Becerril and Erik Viramontes
Date: 22/10/2023
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
};

void ShowFriendInfo(const Player& player) {
    cout << "Friend Function: Player's Name = " << player.name << ", Jersey Number = " << player.jerseyNumber << endl;
}

int main() {
    Player player1("Lionel Messi", 10); // Calls the parameterized constructor
    Player player2 = player1; // Calls the copy constructor

    player1.ShowInfo();
    player2.ShowInfo();

    ShowFriendInfo(player1);

    return 0;
}
