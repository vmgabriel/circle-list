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
        Nodo<T> *cab, *z;
    public:
        //Propiedades
        
        //Constructor y Destructor
        Lista()
        {
            cab=new Nodo<T>();
            z=new Nodo<T>();
            
            z->ant=NULL;
            z->sig=NULL;            
            
            cab->ant=NULL;
            z->sig=NULL;
        }
        
        Lista(T dato)
        {
            Nodo<T> *temp;
            temp=new Nodo<T>();
            
            cab=new Nodo<T>();
            z=new Nodo<T>();
            
            temp->info=dato;
            temp->sig=z;
            
            cab->sig=temp;
            temp->ant=cab;
        }
        
        ~Lista();
        
        //Metodos
        
        //Se usa cuando se genera la sobrecarga de constructores
        void primerelem(Nodo<T> *dato)
        {
            dato->sig=z;
            
            cab->sig=dato;
        }
        
        void insertar(Nodo<T> *dato)
        {
            if (this->cantelem() == 0)
            {
                this->primerelem(dato);
            }
            else
            {
                Nodo<T> *aux, *temp;
                temp=(cab->sig);
                aux=temp->sig;
                
                while (aux != z)
                {
                    aux=aux->sig;
                    temp=temp->sig;     
                }
                
                dato->sig=z;
                dato->ant=temp;
                temp->sig=dato;
            }
        }
        
        bool modificar(int pos, Nodo<T> *dato)
        {
            bool elem=false;
	    if ((pos >= 0) && (pos < cantelem()))
	    {
		Nodo<T> *aux;
		aux=cab->sig;

		for (int i=0;i<pos;i++)
		{
		    aux=aux->sig;
		}

		(dato->ant)=(aux->ant);
		(dato->sig)=(aux->sig);

		(aux->sig)->ant=dato;
		(aux->ant)->sig=dato;
		
		if ((aux->info) != (dato->info))
		{
		    elem=true;
		}
	    }
	    return elem;bool a;
            a=false;
            return a;
        }
        
        int cantelem()
        {
            int cant=0;
            Nodo<T> *aux;
            aux=(cab->sig)->sig;
            
            while (aux != NULL)
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
		Nodo<T> *aux, *temp;
		aux=cab->sig;

		for (int i=0;i<pos;i++)
		{
		    aux=aux->sig;
		}

		temp=aux->ant;
		temp->sig=aux->sig;
		temp=aux->sig;
		temp->ant=aux->ant;
		
		if (cantelem() != n)
		{
		    elem=true;
		}
	    }
	    return elem;
        }
        
        Nodo<T> * seleccionar(int pos)
        {
	    Nodo<T> *elem;
	    if ((pos >= 0) && (pos < cantelem()))
	    {
		int i=0;
		Nodo<T> *aux;
		aux=cab->sig;

		while (aux != z)
		{
		    if (i == pos){break;}
		    aux=aux->sig;
		    i++;
		}
		elem=aux;
	    }
	    return elem;
        }
};
#endif
