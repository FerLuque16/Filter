#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LinkedList.h"
#include "Employee.h"


/**
*\brief Solicita memoria para un bloque de estructura la estructura Employee
*\return Retorna la posicion de memoria a la estructura
*/
Persona* persona_new()
    {
        Persona *this;

        this=malloc(sizeof (Persona));

		return this;
    }

/**
*\brief Transforma y establece todos los datos de la estructura con los parametros recibidos
*\param char* idStr Es el id del empleado
*\param char* nombreStr Es el nombre del empleado
*\param char* horasTrabajadasStr Es la cantidad de horas trabajadas del empleado
*\param char* sueldoStr Es el sueldo del empleado
* \return Retorna la posicion de memoria a la estructura
*/

Persona* persona_newParametros(char* nombreStr,char* edadStr,char* sexoStr)

    {
        Persona *persona;
		int edad;

		edad=atoi(edadStr);


		persona=persona_new();

		employee_setId(empleado,id);
		employee_setNombre(empleado,nombreStr);
		employee_setHorasTrabajadas(empleado,horaT);
		employee_setSueldo(empleado,sueldo);



		return empleado;
    }

/**
*\brief Libera la memoria reservada que tenia la estructura Employee
*\param Employee* this Es el puntero a la estructura Employee
*/

void employee_delete(Employee* this)
{
        if(this!=NULL)
        {
            free(this);
        }



}

/**
*\brief Establece el id en la estructura a traves del puntero a la estructura
*\param Employee* this Es el puntero a la estructura Employee
*\param  int id Es el id a establecer
*\return Retorna [0] si estableció el dato o [-1] si no lo hizo
*/

int persona_setEdad(Employee* this,int edad)
    {
        int retorno=-1;
        if(this!=NULL && edad>0)
            {
                this->edad=edad;
                retorno=0;

            }

        return retorno;
    }

/**
*\brief Retorna el id del empleado a traves del puntero a id
*\param Employee* this Es el puntero a la estructura Employee
*\param  int* id Es el puntero a id en donde se espera recibir el dato original de la estructura
*\return Retorna [0] si estableció el dato o [-1] si no lo hizo
*/

int persona_getEdad(Employee* this,int* edad)
    {
        int retorno=-1;

        if(this!=NULL)
            {
                *edad=this->edad;
                retorno=0;
            }

        return retorno;
    }


/**
*\brief Establece el nombre en la estructura a traves del puntero a la estructura
*\param Employee* this Es el puntero a la estructura Employee
*\param  char* nombre Es el nombre a establecer
*\return Retorna [0] si estableció el dato o [-1] si no lo hizo
*/

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

/**
*\brief Retorna el nombre del empleado a traves del puntero a nombre
*\param Employee* this Es el puntero a la estructura Employee
*\param  char* nombre Es el puntero a nombre en donde se espera recibir el dato original de la estructura
*\return Retorna [0] si estableció el dato o [-1] si no lo hizo
*/
int employee_getNombre(Employee* this,char* nombre)
    {
        int retorno=-1;

        if(this!=NULL)
            {
                strcpy(nombre,this->nombre);
                retorno=0;
            }

        return retorno;
    }

/**
*\brief Establece las horas trabajadas del empleado a traves del puntero a la estructura
*\param Employee* this Es el puntero a la estructura Employee
*\param  int horasTrabajadas Son las horas trabajadas a establecer
*\return Retorna [0] si estableció el dato o [-1] si no lo hizo
*/
int employee_setSexo(Employee* this,char* sexo)
    {
        int retorno=-1;

        if(this!=NULL)
            {
                this->sexo=sexo;
                retorno=0;
            }

        return retorno;

    }

/**
*\brief Retorna las horas tabajadas del empleado a traves del puntero a horasTrabajadas
*\param Employee* this Es el puntero a la estructura Employee
*\param  int* horasTrabajadas Es el puntero a horasTrabajadas en donde se espera recibir el dato original de la estructura
*\return Retorna [0] si estableció el dato o [-1] si no lo hizo
*/
int employee_getHorasTrabajadas(Employee* this,int* horasTrabajadas)
    {
        int retorno=-1;

        if(this!=NULL)
            {
                *horasTrabajadas=this->horasTrabajadas;
                retorno=0;
            }

        return retorno;
    }

/**
*\brief Establece el sueldo en la estructura a traves del puntero a la estructura
*\param Employee* this Es el puntero a la estructura Employee
*\param  int sueldo Es el sueldo a establecer
*\return Retorna [0] si estableció el dato o [-1] si no lo hizo
*/

