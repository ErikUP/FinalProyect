By: Diego Becerril and Erik Viramontes
Date: 22/10/2023
*/
#include <iostream>
using namespace std;

// Parent Class 1
class Dad {
public:
    Dad() {
        cout << "Dad's Constructor" << endl;
    } // parent constructor

    void play() {
        cout << "Playing the acoustic guitar" << endl;
    } // parent method

    virtual ~Dad() {
        cout << "Dad's Destructor" << endl;
    } // parent destructor
};

// Child Class 1
class Son : public Dad {
public:
    Son() {
        cout << "Son's Constructor" << endl;
    } // child constructor

    // changing the play method
    void play() {
        cout << "Playing the electric guitar" << std::endl;
    } // child method

    // Method to access the play function of the parent class
    void playStringInstrument() {
        Dad::play();
    } // parent method

    ~Son() {
        cout << "Son's Destructor" << std::endl;
    } // child destructor
};

// Parent Class 2
class Mom {
public:
    Mom() {
        cout << "Mom's Constructor" << endl;
    } // parent constructor

    void play() {
        cout << "Playing the harp" << endl;
    } // parent method

    virtual ~Mom() {
        cout << "Mom's Destructor" << std::endl;
    } // parent destructor
};

// Child Class 2
class Daughter : public Mom, public Dad {
public:
    Daughter() {
        cout << "Daughter's Constructor" << std::endl;
    } // child constructor

    // changing the play method of Mom class
    void play() {
        cout << "Playing the violin" << std::endl;
    } // child method

    // Method to access the play function of both parent classes
    void playInstruments() {
        Mom::play();
        Dad::play();
    } // parent methods

    ~Daughter() {
        cout << "Daughter's Destructor" << endl;
    } // child destructor
};

int main() {
    Son Mohammad;
    cout << "\nMohammad ";
    Mohammad.play();
    cout << "\nMohammad ";
    Mohammad.playStringInstrument();

    Daughter ToÃ±ita;
    cout << "\nToÃ±ita ";
    ToÃ±ita.play();
    cout << "\nToÃ±ita ";
    ToÃ±ita.playInstruments();

    return 0;
}
