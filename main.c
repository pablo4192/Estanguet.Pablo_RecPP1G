#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
int id;
char nombre[20];
int infectados;
int recuperados;
int muertos;
}ePais;

void actualizarRecuperados(ePais* unPais, int recuperadosDelDia);

void ordenarCaracteres(char cadena[]);

//char invertirCadena(char cadena[]);

int main()
{
    ePais pais={10, "Argentina", 100, 50, 10};

    actualizarRecuperados(&pais, 20);

    printf("el acumulado de recuperados es: %d\n", pais.recuperados);








    return 0;
}


/*
1. Dada una estructura ePais cuyos campos son id(int), nombre(20 caracteres), infectados(int), recuperados(int) y muertos(int).
Desarrollar una función llamada actualizarRecuperados que reciba el país y los recuperados del dia y que acumule estos a los
que ya tiene el país. La función no devuelve nada. *
*/
void actualizarRecuperados(ePais* unPais, int recuperadosDelDia)
{
    unPais->recuperados+=recuperadosDelDia;


}

/*
3. Crear una función que se llame ordenarCaracteres que reciba una cadena de caracteres como parámetro
y su responsabilidad es ordenarlos caracteres
de manera ascendente dentro de la cadena. Ejemplo si le pasamos "algoritmo" la deja como "agilmoort" *
*/

void ordenarCaracteres(char cadena[])
{
    char aux[20];

    for(int i=0; i<strlen(cadena)-1; i++)
    {
        for(int j=i+1; j<strlen(cadena); j++)
        {
            if(cadena[i]>cadena[j])
            {
                strcpy(aux, cadena[i]);
                strcpy(cadena[i], cadena[j]);
                strcpy(cadena[j], aux);
            }
        }
    }
}









