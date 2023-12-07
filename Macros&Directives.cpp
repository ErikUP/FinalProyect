/*
By: Diego Becerril and Erik Viramontes
Date: 11/23/2023
Use of directives and macros classes
*/
#include <bits/stdc++.h>
using namespace std;

// Defining a constant
const int CONSTANT_VALUE = 5;

// Macro to multiply an attribute by the previously defined constant
#define MULTIPLY(object, attribute) object.set##attribute(object.get##attribute() * CONSTANT_VALUE)

class Parent {
private:
    int a1 = 0;
    int a2 = 0;
    string a3 = " ";
    int a4 = 0;

public:
    // Parameterized constructor for the parent class
    Parent(int value1, int value2, const string& value3, int value4) {
        a1 = value1;
        a2 = value2;
        a3 = value3;
        a4 = value4;
    }

    void action1() {
        cout << "\nI am action 1" << endl;
    }

    void action2() {
        cout << "\nHello, I am action 2" << endl;
    }

    // Getter for a1
    int getA1() {
        return a1;
    }

    // Setter for a1
    void setA1(int value) {
        a1 = value;
    }

    // Getter for a2
    int getA2() {
        return a2;
    }

    // Setter for a2
    void setA2(int value) {
        a2 = value;
    }

    // Getter for a3
    string getA3() {
        return a3;
    }

    // Setter for a3
    void setA3(const string& value) {
        a3 = value;
    }

    // Getter for a4
    int getA4() {
        return a4;
    }

    // Setter for a4
    void setA4(int value) {
        a4 = value;
    }

    // Destructor for the parent class
    ~Parent() {
        cout << "Parent destructor called" << endl;
    }
};

class Child : public Parent {
private:
    int b1 = 0;
    int b2 = 0;
    string b3 = " ";
    int b4 = 0;

public:
    // Parameterized constructor for the child class
    Child(int value1, int value2, const string& value3, int value4) : Parent(value1, value2, value3, value4) {
        b1 = value1;
        b2 = value2;
        b3 = value3;
        b4 = value4;
    }

    void action1() {
        cout << "\nI am action 1 of the child" << endl;
    }

    void action2() {
        cout << "\nHello, I am action 2 of the child" << endl;
    }

    // Getter for b1
    int getB1() {
        return b1;
    }

    // Setter for b1
    void setB1(int value) {
        b1 = value;
    }

    // Getter for b2
    int getB2() {
        return b2;
    }

    // Setter for b2
    void setB2(int value) {
        b2 = value;
    }

    // Getter for b3
    string getB3() {
        return b3;
    }

    // Setter for b3
    void setB3(const string& value) {
        b3 = value;
    }

    // Getter for b4
    int getB4() {
        return b4;
    }

    // Setter for b4
    void setB4(int value) {
        b4 = value;
    }

    // Destructor for the child class
    ~Child() {
        cout << "Child destructor called" << endl;
    }
};

class Daughter : public Parent {
private:
    int c1 = 0;
    int c2 = 0;
    string c3 = " ";
    int c4 = 0;

public:
    // Parameterized constructor for the daughter class
    Daughter(int value1, int value2, const string& value3, int value4) : Parent(value1, value2, value3, value4) {
        c1 = value1;
        c2 = value2;
        c3 = value3;
        c4 = value4;
    }

    void action1() {
        cout << "\nI am action 1 of the daughter" << endl;
    }

    void action2() {
        cout << "\nHello, I am action 2 of the daughter" << endl;
    }

    // Getter for c1
    int getC1() {
        return c1;
    }

    // Setter for c1
    void setC1(int value) {
        c1 = value;
    }

    // Getter for c2
    int getC2() {
        return c2;
    }

    // Setter for c2
    void setC2(int value) {
        c2 = value;
    }

    // Getter for c3
    string getC3() {
        return c3;
    }

    // Setter for c3
    void setC3(const string& value) {
        c3 = value;
    }

    // Getter for c4
    int getC4() {
        return c4;
    }

    // Setter for c4
    void setC4(int value) {
        c4 = value;
    }

    // Destructor for the daughter class
    ~Daughter() {
        cout << "Daughter destructor called" << endl;
    }
};

int main() {
  cout<<"\n-------------Parent------------"<<endl;
    // Creating an object of the parent class using the parameterized constructor
    Parent objectA(10, 20, "Hello 1", 30);
    Child objectB(40, 50, "hello2", 60);
    Daughter objectC(70, 80, "hello3", 90);

    // Using getters to access parent object values
    cout << "a1: " << objectA.getA1() << endl;
    cout << "a2: " << objectA.getA2() << endl;
    cout << "a3: " << objectA.getA3() << endl;
    cout << "a4: " << objectA.getA4() << endl;

    // Using setters to modify parent object values
    objectA.setA1(15);
    objectA.setA2(25);
    objectA.setA3("Hello 1.5");
    objectA.setA4(35);

    // Displaying the updated values of the parent object
    cout << "Updated values of the parent object:" << endl;
    cout << "a1: " << objectA.getA1() << endl;
    cout << "a2: " << objectA.getA2() << endl;
    cout << "a3: " << objectA.getA3() << endl;
    cout << "a4: " << objectA.getA4() << endl;

  cout<<"\n-------------Child------------"<<endl;
    // Using getters to access child object values
    cout << "b1: " << objectB.getB1() << endl;
    cout << "b2: " << objectB.getB2() << endl;
    cout << "b3: " << objectB.getB3() << endl;
    cout << "b4: " << objectB.getB4() << endl;

    // Using setters to modify child object values
    objectB.setB1(45);
    objectB.setB2(55);
    objectB.setB3("Hello 2.5");
    objectB.setB4(65);

    // Displaying the updated values of the child object
    cout << "Updated values of the child object:" << endl;
    cout << "b1: " << objectB.getB1() << endl;
    cout << "b2: " << objectB.getB2() << endl;
    cout << "b3: " << objectB.getB3() << endl;
    cout << "b4: " << objectB.getB4() << endl;

  cout<<"\n-------------Daughter------------"<<endl;
  // Using getters to access daughter object values
  cout << "c1: " << objectC.getC1() << endl;
  cout << "c2: " << objectC.getC2() << endl;
  cout << "c3: " << objectC.getC3() << endl;
  cout << "c4: " << objectC.getC4() << endl;

  // Using setters to modify daughter object values
  objectC.setC1(75);
  objectC.setC2(85);
  objectC.setC3("Hello 3.5");
  objectC.setC4(95);

  // Displaying the updated values of the daughter object
  cout << "Updated values of the daughter object:" << endl;
  cout << "c1: " << objectC.getC1() << endl;
  cout << "c2: " << objectC.getC2() << endl;
  cout << "c3: " << objectC.getC3() << endl;
  cout << "c4: " << objectC.getC4() << endl;

  cout<<"\n-------------Applying Macro------------"<<endl;
  // Using the macro to multiply an attribute by the constant
  MULTIPLY(objectA, A1);
  MULTIPLY(objectB, B2);
  MULTIPLY(objectC, C4);

  // Displaying the updated values after applying the macro
  cout << "\nUpdated values after applying the macro:" << endl;
  cout << "a1: " << objectA.getA1() << endl;
  cout << "b2: " << objectB.getB2() << endl;
  cout << "c4: " << objectC.getC4() << endl;
    return 0;
}
