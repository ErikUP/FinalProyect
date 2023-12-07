/*
Abstraccion y clase abstracta
- Fuentes: Actividad de clase, Programación Avanzada UP,
           OOP in C++ - FreeCodeCamp, Saldina Nurak - https://youtu.be/wN0x9eZLix4?si=4yfqLWzy9HrWZDdd
- Editado / modificado por: Eduardo Rodríguez
- Fecha: 27/09/2023
*/

#include<bits/stdc++.h>

using namespace std;

// Clase Abstracta
class EmpleadoAbstracto{
    virtual void obtenerAumento() = 0; // Funcion virtual, debe ser implementada por quien desea utilizarla.
};

class Empleado:EmpleadoAbstracto{  // Empleado hereda de EmpleadoAbstracto.
private:    // Estan encapsuladas. Son privadas y nadie fuera de la clase pueda accesar a ellas.
    string Nombre;
    string Compania;
    int Edad;

public:
    // Metodo
    void presentarse(){
        cout << "Nombre: " << Nombre << endl;
        cout << "Compania: " << Compania << endl;
        cout << "Edad: " << Edad << endl;
    }

    Empleado(string nombre, string compania, int edad){
        Nombre = nombre;
        Compania = compania;
        Edad = edad;
    }

    // Getters y Setters
    void SetNombre(string nombre){
        Nombre = nombre;
    }

    string getNombre(){
        return Nombre;
    }

    void setCompania(string compania){
        Compania = compania;
    }

    string getCompania(){
        return Compania;
    }

    void setEdad(int edad){
        Edad = edad;
    }

    int getEdad(){
        return Edad;
    }

    // Implementacion del metodo de la clase abstracta
    void obtenerAumento(){
        if(Edad >= 30)
            cout << "Felicidades " << Nombre << "Obtuviste un aumento\n";
        else
            cout << "Lo siento, debes esperar para el aumento";
    }
};

int main(){

    Empleado empleado1 = Empleado("Eduardo", "UP", 27);
    empleado1.presentarse();

    empleado1.setEdad(28);
    cout << empleado1.getNombre() << " tiene " << empleado1.getEdad() << " y trabaja en " << empleado1.getCompania() << endl;

    // Probando el metodo implementado que se heredo de la clase abstracta.
    empleado1.obtenerAumento();
    cout << endl;

    // Actualizando la edad para verificar obtenerAumento()
    empleado1.setEdad(30);
    empleado1.obtenerAumento();

    return 0;
}