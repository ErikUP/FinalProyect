/*
Por: Diego Becerril y Erik Viramontes
Fecha: 22/10/2023
  */
#include <iostream>
using namespace std;
// Clase padre 1
class Papa {
public:
    Papa() {
        cout << "Constructor de Papa" << endl;
    } //constructor padre

    void tocar() {
        cout << "Tocando la guitarra acustica" << endl;
    }//metodo padre

    virtual ~Papa() {
        cout << "Destructor de Papa" << endl;
    } //destructor de padre
};

// Clase hija 1
class Hijo : public Papa {
public:
    Hijo() {
        cout << "Constructor de Hijo" << endl;
    }//constructor Hijo

    // cambiando el método tocar
    void tocar() {
        cout << "Tocando la guitarra electrica" << std::endl;
    }//metodo hijo

    // Método para acceder a la función tocar de la clase padre
    void tocarInstrumentoCuerda() {
        Papa::tocar();
    } //metodo padre

    ~Hijo() {
        cout << "Destructor de Hijo" << std::endl;
    }//destructor de Hijo
};

// Clase padre 2
class Mama {
public:
    Mama() {
        cout << "Constructor de Mama" << endl;
    }//constructor madre

    void tocar() {
        cout << "Tocando el arpa" << endl;
    }//metodo madre

    virtual ~Mama() {
        cout << "Destructor de Mama" << std::endl;
    }//destructor de madre
};

// Clase hija 2
class Hija : public Mama, public Papa {
public:
    Hija() {
        cout << "Constructor de Hija" << std::endl;
    }//constructor hija

    // cambiando el método tocar de la clase Mama
    void tocar() {
        cout << "Tocando el violin" << std::endl;
    }//metodo hija

    // Método para acceder a la función tocar de ambas clases padres
    void tocarInstrumentos() {
        Mama::tocar();
        Papa::tocar();
    }//metodos madre y padre

    ~Hija() {
        cout << "Destructor de Hija" << endl;
    }//destructor de hija
};

int main() {
    Hijo Erik;
  cout<<"\nErik ";
    Erik.tocar();
  cout<<"\nErik ";
    Erik.tocarInstrumentoCuerda();

    Hija Liz;
  cout<<"\nLiz ";
    Liz.tocar();
  cout<<"\nLiz ";
    Liz.tocarInstrumentos();

    return 0;
}
