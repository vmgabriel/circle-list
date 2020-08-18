#include <iostream>

#ifndef LISTA
#define LISTA
 
template<typename T>
struct Nodo
{
    T info;
    Nodo<T> *sig, *ant;
};

template<typename T>
class Lista
{   
    private:
        Nodo<T> *cab;
    public:
        //Constructor y Destructor
        Lista()
        {
            cab=new Nodo<T>;
	    
            cab->ant=NULL;
	    cab->sig=cab;
        }
        
        //~Lista();
        
        //Metodos
        
        //Se usa cuando se genera la sobrecarga de constructores
        void primerelem(T dato)
        {
	    Nodo<T> *temp;
	    temp=new Nodo<T>;

	    temp->info=dato;
	    temp->ant=cab;
	    temp->sig=cab;

	    cab->ant=temp;
	    cab->sig=temp;
        }
        
        void insertarFin(T dato)
        {
            if (this->cantelem() == 0)
            {
                this->primerelem(dato);
            }
            else
            {
		Nodo<T> *temp, *aux, *caja;
		temp=new Nodo<T>;

		temp->info=dato;

		aux=cab->sig;
		caja=cab;

		while(aux != cab)
		{
		    aux=aux->sig;
		    caja=caja->sig;
		}

		temp->ant=caja;
		temp->sig=cab;

		cab->ant=temp;
		caja->sig=temp;
            }
        }

	void insertarPos(T dato, int pos)
        {
	    int huella=0;
	    Nodo<T> *aux, *temp;

	    aux=cab;

	    for (int i=0;i<=huella;i++)
	    {
		aux=aux->sig;
	    }

	    temp=new Nodo<T>;
	    temp->info=dato;
	    temp->ant=aux->ant;
	    temp->sig=aux;

	    (aux->ant)->sig=temp;
	    aux->ant=temp;
        }
        
        bool modificar(int pos, T dato)
        {
	    bool elem=false;
	    
	    if ((pos>=0) && (pos < cantelem()))
	    {
		T temp;
		Nodo<T> *aux, *cont;

		aux=cab->sig;

		for (int i=0;i<pos;i++)
		{
		    aux=aux->sig;
		}

		cont=new Nodo<T>;

		cont->info=dato;
		cont->ant=aux->ant;
		cont->sig=aux->sig;

		temp=aux->info;

		(aux->ant)->sig=cont;
		(aux->sig)->ant=cont;

		if (temp == dato)
		{
		    elem=true;
		}
	    }
	    
	    return elem;
        }
        
        int cantelem()
        {
            int cant=0;
            Nodo<T> *aux;
	    aux=cab->sig;

	    while(aux != cab)
	    {
		aux=aux->sig;
		cant++;
	    }
            
            return cant;
        }
        
        bool borrar(int pos)
        {
	    bool elem=false;
	    if ((pos >= 0) && (pos < cantelem()))
	    {
		int n = cantelem();

		Nodo<T> *aux;

		aux=cab;

		for (int i=0;i<pos;i++)
		{
		    aux=aux->sig;
		}

		(aux->ant)->sig=aux->sig;
		(aux->sig)->ant=aux->ant;
		
		if (cantelem() != n)
		{
		    elem=true;
		}
	    }
	    return elem;
        }
        
        T seleccionar(int pos)
        {
	    T dato;
	    if ((pos >= 0) && (pos < cantelem()))
	    {
		int i=0;
		Nodo<T> *aux;
		aux=cab->sig;

		while (aux != cab)
		{
		    if (i == pos){break;}
		    aux=aux->sig;
		    i++;
		}
		dato=aux->info;
	    }
	    return dato;
        }
};
#endif
