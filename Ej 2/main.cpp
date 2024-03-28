#include <iostream>

/*Dados dos valores a y b, enteros y distintos, se pide emitir un cartel apropiado que
informe cual es el mayor entre ellos.*/

using namespace std;

int main()
{
    int valor_1 = 0;
    int valor_2 = 0;
    int mayor = 0;

    cout << "Ingrese el primer valor: ";
    cin >> valor_1;

    cout << "Ingrese el segundo valor: ";
    cin >> valor_2;

    while(valor_1 == valor_2){

        cout << "Error los valores no pueden ser iguales, ingreselos nuevamente" << endl;
        cout << "Ingrese el primer valor: ";
        cin >> valor_1;

        cout << "Ingrese el segundo valor: ";
        cin >> valor_2;

    }


    if(valor_1 > valor_2){

        mayor = valor_1;
    }
    else{

        mayor = valor_2;
    }

    cout << "El valor mayor es: " << mayor;

    return 0;
}