int employee_setSueldo(Employee* this,int sueldo)
    {
        int retorno=-1;

        if(this!=NULL)
            {
                this->sueldo=sueldo;
                retorno=0;
            }

        return retorno;

    }

/**
*\brief Retorna el sueldo del empleado a traves del puntero a sueldo
*\param Employee* this Es el puntero a la estructura Employee
*\param  int* sueldo Es el puntero a sueldo en donde se espera recibir el dato original de la estructura
*\return Retorna [0] si estableció el dato o [-1] si no lo hizo
*/
int employee_getSueldo(Employee* this,int* sueldo)
    {
        int retorno=-1;

        if(this!=NULL)
            {
                *sueldo=this->sueldo;
                retorno=0;
            }

        return retorno;
    }

/**
*\brief Compara los nombres entre 2 empleados
*\param void* arg1
*\param void* arg2
*\param return Retorna [0] si el nombre es igual
*              Retorna [>0] si el primer nombre es mayor que el segundo
*              Retorna [<0] si el primer nombre es menor que el segundo
*/

int employee_compareName(void* arg1,void* arg2)
{
    Employee* emp1;
    Employee* emp2;

    emp1=(Employee*) arg1;
    emp2=(Employee*) arg2;

    return strcmp(emp1->nombre,emp2->nombre);

}


/**
*\brief Compara las horas trabajadas entre 2 empleados
*\param void* arg1
*\param void* arg2
*\param return Retorna [0] si los 2 empleados trabajaron las mismas horas
*              Retorna [1] si el primer empleado trabajo mas que el segundo empleado
*              Retorna [-1] si el primer empleado trabajo menos que el segundo empleado
*/

int employee_compareHorasTrabajadas(void* arg1, void* arg2)
{
    int retorno=-1;
    Employee* emp1;
    Employee* emp2;

    emp1=(Employee*) arg1;
    emp2=(Employee*) arg2;

    if(emp1->horasTrabajadas > emp2->horasTrabajadas)
    {
        retorno=1;
    }
    else if(emp1->horasTrabajadas == emp2->horasTrabajadas)
    {
        retorno=0;
    }


    return retorno;
}

/**
*\brief Compara el sueldo entre 2 empleados
*\param void* arg1
*\param void* arg2
*\param return Retorna [0] si los 2 empleados tienen el mismo sueldo
*              Retorna [1] si el primer empleado tiene mayor sueldo que el segundo empleado
*              Retorna [-1] si el primer empleado tiene menor sueldo que el segundo empleado
*/

int employee_compareSueldo(void* arg1, void* arg2)
{
    int retorno=-1;
    Employee* emp1;
    Employee* emp2;

    emp1=(Employee*) arg1;
    emp2=(Employee*) arg2;

    if(emp1->sueldo>emp2->sueldo)
    {
        retorno=1;
    }
    else if(emp1->sueldo==emp2->sueldo)
    {
        retorno=0;
    }

    return retorno;

}

/**
*\brief Compara el id entre 2 empleados
*\param void* arg1
*\param void* arg2
*\param return Retorna [0] si los 2 empleados tienen el mismo id
*              Retorna [1] si el primer empleado tiene un id mayor que el segundo empleado
*              Retorna [-1] si el primer empleado tiene un id menor que el segundo empleado
*/

int employee_compareId(void* arg1, void* arg2)
{
    int retorno=-1;
    Employee* emp1;
    Employee* emp2;

    emp1=(Employee*) arg1;
    emp2=(Employee*) arg2;

    if(emp1->id>emp2->id)
    {
        retorno=1;
    }
    else if(emp1->id==emp2->id)
    {
        retorno=0;
    }

    return retorno;

}

/**
*\brief Imprime a un solo empleado
*\param Employee* this Es el puntero a la estructura del empleado
*/
void employee_printEmployee(Employee* this)
{
    int id;
    char nombre[128];
    int horasTrabajadas;
    int sueldo;

    employee_getId(this,&id);
    employee_getNombre(this,nombre);
    employee_getHorasTrabajadas(this,&horasTrabajadas);
    employee_getSueldo(this,&sueldo);

    printf("%5s %10s %10s %10s\n" ,"ID","NOMBRE","HORAS","SUELDO");
    printf("\n%5d %10s %10d %10d\n" ,id,nombre,horasTrabajadas,sueldo);
    system("pause");
}

/**
*\brief Despliega un menu de opciones para editar al empleado
*\param Employee* this Es el puntero a la estructura del empleado
*\return Retorna [0] si no edito ningun dato o retorna [1] si edito algun dato
*/

