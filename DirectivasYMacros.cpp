/*
Por: Diego Becerril y Erik Viramontes
Date: 10/11/2023
Uso de directivas y macros en clases
*/
#include <bits/stdc++.h>
using namespace std;

// Definiendo una constante
const int VALOR_CONSTANTE = 5;

// Macro para multiplicar un atributo por la constante hecha atrás
#define MULTIPLICAR(objeto, atributo) objeto.set##atributo(objeto.get##atributo() * VALOR_CONSTANTE)

class padre {
private:
    int a1 = 0;
    int a2 = 0;
    string a3 = " ";
    int a4 = 0;

public:
    // Constructor padre parametrizado
    padre(int valor1, int valor2, const string& valor3, int valor4) {
        a1 = valor1;
        a2 = valor2;
        a3 = valor3;
        a4 = valor4;
    }

    void accion1() {
        cout << "\nSoy la acción 1" << endl;
    }

    void accion2() {
        cout << "\nBuenas, soy la acción 2" << endl;
    }

    // Getter para a1
    int getA1() {
        return a1;
    }

    // Setter para a1
    void setA1(int valor) {
        a1 = valor;
    }

    // Getter para a2
    int getA2() {
        return a2;
    }

    // Setter para a2
    void setA2(int valor) {
        a2 = valor;
    }

    // Getter para a3
    string getA3() {
        return a3;
    }

    // Setter para a3
    void setA3(const string& valor) {
        a3 = valor;
    }

    // Getter para a4
    int getA4() {
        return a4;
    }

    // Setter para a4
    void setA4(int valor) {
        a4 = valor;
    }

    // Destructor para padre
    ~padre() {
        cout << "Destructor padre llamado" << endl;
    }
};

class hijo : public padre {
private:
    int b1 = 0;
    int b2 = 0;
    string b3 = " ";
    int b4 = 0;

public:
    // Constructor hijo parametrizado
    hijo(int valor1, int valor2, const string& valor3, int valor4) : padre(valor1, valor2, valor3, valor4) {
        b1 = valor1;
        b2 = valor2;
        b3 = valor3;
        b4 = valor4;
    }

    void accion1() {
        cout << "\nSoy la acción 1 del hijo" << endl;
    }

    void accion2() {
        cout << "\nBuenas, soy la acción 2 del hijo" << endl;
    }

    // Getter para b1
    int getb1() {
        return b1;
    }

    // Setter para b1
    void setb1(int valor) {
        b1 = valor;
    }

    // Getter para b2
    int getb2() {
        return b2;
    }

    // Setter para b2
    void setb2(int valor) {
        b2 = valor;
    }

    // Getter para b3
    string getb3() {
        return b3;
    }

    // Setter para b3
    void setb3(const string& valor) {
        b3 = valor;
    }

    // Getter para b4
    int getb4() {
        return b4;
    }

    // Setter para b4
    void setb4(int valor) {
        b4 = valor;
    }

    // Destructor de hijo
    ~hijo() {
        cout << "Destructor hijo llamado" << endl;
    }
};

class hija : public padre {
private:
    int c1 = 0;
    int c2 = 0;
    string c3 = " ";
    int c4 = 0;

public:
    // Constructor hija parametrizado
    hija(int valor1, int valor2, const string& valor3, int valor4) : padre(valor1, valor2, valor3, valor4) {
        c1 = valor1;
        c2 = valor2;
        c3 = valor3;
        c4 = valor4;
    }

    void accion1() {
        cout << "\nSoy la acción 1 de la hija" << endl;
    }

    void accion2() {
        cout << "\nBuenas, soy la acción 2 de la hija" << endl;
    }

    // Getter para c1
    int getc1() {
        return c1;
    }

    // Setter para c1
    void setc1(int valor) {
        c1 = valor;
    }

    // Getter para c2
    int getc2() {
        return c2;
    }

    // Setter para c2
    void setc2(int valor) {
        c2 = valor;
    }

