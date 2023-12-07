/*
Por: Diego becerril y Erik Viramontes
Fecha: 22/10/2023
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
};

void MostrarInfoAmigo(const Jugador& jugador) {
    cout << "Función amiga: Nombre del jugador = " << jugador.nombre << ", Número de camiseta = " << jugador.numeroCamiseta << endl;
}

int main() {
    Jugador jugador1("Lionel Messi", 10); // Llama al constructor con parámetros
    Jugador jugador2 = jugador1; // Llama al constructor de copia

    jugador1.MostrarInfo();
    jugador2.MostrarInfo();

    MostrarInfoAmigo(jugador1);

    return 0;
}