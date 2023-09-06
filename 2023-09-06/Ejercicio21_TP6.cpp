#include <iostream>
using namespace std;

int main(){
    const int CANT_EMPLEADOS = 5;
    float valoresHora[CANT_EMPLEADOS], valorHora;
    float sueldosEmpleados[CANT_EMPLEADOS] = {};
    int i, empleado, horasTrabajadas;

    cout << endl;
    cout << "CARGA DE EMPLEADOS: " << endl;
    cout << "---------------------" << endl;
    for(i=0; i<CANT_EMPLEADOS; i++){
        cout << "Nro Empleado: ";
        cin >> empleado;

        cout << "Valor hora $";
        cin >> valorHora;
        valoresHora[empleado-1] = valorHora;

        //cin >> valoresHora[empleado-1]; //Alternativa
    }

    cout << "CARGA DE HORAS TRABAJADAS: " << endl;
    cout << "----------------------------" << endl;
    cout << "Empleado: ";
    cin >> empleado;
    
    while (empleado != 0){
        cout << "Horas trabajadas: ";
        cin >> horasTrabajadas;
        sueldosEmpleados[empleado-1] = horasTrabajadas * valoresHora[empleado-1];

        cout << "Empleado: ";
        cin >> empleado;
    }
    cout << endl;
    cout << "SUELDOS DE EMPLEADOS:" << endl;
    cout << "---------------------" << endl;

    for(i=0; i<CANT_EMPLEADOS; i++){
        if (sueldosEmpleados[i] > 0){
            cout << "Empleado #" << i+1 << "   Sueldo $ " << sueldosEmpleados[i] << endl;
        }
    }

    return 0;
}