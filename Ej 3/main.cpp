#include <iostream>
#include <cmath>

/*Dados los catetos de un triángulo rectángulo, hallar la superficie de un cuadrado, siendo
uno de sus lados la medida de su hipotenusa, si ella es mayor a 100; caso contrario, es el
doble de su hipotenusa.*/

using namespace std;

int main()
{
    float cateto_1 = 0;
    float cateto_2 = 0;
    float lado = 0;
    float area = 0;

    //Se solicita y valida primer cateto
    cout << "Ingrese cateto 1: ";
    cin >> cateto_1;

    while(cateto_1 <= 0){

        cout << "Error. Los valores tienen que ser positivos,ingrese nuevamente cateto 1: " << endl;
        cin >> cateto_1;
    }

    //Se solicita y valida segundo cateto
    cout << "Ingrese cateto 2: ";
    cin >> cateto_2;

    while(cateto_2 <= 0){

        cout << "Error. Los valores tienen que ser positivos,ingrese nuevamente cateto 2: " << endl;
        cin >> cateto_2;
    }

    //Calculo hipotenusa
    lado = sqrt(pow(cateto_1,2) + pow(cateto_2,2));//la hipotenusa va aser el lado del cuadrado

    //Calculo area cuadrado
    if(lado > 100){
        area = lado * lado;
    }
    else{
        area = pow(lado * 2,2);//Se corrige calculo segun condicion
    }

    cout << "El area del cuadrado es: " << area;

    return 0;
}
