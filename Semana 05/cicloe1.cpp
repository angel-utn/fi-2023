///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int edad, i,maximo;
    maximo=-1;
    ///i=1 valor inicial de la variable que controla el ciclo
    ///i<=15 pregunta que determina si el ciclo sigue (verdadero) o no (falso)
    ///i++ incremento en 1 el valor de la variable i=i+1

    for(i=15;i>=1;i--){
        cout<<i<<endl;
        /*cout<<"INGRESE LA EDAD ";
        cin>>edad;
        if(edad>maximo){
            maximo=edad;
        }*/

    }
    ///cout<<"afuera del ciclo "<<i<<endl;
    //cout<<"EDAD MAXIMA: "<<maximo;
	cout<<endl;
	system("pause");
	return 0;
}
