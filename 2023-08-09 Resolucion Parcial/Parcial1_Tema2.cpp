///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>
using namespace std;

int main(){
    int numero, tren, dia, mes, anio, horario, duracion, linea;

    /// A
    int c1, c2, c3, c4, c5, totalViajes;
    c1=c2=c3=c4=c5=totalViajes=0;
    /// B
    int minDuracion = -1, minNumeroTren;
    /// C
    int ctren14mes3 = 0;
    /// D
    int cn1, cn2, cn3, cn4, cn5, cantidadLineasNoNocturnas = 0;
    cn1=cn2=cn3=cn4=cn5=0;

    cout << "Numero de servicio: ";
    cin >> numero;

    while (numero >= 0){
        cout << "Tren: ";
        cin >> tren;
        cout << "Dia: ";
        cin >> dia;
        cout << "Mes: ";
        cin >> mes;
        cout << "Anio: ";
        cin >> anio;
        cout << "Horario: ";
        cin >> horario;
        cout << "Duracion del viaje: ";
        cin >> duracion;
        cout << "Linea: ";
        cin >> linea;

        /// Resolverian los ejercios A-D
        /// A
        switch(linea){
            case 1:
                c1++;
                if (horario == 3){
                    cn1++;
                }
            break;
            case 2:
                c2++;
                if (horario == 3){
                    cn2++;
                }
            break;
            case 3:
                c3++;
                if (horario == 3){
                    cn3++;
                }
            break;
            case 4:
                c4++;
                if (horario == 3){
                    cn4++;
                }
            break;
            case 5:
                c5++;
                if (horario == 3){
                    cn5++;
                }
            break;
        }
        /// B
        if (mes == 7){
            if (minDuracion == -1 || duracion < minDuracion){
                minDuracion = duracion;
                minNumeroTren = tren;
            }
        }
        /// C
        if (tren == 14 && mes == 3){
            ctren14mes3++;
        }
        /// D




        cout << "Numero de servicio: ";
        cin >> numero;
    }
    cout << endl;
    cout << "PUNTO A" << endl;
    totalViajes = c1+c2+c3+c4+c5;
    if (totalViajes != 0){
        cout << "Linea #1: " << c1*100.0/totalViajes << endl;
        cout << "Linea #2: " << c2*100.0/totalViajes << endl;
        cout << "Linea #3: " << c3*100.0/totalViajes << endl;
        cout << "Linea #4: " << c4*100.0/totalViajes << endl;
        cout << "Linea #5: " << c5*100.0/totalViajes << endl;
    }

    cout << endl;
    cout << "PUNTO B" << endl;
    if (minDuracion != -1){
        cout << "Viaje mas corto de Julio: " << minDuracion << endl;
        cout << "Tren: " << minNumeroTren;
    }
    else{
        cout << "No hubo viajes en el mes de Julio" << endl;
    }

    cout << endl;
    cout << "PUNTO C" << endl;
    cout << "Cantidad: " << ctren14mes3 << endl;

    if (cn1 == 0){
        cantidadLineasNoNocturnas++;
    }
    if (cn2 == 0){
        cantidadLineasNoNocturnas++;
    }
    if (cn3 == 0){
        cantidadLineasNoNocturnas++;
    }
    if (cn4 == 0){
        cantidadLineasNoNocturnas++;
    }
    if (cn5 == 0){
        cantidadLineasNoNocturnas++;
    }

    cout << "PUNTO D" << endl;
    cout << "Cantidad lineas sin servicios nocturnos: " << cantidadLineasNoNocturnas << endl;

    cout<<endl;
    system("pause");
    return 0;
}
