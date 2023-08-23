///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;

///Dadas las edades de 5 alumnos de un curso, calcular e informar el promedio de edad

int main(){
    int i, edad, sumaEdades = 0;
    float promedioEdades;
    ///i=1 valor inicial de la variable que controla el ciclo
    ///i<=15 pregunta que determina si el ciclo sigue (verdadero) o no (falso)
    ///i++ incremento en 1 el valor de la variable i=i+1

    for(i=1;i<=5;i++){
        cout << "Edad: ";
        cin >> edad;

        sumaEdades = sumaEdades + edad;
    }
    promedioEdades = sumaEdades*1.0 / 5;
    cout << "Promedio de las edades: " << promedioEdades << endl;

	cout<<endl;
	system("pause");
	return 0;
}
