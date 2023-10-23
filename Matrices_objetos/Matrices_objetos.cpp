//LOPEZ LOPEZ BRANDON ADAIR
//22100190

#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

class Matriz {
private:
    int filas;
    int columnas;
    //tamaño de la matriz

public: //metodos
    Matriz(int, int);//constructor
    void suma(Matriz);
    void resta(Matriz);
    void multiplicacion(Matriz);
};

Matriz::Matriz(int f, int c) : filas(f), columnas(c) {} //constructor

void Matriz::suma(Matriz B) {

}

void Matriz::resta(Matriz B) {

}

void Matriz::multiplicacion(Matriz B) {

}

bool validarInput(string fraccion, int& numerador, int& denominador) {

    //if sumas
    // if es resta
    //if es multi son distintas formas de saber si se puede operacionar 

}

void ingresoDeDatos() {

    int filasA, columnasA, filasB, columnasB;


    cout << "Matriz A" << endl;
    cout << "Filas: "   << endl;
    cin >> filasA;
    cout << "Columnas: " << endl;
    cin >> columnasA;

    cout << "Matriz B" << endl;
    cout << "Filas: " << endl;
    cin >> filasB;
    cout << "Columnas: " << endl;
    cin >> columnasB;

}



int main() {

    cout << "MATRICES CON OBJETOS" << endl << endl;
    cout << "Seleccione una operacion" << endl;
    cout << "1. Suma" << endl << "2. Resta" << endl << "3. Multiplicacion" << endl;

    int tipoOperacion;
    cin >> tipoOperacion; //input para los cases

    switch (tipoOperacion) {
    case 1:
        cout << endl << "Suma" << endl;

        break;

    case 2:
        cout << endl << "Resta" << endl;

        break;

    case 3:
        cout << endl << "Multiplicacion" << endl;

        break;

    default:
        cout << "Seleccione una operacion valida" << endl;
        break;
    }
}