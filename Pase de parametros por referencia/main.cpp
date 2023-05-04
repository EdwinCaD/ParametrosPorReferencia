///EDWIN CAMPOS DRAGUSIN
///SEGUNDO SEMESTRE DE LA LICENCIATURA EN CIENCIAS COMPUTACIONALES
///MATERIA: ESTRUCTURA DE DATOS

#include <iostream>
#include <locale.h>

using namespace std;

void valNuevo(int&,int&);
void intercambio(int&,int&);

int main()
{
    system("title EJERCICIO TRABAJADO EN EL VIDEO DE LA PLATAFORMA");
    system("cls");
    setlocale(LC_CTYPE,"Spanish");

        cout<<"\t\t"<<"/////////////////////EJERCICIO PLANTEADO EN EL VIDEO DE LA PLATAFORMA GARZA//////////////////"<<endl<<endl;
        int num1,num2;
        cout<<"\t"<<"DIGITE DOS NÚMEROS: "<<endl;
        cout<<"\t";cin>>num1;
        cout<<"\t";cin>>num2;
        cout<<endl;
        valNuevo(num1,num2);
        cout<<endl;
        cout<<"\t"<<"El nuevo valor del primer número es: "<<num1<<endl;
        cout<<"\t"<<"El nuevo valor del segundo número es: "<<num2<<endl;

    system("pause");
    system("cls");
    system("color 0a");
    system("title EJERCICIO PLANTEADO EN LA PLATAFORMA GARZA");

        int Val1,Val2;
        cout<<"\t\t"<<"/////////////////////EJERCICIO DE PRÁCTICA PARA EL TEMA//////////////////"<<endl<<endl;

        cout<<"\t"<<"DIGITE LOS DOS VALORES A SER INTERCAMBIADOS: "<<endl;
        cout<<"\t";cin>>Val1;
        cout<<"\t";cin>>Val2;

        cout<<endl;
        cout<<"\t"<<"EL VALOR 1 ES: "<<Val1<<endl;
        cout<<"\t"<<"EL VALOR 2 ES: "<<Val2<<endl;

        intercambio(Val1,Val2);
        cout<<endl;
        cout<<"\t"<<"EL NUEVO VALOR 1 ES: "<<Val1<<endl;
        cout<<"\t"<<"EL NUEVO VALOR 2 ES: "<<Val2<<endl;



    return 0;
}

void valNuevo(int& xnum,int& ynum){
    cout<<"\t"<<"El valor del primer numero es: "<<xnum<<endl;
    cout<<"\t"<<"El valor del segundo numero es: "<<ynum<<endl;

    xnum=89;
    ynum=45;
}

void intercambio(int& x, int& y){
    int a=x,b=y;
    x=b;
    y=a;
}