int employee_menuEdit(Employee* this)
{
    char nombre[128];
    int horasTrabajadas;
    int sueldo;
    int option;
    char rta1[21],rta2[21],rta3[21];
    int retorno=0;

    do
    {
        system("cls");

        getInt(&option,"--------------------MENU DE EDICION--------------------\n\n1. Editar nombre\n2. Editar horas trabajadas\n3. Editar sueldo\n4. Atras\n\nIngrese la opcion a realizar: ","\n\nOpcion no valida\n",1,4,10000);

        switch(option)
        {


            case 1:
                if(getString(nombre,"Ingrese el nombre: ","ERROR. Datos no validos",1,1000000,3)==0)
                {
                    if(employee_confirmation(rta1,"Desea modificar el nombre? Ingrese si o no: ","DATOS INCORRECTOS",3)==0 && strcmp(rta1,"si")==0)
                    {
                        if(employee_setNombre(this,nombre)==0)
                        {
                            system("cls");
                            printf("El nombre se ha editado correctamente\n\n");
                            retorno=1;
                            system("pause");
                        }
                        else
                        {
                            system("cls");
                            printf("No se ha editado el nombre\n\n");
                            system("pause");
                        }


                    }
                    else
                    {
                        system("cls");
                        printf("No se ha editado\n\n");
                        system("pause");
                    }

                }
                else
                {
                    system("cls");
                    printf("No se ha podido editar el nombre\n\n");
                    system("pause");
                }
                break;

            case 2:
                system("cls");
                if(getInt(&horasTrabajadas,"Ingrese las horas trabajadas: ","ERROR. Datos no validos",1,1000000,3)==0)
                {
                    if(employee_confirmation(rta2,"Desea modificar las horas trabajadas? Ingrese si o no: ","DATOS INCORRECTOS",3)==0 && strcmp(rta2,"si")==0)
                    {
                        if(employee_setHorasTrabajadas(this,horasTrabajadas)==0)
                        {
                            system("cls");
                            printf("Las horas se han editado correctamente\n\n");
                            retorno=1;
                            system("pause");
                        }
                        else
                        {
                            system("cls");
                            printf("No se ha editado el nombre\n\n");
                            system("pause");
                        }

                    }
                    else
                    {
                        printf("No se ha editado\n\n");
                        system("pause");
                    }
                }
                else
                {
                    system("cls");
                    printf("No se ha podido editar las horas\n\n");
                    system("pause");

                }


                break;

            case 3:
                system("cls");
                if(getInt(&sueldo,"Ingrese el sueldo: ","ERROR. Datos no validos",1,1000000,3)==0)
                {
                    if(employee_confirmation(rta3,"Desea modificar el sueldo? Ingrese si o no: ","DATOS INCORRECTOS",3)==0 && strcmp(rta3,"si")==0)
                    {
                        if(employee_setSueldo(this,sueldo)==0)
                        {
                            system("cls");
                            printf("Se ha editado el sueldo correctamente\n\n");
                            retorno=1;
                            system("pause");
                        }
                        else
                        {
                            system("cls");
                            printf("No se ha podido editar el sueldo\n\n");
                            system("pause");
                        }

                    }
                    else
                    {
                        system("cls");
                        printf("No se ha editado\n\n");
                        system("pause");
                    }
                }
                else
                {
                    system("cls");
                    printf("No se ha podido editar el sueldo\n\n");
                    system("pause");
                }

                break;

            case 4:
                break;

            default:
                system("cls");
                printf("Opcion no valida\n\n");
                system("pause");
                break;

        }

    }while(option != 4);


    return retorno;


}

/**
*\brief Imprime un mensaje de confirmacion y espera recibir si o no como respuesta
*\param char* input Es el puntero en donde se guardara la respuesta dada por el usuario en caso que sea correcta
*\param char message[] Es el mensaje a ser mostrado
*\param char eMesagge[] Es el mensaje a ser mostrado en caso de error
*\param int retry Es la cantidad de intestos que tendra el usuario en caso de error
*\param return Retorna [0] si logro recibir un dato correcto y el usuario no supero el numero de reintentos
*               Retorna [-1] si el usuario supero el numero de reintentos
*/

