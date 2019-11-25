#ifndef Persona_H_INCLUDED
#define Persona_H_INCLUDED

typedef struct
{
    char nombre[50];
    int edad;
    char sexo[5];

}Persona;
#endif

Persona* persona_new();
Persona* persona_newParametros(char* nombreStr,char* edadStr,char* sexoStr);
int persona_setEdad(Persona* this,int edad);
int persona_setNombre(Persona* this,char* nombre);
int persona_setSexo(Persona* this,char* sexo);
int persona_getSexo(Persona* this,char* sexo);
int persona_getNombre(Persona* this,char* nombre);
int persona_getEdad(Persona* this,int* edad);


