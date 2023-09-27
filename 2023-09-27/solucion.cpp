#include <iostream>
using namespace std;

int main(){

    int dia, duracion, especialidad;
    float costo;

    // A
    int consultasEspecialidadesPrimerSemana[11] = {};

    // B
    int especialidadesDuracionMayorA40[11] = {};
    int cantidadEspecialidades = 0;

    // C
    float recaudacion[31] = {};

    // D
    int consultasPrimerQuincenaMayor30Minutos = 0;

    cout << "Dia: ";
    cin >> dia;

    while (dia != 0){
        cout << "Especialidad: ";
        cin >> especialidad;

        cout << "Duracion: ";
        cin >> duracion;

        cout << "Costo: $";
        cin >> costo;

        // Procesamos A, B, C y D

        if (duracion > 40){
            especialidadesDuracionMayorA40[especialidad-10]++;
        }

        if (dia <= 7){
            consultasEspecialidadesPrimerSemana[especialidad-10]++;
        }

        if (dia <= 15 && duracion > 30){
            consultasPrimerQuincenaMayor30Minutos++;
        }

        recaudacion[dia - 1] += costo;


        cout << "Dia: ";
        cin >> dia;
    }
    
    int i;
    cout << endl << "Punto A" << endl;
    for(i=0; i<11; i++){
        if (consultasEspecialidadesPrimerSemana[i] == 0){
            cout << i + 10 << " ";
        }
    }
    cout << endl;
    cout << endl << "Punto B" << endl;
    for(i=0; i<11; i++){
        if (especialidadesDuracionMayorA40[i] > 0){
            cantidadEspecialidades++;
        }
    }
    cout << "Cantidad: " << cantidadEspecialidades << endl;

    cout << endl << "Punto C" << endl;
    for(i=0; i<31; i++){
        cout << "Dia " << i+1 << endl;
        cout << "Recaudacion $ " << recaudacion[i] << endl;
        cout << endl;
    }
    cout << endl << "Punto D" << endl;
    cout << "Cantidad: " << consultasPrimerQuincenaMayor30Minutos << endl;

    return 0;
}