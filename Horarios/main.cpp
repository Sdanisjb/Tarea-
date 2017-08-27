#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int hh,mm,ss;
    int hh2,mm2,ss2;
    int segundos,segundos2;
    int total;
    int totalhh,totalmm,totalss;

	cout<<"Ingrese horas,minutos y segundos de entrada separados por un espacio"<<endl;
    cin>>hh>>mm>>ss;
	cout<<"Ingrese horas,minutos y segundos de salida separados por un espacio"<<endl;
    cin>>hh2>>mm2>>ss2;

    segundos=hh*3600+mm*60+ss;
    segundos2=hh2*3600+mm2*60+ss2;




    if(segundos2<segundos){
        total=segundos-segundos2;
        total=total-86400;//Numero de segundos en un día//
    }
    else{
        total=segundos2-segundos;
    }

    totalhh=total/3600;
    totalmm=(total-totalhh*3600)/60;
    totalss=total-(totalhh*3600+totalmm*60);
	
	cout<<"El tiempo total transcurrido fue:"<<endl;
    cout<<"Horas: "<<abs(totalhh)<<endl;
    cout<<"Minutos: "<<abs(totalmm)<<endl;
    cout<<"Segundos: "<<abs(totalss)<<endl;



}
