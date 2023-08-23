///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;

///ARRAYS ARREGLOS
///VECTORES MATRICES
///Un vector es un tipo de variable en la que baje un mismo nombre se pueden almacenar
///un conjunto de valores de manera simultánea. Los valores deben ser del mismo tipo
int main(){
    ///CARGAR LAS EDADES Y CALCULAR EL PROMEDIO
    int vEdades[5], i, suma, mayores;
    float promedio;
    mayores=suma=0;
    for(i=0;i<5;i++){
        cout<<"INGRESAR LA EDAD ";
        cin>>vEdades[i];
    }
    for(i=0;i<5;i++){
        suma+=vEdades[i];
    }

    promedio=suma/5.0;
    ///COMPARAR LAS EDADES CONTRA EL PROMEDIO Y CONTAR LAS QUE SON MAYORES
	for(i=0;i<5;i++){
        if(vEdades[i]>promedio){
            mayores++;
        }
    }
    cout<<"CANTIDAD DE ALUMNOS CON EDAD MAYOR A LA EDAD PROMEDIO "<<mayores;
	cout<<endl;
	///COMPARAR LAS EDADES CONTRA EL PROMEDIO Y CONTAR LAS QUE SON MAYORES
	for(i=0;i<5;i++){
        if(vEdades[i]>promedio){
            mayores++;
        }
    }
    cout<<"CANTIDAD DE ALUMNOS CON EDAD MAYOR A LA EDAD PROMEDIO "<<mayores;
	cout<<endl;
	int mayoresa25=0;
	///COMPARAR LAS EDADES CONTRA 25 Y CONTAR LAS QUE SON MAYORES
	for(i=0;i<5;i++){
        if(vEdades[i]>25){
            mayoresa25++;
        }
    }
    cout<<"CANTIDAD DE ALUMNOS CON EDAD MAYOR A 25 "<<mayoresa25;
	cout<<endl;

	///Edad mayor
	int mayor=vEdades[0];

	for(i=1;i<5;i++){
        if(vEdades[i]>mayor){
            mayor=vEdades[i];
        }
	}
	cout<<"EDAD MAYOR "<<mayor<<endl;

	int posMayor=0;

	for(i=1;i<5;i++){
        if(vEdades[i]>vEdades[posMayor]){
            posMayor=i;
        }
	}
	cout<<"EDAD MAYOR "<<vEdades[posMayor]<<endl;
	system("pause");
	return 0;
}
