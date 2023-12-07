/*
Por: Diego Becerril y Erik Viramontes
fecha: 22/10/2020
Fuentes:
1.-(Sobrecarga de operador de igualdad) https://www.delftstack.com/es/howto/cpp/equal-equal-operator-overloading-in-cpp/

  */
#include <iostream>
#include <string>
using namespace std;

class Jugador {
private:
    string nombre;
    int numeroCamiseta;

public:
    Jugador(const string& nombre, int numero) : nombre(nombre), numeroCamiseta(numero) {
        cout << "Constructor con parámetros llamado" << endl;
    }

    // Constructor de copia
    Jugador(const Jugador& otro) : nombre(otro.nombre), numeroCamiseta(otro.numeroCamiseta) {
        cout << "Constructor de copia llamado" << endl;
    }

    // Destructor
    ~Jugador() {
        cout << "Destructor llamado para " << nombre << endl;
    }

    void MostrarInfo() {
        cout << "Nombre: " << nombre << ", Número de camiseta: " << numeroCamiseta << endl;
    }

    // Función amiga
    friend void MostrarInfoAmigo(const Jugador& jugador);

    // Sobrecarga del operador de igualdad (==)
    bool operator==(const Jugador& otro) const {
        return this->numeroCamiseta == otro.numeroCamiseta;
    }
};

void MostrarInfoAmigo(const Jugador& jugador) {
    cout << "Función amiga: Nombre del jugador = " << jugador.nombre << ", Número de camiseta = " << jugador.numeroCamiseta << endl;
}

int main() {
    Jugador jugador1("Lionel Messi", 10); // Llama al constructor con parámetros
    Jugador jugador2 = jugador1; // Llama al constructor de copia

    Jugador jugador3("Cristiano Ronaldo", 7); // Otro jugador con número de camiseta diferente

    jugador1.MostrarInfo();
    jugador2.MostrarInfo();
    jugador3.MostrarInfo();

    MostrarInfoAmigo(jugador1);

    // Comprobación de igualdad
    if (jugador1 == jugador2) {
        cout << "Los jugadores 1 y 2 son iguales." << endl;
    } else {
        cout << "Los jugadores 1 y 2 son diferentes." << endl;
    }

    if (jugador1 == jugador3) {
        cout << "Los jugadores 1 y 3 son iguales." << endl;
    } else {
        cout << "Los jugadores 1 y 3 son diferentes." << endl;
    }

    return 0;
}
