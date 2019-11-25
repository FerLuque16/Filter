#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LinkedList.h"
#include "parser.h"
#include "Persona.h"


typedef struct
{
    char nombre[50];
    int edad;
    char sexo;

}ePersona;

LinkedList* ll_filter(LinkedList* this, int (*pFunc)(void*));
int filtrarHombres(void* p);
int filtrarMujeres(void* p);

int main()
{
    Persona* persona;
    LinkedList* lista;
    LinkedList* listaHombres;
    LinkedList* listaMujeres;
    char nombre[50];
    int edad;
    char sexo[10];
    int i;
    int len;

    lista=ll_newLinkedList();




    parserText(lista);





    listaHombres=ll_filter(lista,filtrarHombres);
    listaMujeres=ll_filter(lista,filtrarMujeres);

    for(i=0;i<ll_len(listaHombres);i++)
    {
        persona=ll_get(listaHombres,i);

        persona_getNombre(persona,nombre);
        persona_getEdad(persona,&edad);
        persona_getSexo(persona,sexo);

        printf("%s,%d,%s\n", nombre,edad,sexo);

    }

    system("pause");
    system("cls");

    for(i=0;i<ll_len(listaMujeres);i++)
    {
        persona=ll_get(listaMujeres,i);

        persona_getNombre(persona,nombre);
        persona_getEdad(persona,&edad);
        persona_getSexo(persona,sexo);

        printf("%s,%d,%s\n", nombre,edad,sexo);

    }




    return 0;
}

LinkedList* ll_filter(LinkedList* this, int (*pFunc)(void*))
{

    LinkedList* filterList;
    int i;

	if( this != NULL && pFunc != NULL)
	{
		filterList = ll_newLinkedList();

		if( filterList != NULL)
		{
			for(i=0; i < ll_len(this); i++)
			{
				if( pFunc(ll_get(this, i)))
				{
					ll_add(filterList, ll_get(this, i));
				}
            }
        }
    }

    return filterList;
}

int filtrarHombres(void* p)
{

    int ok = 0;
    ePersona* unaPersona;

    if(p != NULL){

        unaPersona = (ePersona*) p;

        if(unaPersona->sexo == 'm')
		{
            ok = 1;
        }
    }

    return ok;

}

int filtrarMujeres(void* p)
{

    int ok = 0;
    ePersona* unaPersona;
    if(p != NULL)
	{

        unaPersona = (ePersona*) p;

        if(unaPersona->sexo == 'f')
		{
            ok = 1;
        }
    }

    return ok;

}

