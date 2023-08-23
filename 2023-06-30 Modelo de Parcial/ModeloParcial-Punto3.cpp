#include <iostream>
using namespace std;

int main(){
    int productor, anio, cerdos, ovejas, vacas, i;
    const int CANT_PRODUCTORES = 10;
    const int CANT_ANIOS = 5;

    int totalAnimales, codProductorMinimo, minimaProduccion, totalCerdos, totalOvejas, totalVacas, cantAniosSinCerdos;
    totalCerdos = totalOvejas = totalVacas = 0;

    for(i=1; i<=CANT_PRODUCTORES; i++){

        cout << "Codigo de productor: ";
        cin >> productor;
        cantAniosSinCerdos = 0;
        for(anio=1; anio<=CANT_ANIOS; anio++){
            cout << "Año: " << anio << endl;
            cout << "Cantidad de nacimientos de cerdos: ";
            cin >> cerdos;
            cout << "Cantidad de nacimientos de ovejas: ";
            cin >> ovejas;
            cout << "Cantidad de nacimientos de vacas: ";
            cin >> vacas;

            totalAnimales = cerdos + ovejas + vacas;
            // A
            if (cerdos == 0){
                cantAniosSinCerdos++;
            }
            // B
            if (anio == 1){
                if (i == 1 || totalAnimales < minimaProduccion){
                    codProductorMinimo = productor;
                    minimaProduccion = totalAnimales;
                }   
            }

            // C
            totalCerdos += cerdos;
            totalOvejas += ovejas;
            totalVacas  += vacas;
        }
        cout << endl << "PUNTO A" << endl;
        cout << "Productor: " << productor << endl;
        cout << "Años sin cerdos: " << cantAniosSinCerdos << endl << endl;
    }
    cout << endl << "PUNTO B" << endl;
    cout << "Productor: " << codProductorMinimo << endl;
    cout << endl << "PUNTO C" << endl;
    int total = ovejas + cerdos + vacas;
    cout << "Cerdos: " << (float)totalCerdos*100/total << endl;
    cout << "Ovejas: " << (float)totalOvejas*100/total << endl;
    cout << "Vacas : " << (float)totalVacas*100/total << endl;

    return 0;
}