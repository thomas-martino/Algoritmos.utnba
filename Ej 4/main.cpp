#include <iostream>
#include <cmath>

/*Hallar la medida de la hipotenusa de cada triángulo rectángulo, sabiendo las medidas de
sus catetos, el proceso finaliza cuando se ingrese un valor menor o igual a cero. Además
se requiere informar, cantidad de triángulos y porcentajes con hipotenusa mayor a 100,
promedio de las medidas de las hipotenusas, cantidad de triángulos y porcentajes con
hipotenusa menor o igual a 100.
*/

using namespace std;

int main()
{
    float cateto_1 = 0;
    float cateto_2 = 0;
    float hipotenusa = 0;
    int contTriangulos = 0;
    float acumuladorHip = 0;
    float promedioHip = 0;
    int contMayor = 0;
    int contMenor = 0;

    while(true){

        cout << "Ingrese cateto 1: ";
        cin >> cateto_1;

        if (cateto_1 <= 0){
            break;
        }

        cout << "Ingrese cateto 2: ";
        cin >> cateto_2;

        if (cateto_2 <= 0){
            break;
        }

        contTriangulos++;

        hipotenusa = sqrt(pow(cateto_1,2) + pow(cateto_2,2));
        acumuladorHip += hipotenusa;

        if(hipotenusa > 100){
            contMayor++;
        }
        else{
            contMenor++;
        }

    }

    promedioHip = acumuladorHip / contTriangulos;

    cout << "La cantidad de triangulos con hipotenusas mayor a 100 es: " << contMayor << endl;
    cout << "El porcentaje de hipotenusas mayor a 100 es: " << (contMayor * 100) / contTriangulos << endl;
    cout << "El promedio de las hipotenusas es: " << acumuladorHip / contTriangulos << endl;
    cout << "La cantidad de triangulos con hipotenusas menor o igual a 100 es: " << contMenor << endl;
    cout << "El porcentaje de hipotenusas mayor a 100 es: " << (contMenor * 100) / contTriangulos << endl;


    return 0;
}
/*Hallar la medida de la hipotenusa de cada triángulo rectángulo, sabiendo las medidas de
sus catetos, el proceso finaliza cuando se ingrese un valor menor o igual a cero. Además
se requiere informar, cantidad de triángulos y porcentajes con hipotenusa mayor a 100,
promedio de las medidas de las hipotenusas, cantidad de triángulos y porcentajes con
hipotenusa menor o igual a 100.
*/
