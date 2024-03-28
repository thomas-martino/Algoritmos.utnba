#include <iostream>
#include <cmath>

/*Dados los catetos a y b ambos reales y positivos, de un triángulo rectángulo, se solicita
hallar la medida de su hipotenusa.*/

using namespace std;

int main()
{
    float cateto_1 = 0;
    float cateto_2 = 0;
    float resultado = 0;

    cout << "Ingrese cateto 1: ";
    cin >> cateto_1;

    while(cateto_1 < 0){

        cout << "Error. Los valores tienen que ser positivos,ingrese nuevamente cateto 1: " << endl;
        cin >> cateto_1;
    }

    cout << "Ingrese cateto 2: ";
    cin >> cateto_2;

    while(cateto_2 < 0){

        cout << "Error. Los valores tienen que ser positivos,ingrese nuevamente cateto 2: " << endl;
        cin >> cateto_2;
    }

    resultado = sqrt(pow(cateto_1,2) + pow(cateto_2,2));

    cout << "La medida de la hipotenusa es: " << resultado;

    return 0;
}
