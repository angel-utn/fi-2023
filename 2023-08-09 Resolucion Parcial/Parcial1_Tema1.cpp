///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;
/*
Mes (1 a 12)
Número de adopción
Tipo de Animal (1 - Gato, 2 - Perro, 3 - Hamster, 4 - Caballo)
Edad del animal (entero)
Tipo de vivienda del adoptante (1 - Departamento, 2 - Casa, 3 - Casa Quinta)
Costo del traslado (real)
*/

int main(){
    int mes, numero, tipo, edad, vivienda;
    float costo;
    ///punto 1
    int adopto1=0,adopto2=0,adopto3=0,adopto4=0;
    ///punto 2
    float costoMax=0;
    int maxTipo, maxNumero;

    ///punto 3
    int sumaEdad=0, cuentaGatos=0;
    float promedio;

    ///PUNTO 4
    int gato=0, perro=0, hamster=0, caballo=0;
    cout<<"MES ";
    cin>>mes;
    while(mes!=0){
        cout<<"NUMERO ";
        cin>>numero;
        cout<<"TIPO ";
        cin>>tipo;
        cout<<"EDAD ";
        cin>>edad;
        cout<<"VIVIENDA ";
        cin>>vivienda;
        cout<<"COSTO ";
        cin>>costo;
        ///
        if(vivienda==1){
            switch(tipo){
                case 1: adopto1=1;
                        break;
                case 2: adopto2=1;
                        break;
                case 3: adopto3=1;
                        break;
                case 4: adopto4=1;
                        break;

            }
        }
        ///punto 2
        if(costo>costoMax){
            costoMax=costo;
            maxTipo=tipo;
            maxNumero=numero;
        }

        ///punto 3
        if(tipo==1){
            sumaEdad+=edad;
            cuentaGatos++;
        }
        ///punto 4
        if(mes<=3){
            switch(tipo){
                case 1: gato++;
                        break;
                case 2: perro++;
                        break;
                case 3: hamster++;
                        break;
                case 4: caballo++;
                        break;
            }
        }
        ///
        cout<<"MES ";
        cin>>mes;
    }
    ///informar los puntos
	if(adopto1==0){
        cout<<"NO SE ADOPTARON ANIMALES DE TIPO 1 EN DEPARTAMENTOS"<<endl;
	}
	if(adopto2==0){
        cout<<"NO SE ADOPTARON ANIMALES DE TIPO 2 EN DEPARTAMENTOS"<<endl;
	}
	if(adopto3==0){
        cout<<"NO SE ADOPTARON ANIMALES DE TIPO 3 EN DEPARTAMENTOS"<<endl;
	}
	if(adopto4==0){
        cout<<"NO SE ADOPTARON ANIMALES DE TIPO 4 EN DEPARTAMENTOS"<<endl;
	}
	///punto 2
	cout<<"COSTO MAYOR "<<costoMax<<endl;
	cout<<"ANIMAL DE TIPO "<<maxTipo<<endl;
	cout<<"NUMERO DE ADOPCION "<<maxNumero<<endl;
	///punto 3
	promedio=(float)sumaEdad/cuentaGatos;
	cout<<"EDAD PROMEDIO GATOS "<<promedio<<endl;
	///punto 4
	if(gato>perro && gato>hamster && gato>caballo){
        cout<<"SE ADOPTARON MAS GATOS";
	}
	else{
        if(perro>hamster && perro>caballo){
            cout<<"SE ADOPTARON MAS PERROS";
        }
        else{
            if(hamster>caballo) cout<<"SE ADOPTARON MAS HAMSTER";
            else cout<<"SE ADOPTARON MAS CABALLOS";
        }

	}
	cout<<endl;
	system("pause");
	return 0;
}
