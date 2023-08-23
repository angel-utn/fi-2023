///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    ///INGRESAR LOS 20 DATOS Y CALCULAR EL PROMEDIO
    int i, vEdades[5], suma, mayores;
    float promedio;
    for(i=0;i<5;i++){
        cout<<"INGRESE LA EDAD DEL ALUMNO ";
        cin>>vEdades[i];
    }
    ///CALCULO DEL PROMEDIO
    suma=0;
    for(i=0;i<5;i++){
        suma+=vEdades[i];
    }
    promedio=suma/5.0;
    ///COMPARAR CADA EDAD CON EL PROMEDIO Y CONTAR
    mayores=0;
    for(i=0;i<5;i++){
        if(vEdades[i]>promedio){
            mayores++;
        }
    }
    cout<<"LA CANTIDAD DE ALUMNOS CON EDAD MAYOR AL PROMEDIO ES ";
    cout<<mayores;
	cout<<endl;
	system("pause");
	return 0;
}