    // Getter para c3
    string getc3() {
        return c3;
    }

    // Setter para c3
    void setc3(const string& valor) {
        c3 = valor;
    }

    // Getter para c4
    int getc4() {
        return c4;
    }

    // Setter para c4
    void setc4(int valor) {
        c4 = valor;
    }

    // Destructor de hija
    ~hija() {
        cout << "Destructor hija llamado" << endl;
    }
};

int main() {
  cout<<"\n-------------Padre------------"<<endl;
    // Creando un objeto de padre utilizando el constructor parametrizado
    padre objetoa(10, 20, "Hola 1", 30);
    hijo objetob(40, 50, "hola2", 60);
    hija objetoc(70, 80, "hola3", 90);

    // Utilizando los getters para acceder a los valores padre
    cout << "a1: " << objetoa.getA1() << endl;
    cout << "a2: " << objetoa.getA2() << endl;
    cout << "a3: " << objetoa.getA3() << endl;
    cout << "a4: " << objetoa.getA4() << endl;

    // Utilizando los setters para modificar los valores del objeto padre
    objetoa.setA1(15);
    objetoa.setA2(25);
    objetoa.setA3("Hola 1.5");
    objetoa.setA4(35);

    // Mostrando los valores actualizados del objeto padre
    cout << "Valores actualizados del objeto padre:" << endl;
    cout << "a1: " << objetoa.getA1() << endl;
    cout << "a2: " << objetoa.getA2() << endl;
    cout << "a3: " << objetoa.getA3() << endl;
    cout << "a4: " << objetoa.getA4() << endl;

  cout<<"\n-------------Hijo------------"<<endl;
    // Utilizando los getters para acceder a los valores hijo
    cout << "b1: " << objetob.getb1() << endl;
    cout << "b2: " << objetob.getb2() << endl;
    cout << "b3: " << objetob.getb3() << endl;
    cout << "b4: " << objetob.getb4() << endl;

    // Utilizando los setters para modificar los valores del objeto hijo
    objetob.setb1(45);
    objetob.setb2(55);
    objetob.setb3("Hola 2.5");
    objetob.setb4(65);

    // Mostrando los valores actualizados del objeto hijo
    cout << "Valores actualizados del objeto hijo:" << endl;
    cout << "b1: " << objetob.getb1() << endl;
    cout << "b2: " << objetob.getb2() << endl;
    cout << "b3: " << objetob.getb3() << endl;
    cout << "b4: " << objetob.getb4() << endl;

  cout<<"\n-------------Hija------------"<<endl;
  // Utilizando los getters para acceder a los valores hija
  cout << "c1: " << objetoc.getc1() << endl;
  cout << "c2: " << objetoc.getc2() << endl;
  cout << "c3: " << objetoc.getc3() << endl;
  cout << "c4: " << objetoc.getc4() << endl;

  // Utilizando los setters para modificar los valores del objeto hija
  objetoc.setc1(75);
  objetoc.setc2(85);
  objetoc.setc3("Hola 3.5");
  objetoc.setc4(95);

  // Mostrando los valores actualizados del objeto hija
  cout << "Valores actualizados del objeto hijo:" << endl;
  cout << "c1: " << objetoc.getc1() << endl;
  cout << "c2: " << objetoc.getc2() << endl;
  cout << "c3: " << objetoc.getc3() << endl;
  cout << "c4: " << objetoc.getc4() << endl;

  cout<<"\n-------------Aplicando macro------------"<<endl;
  // Usando el macro para multiplicar un atributo por la constante
  MULTIPLICAR(objetoa, A1);
  MULTIPLICAR(objetob, b2);
  MULTIPLICAR(objetoc, c4);

  // Mostrando los valores actualizados después de aplicar el macro
  cout << "\nValores actualizados después de aplicar el macro:" << endl;
  cout << "a1: " << objetoa.getA1() << endl;
  cout << "b2: " << objetob.getb2() << endl;
  cout << "c4: " << objetoc.getc4() << endl;
    return 0;
}
