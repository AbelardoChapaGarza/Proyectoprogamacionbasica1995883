#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <string>
#include <wchar.h>
using namespace std;
struct datos
{
    int año, precio, total, impuesto;
    string juego, consola, descripcion, clasificacion;
    char juegos[20];
};

int main()
{
    datos juegos[3];
    int opcion, decision, articulo;
    
    printf("\t Tienda de videojuegos online \n");
    printf("1.-Alta \n");
    printf("2.-Modificacion \n");
    printf("3-Baja \n");
    printf("4.-Lista \n");
    printf("5.-Limpiar Pantalla \n");
    printf("6.-Salir \n");
    scanf_s("%d", &opcion);

    switch (opcion)
    {
    case 1:
        
        printf("seleccione un articulo \n");
        printf("1.-god of war ragnarok \n");
        printf("2.-Halo infinite \n");
        printf("3.-Minecraft \n");
        scanf_s("%d", &decision);
         //titulo , clasificacion , consola , descripcion , precio , impuesto , total , año
        for (int i = 0; i < 3; i++)
        { 
        if (opcion == 1)
        {
            printf("Nombre del videojuego: god of war ragnarok \n");
            cin.ignore();
            getline(cin, juegos[i].juego);

            printf("Clasificacion: +18 \n");
            getline(cin, juegos[i].clasificacion);

            printf("Consola:ps5 yps4  \n");
            getline(cin, juegos[i].consola);

           
        }
        for (int i = 0; i < 3; i++);
        {
            if (decision == 2)
            {
               
                printf("Titulo: Halo infinite \n");
                
                printf("Clasificacion: +18 \n");
                printf("Consola: Xbox one y Xbox series x \n");
               
            }
            for (int i = 0; i < 3; i++);
            {
                if (decision == 3)
                {
                    
                    printf("Titulo: Minecraft \n");
                    printf("Clasificacion: todas las edades \n");
                    printf("Consola: Xbox one , Xbox series x|s , Ps5 , Ps4 \n");
                    
                }
            }
        }
        printf("desea regresar al menu de inicio? 1si  2 no\n");
        scanf_s("%d", &decision);
        if (decision == 1);
        {
            return main();
        }
       
        break;
    case 2:
        break;

    case 3:
        break;

    case 4:
        for (int i = 0; i < 3; i++)
        {
            printf("total: %d \n", juegos[i].total);
            printf("Juegos: %d \n", juegos[i].total);
        }
        
        break;

    case 5:
        //limpiar pantalla
        system("cls");
        return main();
        break;
    case 6:
        exit(1);
        //salir
        break;

    }

}