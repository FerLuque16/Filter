#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LinkedList.h"
#include "Persona.h"

int parserText(LinkedList* lista)
{

    int returnAux=-1;

    Persona* persona;

    FILE* pFile;

    char nombre[4096];
    char edad[4096];
    char sexo[4096];
    int r;

    pFile=fopen("datos.csv","r");

    if(pFile!=NULL && lista!=NULL)
    {
        do
        {


            r=fscanf(pFile,"%[^,],%[^,],%[^\n]\n",nombre,edad,sexo);

            if(r==3)
            {


                persona=persona_newParametros(nombre,edad,sexo);

                if(persona!=NULL)
                {
                    ll_add(lista,persona);
                    returnAux=1;
                }
            }
            else
                break;

        }
        while(!feof(pFile));


    }

    pclose(pFile);

    return returnAux;

}

