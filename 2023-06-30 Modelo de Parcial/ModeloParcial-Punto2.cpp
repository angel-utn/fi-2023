#include <iostream>
using namespace std;

int main(){
    int codigo, tipo;
    float tnIniciales, tnFinales;

    float consumo, totalConsumo, totalFerroso, totalNoFerroso, maximoConsumo;
    totalFerroso = totalNoFerroso = totalConsumo = maximoConsumo = 0;
    int noUtilizado, maximoTipo, maximoCodigo;
    noUtilizado = maximoTipo = 0;

    cout << "Codigo: ";
    cin >> codigo;

    while(codigo >= 0){
        cout << "Tipo: ";
        cin >> tipo;
        cout << "Tn al principio del mes: ";
        cin >> tnIniciales;
        cout << "Tn al final del mes: ";
        cin >> tnFinales;

        // A
        consumo = tnFinales - tnIniciales;
        totalConsumo += consumo;

        switch(tipo){
            case 1:
                totalFerroso += consumo;
            break;
            case 2:
                totalNoFerroso += consumo;
            break;
        }

        // B
        if (consumo == 0){
            noUtilizado++;
        }

        // C
        if (consumo > maximoConsumo){
            maximoConsumo = consumo;
            maximoTipo = tipo;
            maximoCodigo = codigo;
        }
    }
    
    cout << endl << "PUNTO A" << endl;
    cout << "Ferroso: " << totalFerroso*100/totalConsumo;
    cout << "No ferroso: " << totalNoFerroso*100/totalConsumo << endl;

    cout << endl << "PUNTO B" << endl;
    cout << "No utilizados: " << noUtilizado << endl;

    cout << endl << "PUNTO C" << endl;
    cout << "Codigo de metal: " << maximoCodigo;
    cout << "Tipo: " << maximoTipo << endl;

    return 0;
}