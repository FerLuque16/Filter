#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LinkedList.h"
#include "Persona.h"

Persona* persona_new()
    {
        Persona *this;

        this=malloc(sizeof (Persona));

		return this;
    }

Persona* persona_newParametros(char* nombreStr,char* edadStr,char* sexoStr)

    {
        Persona *persona;
		int edad;

		edad=atoi(edadStr);


		persona=persona_new();

		persona_setEdad(persona,edad);
		persona_setNombre(persona,nombreStr);
		persona_setSexo(persona,sexoStr);



		return persona;
    }

int persona_setEdad(Persona* this,int edad)
    {
        int retorno=-1;
        if(this!=NULL && edad>0)
            {
                this->edad=edad;
                retorno=0;

            }

        return retorno;
    }

int persona_getEdad(Persona* this,int* edad)
    {
        int retorno=-1;

        if(this!=NULL)
            {
                *edad=this->edad;
                retorno=0;
            }

        return retorno;
    }

int persona_setNombre(Persona* this,char* nombre)
    {
        int retorno=-1;

        if(this!=NULL )
            {
                strcpy(this->nombre,nombre);
                retorno=0;

            }
        return retorno;
    }

int persona_getNombre(Persona* this,char* nombre)
    {
        int retorno=-1;

        if(this!=NULL)
            {
                strcpy(nombre,this->nombre);
                retorno=0;
            }

        return retorno;
    }

int persona_setSexo(Persona* this,char* sexo)
    {
        int retorno=-1;

        if(this!=NULL)
            {
                strcpy(this->sexo,sexo);
                retorno=0;
            }

        return retorno;

    }

int persona_getSexo(Persona* this,char* sexo)
    {
        int retorno=-1;

        if(this!=NULL)
            {
                strcpy(sexo,this->sexo);
                retorno=0;
            }

        return retorno;
    }

