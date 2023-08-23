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
    int mEdades[5][20], i, j, suma, mayores;
    float promedio;
    mayores=suma=0;

    for(i=0;i<5;i++){
            for(j=0;j<20;j++){
                cout<<"INGRESAR LA EDAD ";
                cin>>mEdades[i][j];
            }

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
	system("pause");
	return 0;
}