int employee_confirmation(char* input,char message[],char eMessage[],int retry)
{
    int retorno=-1;
    char auxStr[21];

    if(input!=NULL && message!=NULL && eMessage != NULL)
    {
        do
        {
            system("cls");
            printf("%s",message);
            scanf("%s",auxStr);

            strlwr(auxStr);

            if(strcmp(auxStr,"si")==0 || strcmp(auxStr,"no")==0)
            {
                strcpy(input,auxStr);
                retorno=0;
                break;

            }
            else
            {
                printf("%s" ,eMessage);
                system("pause");
                retry--;
            }
        }
        while(retry>=0);
    }

    if(retry==-1)
    {
        retorno=-1;
    }
    return retorno;
}

/**
*\brief Busca la posicion en la que se encuentra la estructura del empleado en el array de la lista de empleado de acuerdo al ID deseado
*\param Linkedlist* pArrayListEmployee Es el puntero a la lista de empleados
*\param return Retorna [i] siendo la posicion del array de la lista en donde se encuentra la estructura del empleado
*              Retorna [-1] si no lo ha encontrado
*/
int employee_findEmployeeById(LinkedList* pArrayListEmployee)
{
    int i;
    int len;
    int id;
    int retorno=-1;
    Employee *auxEmp;

    if(getInt(&id,"Ingrese el id del empleado: ","ID NO VALIDO",1,10000,3)==0)
    {

        len=ll_len(pArrayListEmployee);


        for(i=0;i<len;i++)
        {
            auxEmp=ll_get(pArrayListEmployee,i);
            if(auxEmp->id==id)
            {
            retorno=i;
            }
        }
    }
    else
    {
        printf("No se pudo encontrar al empleado deseado");
        system("pause");
    }

    return retorno;


}

/**
*\brief Despliega un menu con las opciones de ordenamiento de la lista de empleados
*\param Linkedlist* pArrayListEmployee Es el puntero a la lista de empleados
*\param return Retorna [1] si se ha ordenado
*              Retorna [-1] si no se ha ordenado
*/

int employee_SortMenu(LinkedList* pArrayListEmployee)
{
    int option;
    int retorno=0;

    do
    {
        system("cls");

        getInt(&option,"------------------------MENU DE ORDENAMIENTO--------------------------\n\n1. Ordenar nombres de forma ascendente\n2. Ordenar nombres de forma descendente\n3. Ordenar por sueldo de mayor a menor\n"
               "4. Ordenar por sueldo de menor a mayor\n5. Ordenar por horas trabajadas de mayor a menor\n6. Ordenar por horas trabajadas de menor a mayor\n"
               "7. Ordenar por ID de mayor a menor\n8. Atras\n\nIngrese la opcion a realizar","Opcion no valida",1,8,10000);


        switch(option)
        {
            case 1:
                system("cls");
                printf("Ordenando. Espere por favor");
                ll_sort(pArrayListEmployee,employee_compareName,1);
                system("cls");
                printf("Se ha ordenado correctamente");
                retorno=1;
                system("pause");

                break;

            case 2:
                system("cls");
                printf("Ordenando. Espere por favor");
                ll_sort(pArrayListEmployee,employee_compareName,0);
                system("cls");
                printf("Se ha ordenado correctamente");
                retorno=1;
                system("pause");

                break;

            case 3:
                system("cls");
                printf("Ordenando. Espere por favor");
                ll_sort(pArrayListEmployee,employee_compareSueldo,0);
                system("cls");
                printf("Se ha ordenado correctamente");
                retorno=1;
                system("pause");

                break;

            case 4:
                system("cls");
                printf("Ordenando. Espere por favor");
                ll_sort(pArrayListEmployee,employee_compareSueldo,1);
                system("cls");
                printf("Se ha ordenado correctamente");
                retorno=1;
                system("pause");

                break;

            case 5:
                system("cls");
                printf("Ordenando. Espere por favor");
                ll_sort(pArrayListEmployee,employee_compareHorasTrabajadas,0);
                system("cls");
                printf("Se ha ordenado correctamente");
                retorno=1;
                system("pause");

                break;

            case 6:
                system("cls");
                printf("Ordenando. Espere por favor");
                ll_sort(pArrayListEmployee,employee_compareHorasTrabajadas,1);
                system("cls");
                printf("Se ha ordenado correctamente");
                retorno=1;
                system("pause");

                break;

            case 7:
                system("cls");
                printf("Ordenando. Espere por favor");
                ll_sort(pArrayListEmployee,employee_compareId,0);
                system("cls");
                printf("Se ha ordenado correctamente");
                retorno=1;
                system("pause");

                break;

            case 8:
                break;

            default:
                printf("Opcion no valida");
                break;

        }

    }while(option!=8);
    return retorno;
}

















