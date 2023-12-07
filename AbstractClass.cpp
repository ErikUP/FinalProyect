Abstraction and Abstract Class
- Sources: Class activity, Advanced Programming UP,
           OOP in C++ - FreeCodeCamp, Saldina Nurak - https://youtu.be/wN0x9eZLix4?si=4yfqLWzy9HrWZDdd
- Edited / modified by: Eduardo RodrÃƒÂ­guez
- Date: 27/09/2023
*/

#include<bits/stdc++.h>

using namespace std;

// Abstract Class
class AbstractEmployee{
    virtual void getRaise() = 0; // Virtual function, must be implemented by whoever wants to use it.
};

class Employee: public AbstractEmployee { // Employee inherits from AbstractEmployee.
private:    // They are encapsulated. They are private, and no one outside the class can access them.
    string Name;
    string Company;
    int Age;

public:
    // Method
    void introduce(){
        cout << "Name: " << Name << endl;
        cout << "Company: " << Company << endl;
        cout << "Age: " << Age << endl;
    }

    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }

    // Getters and Setters
    void setName(string name){
        Name = name;
    }

    string getName(){
        return Name;
    }

    void setCompany(string company){
        Company = company;
    }

    string getCompany(){
        return Company;
    }

    void setAge(int age){
        Age = age;
    }

    int getAge(){
        return Age;
    }

    // Implementation of the method from the abstract class
    void getRaise(){
        if(Age >= 30)
            cout << "Congratulations " << Name << ". You got a raise.\n";
        else
            cout << "Sorry, you have to wait for the raise.";
    }
};

int main(){

    Employee employee1 = Employee("Eduardo", "UP", 27);
    employee1.introduce();

    employee1.setAge(28);
    cout << employee1.getName() << " is " << employee1.getAge() << " years old and works at " << employee1.getCompany() << endl;

    // Testing the implemented method inherited from the abstract class.
    employee1.getRaise();
    cout << endl;

    // Updating the age to check getRaise()
    employee1.setAge(30);
    employee1.getRaise();

    return 0;
}
