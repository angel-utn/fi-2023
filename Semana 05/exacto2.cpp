///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:
///Dadas las edades de los 15 alumnos de un curso
///calcular e informar el promedio de edad
# include<iostream>
# include<cstdlib>
using namespace std;
int main(){
    int edad, i, suma=0;
    float promedio;
    ///i=1 valor inicial de la variable que controla el ciclo
    ///i<=15 pregunta que se hace el programa para determinar si el ciclo se vuelve a ejecutar
    ///i++ i=i+1 incremento determina en cuanto va a aumentar la variable con cada vuelta del ciclo
    for(i=1;i<=5;i++){
        cout<<"INGRESE LA EDAD ";
        cin>>edad;
        suma=suma+edad;
    }
    ///promedio=1.00*suma/5;
    promedio=(float)suma/5;
	cout<<"PROMEDIO "<<promedio;
	cout<<endl;
	system("pause");
	return 0;}
