#ifndef employee_H_INCLUDED
#define employee_H_INCLUDED

typedef struct
{
    char nombre[50];
    int edad;
    char sexo;

}Persona;

Employee* employee_new();
Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr,char* sueldo);
void employee_delete(Employee* this);

int employee_setId(Employee* this,int id);
int employee_getId(Employee* this,int* id);

int employee_setNombre(Employee* this,char* nombre);
int employee_getNombre(Employee* this,char* nombre);

int employee_setHorasTrabajadas(Employee* this,int horasTrabajadas);
int employee_getHorasTrabajadas(Employee* this,int* horasTrabajadas);

int employee_setSueldo(Employee* this,int sueldo);
int employee_getSueldo(Employee* this,int* sueldo);

int employee_compareName(void* arg1,void* arg2);
int employee_compareHorasTrabajadas(void* arg1, void* arg2);
int employee_compareSueldo(void* arg1, void* arg2);
int employee_compareId(void* arg1, void* arg2);

void employee_printEmployee(Employee* this);

int employee_menuEdit(Employee* this);
int employee_confirmation(char* input,char message[],char eMessage[],int retry);
int employee_findEmployeeById(LinkedList* pArrayListEmployee);
int employee_SortMenu(LinkedList* pArrayListEmployee);

#endif // employee_H_INCLUDED
