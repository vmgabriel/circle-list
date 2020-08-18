#include <cstdlib>
#include <iostream>
#include <time.h>
#include <math.h> 
#include "archi.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
    Lista<int> lista;

    srand(time(NULL));
    int longitud= 10+rand()%41;

    for(int i=0; i<longitud; i++) lista.insertarFin(1+(rand()%151));

    longitud=lista.cantelem();

    cout<<"[ ";
    for (int i=0; i<longitud; i++)
    {
	cout<<lista.seleccionar(i)<<" ";
    }
    cout<<"]"<<endl;

    if(longitud > 0)
    {
	for (int i = 0; i<longitud ; i++)
	{
	    for (int j = i+1; j<longitud ; j++)
	    {
		int dato1=lista.seleccionar(j);
		int dato2=lista.seleccionar(i);

		if (dato1 > dato2)
		{
		    lista.modificar(i,dato1);
		    lista.modificar(j,dato2);
		}
	    }
	}
    }

    cout<<"[ ";
    for (int i=0; i<longitud; i++)
    {
	cout<<lista.seleccionar(i)<<" ";
    }
    cout<<"]"<<endl;
    
    system("pause");
    return 0;
}
