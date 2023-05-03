///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int edad, maximo, i;
    maximo=-1;
    ///i=1 valor inicial de la variable que controla el ciclo
    ///i<=10 pregunta que se hace el programa para determinar si el ciclo se vuelve a ejecutar
    ///i++ i=i+1 incremento determina en cuanto va a aumentar la variable con cada vuelta del ciclo
    for(i=1;i<=10;i++){
        cout<<i<<endl;
        /*cout<<"INGRESE LA EDAD: ";
        cin>>edad;
        if(edad>maximo){
            maximo=edad;
        }*/
    }
        cout<<"FUERA DEL CICLO "<<i<<endl;
    for(i=1;i<=5;i++){
        cout<<i<<endl;
        /*cout<<"INGRESE LA EDAD: ";
        cin>>edad;
        if(edad>maximo){
            maximo=edad;
        }*/
    }
    ///cout<<"LA EDAD MAXIMA ES "<<maximo<<endl;
	cout<<endl;
	system("pause");
	return 0;
}
