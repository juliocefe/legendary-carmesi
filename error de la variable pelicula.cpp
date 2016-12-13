# include <stdio.h>
# include <iostream> // Permite la entrada y salida de datos
# include <conio.h> //
# include <stdlib.h> 
using namespace std;

int main(){			

					int pelicula;
					char desea1;
						
					printf("\nSeleccione una pelicula\n");
					scanf("%d", &pelicula); //LECTURA DE LA OPCION QUE ELIJAS
					printf("\n %d", pelicula);
			
					//CONDICIONES DEPENDIENDO DE LA PELIUCLA QUE ELEGISTE
					if (pelicula == 1)
					{
						printf("PELICULA SELCCIONADA: Blood in Blood out");
					}
					if (pelicula == 2)
					{
						printf("PELICULA SELCCIONADA: Inception");
					}
					if (pelicula == 3)
					{
						printf("PELICULA SELCCIONADA: El infierno");
					}
					if (pelicula == 4)
					{
						printf("PELICULA SELCCIONADA: Animales fantasticos y donde encontrarlos");
					}
					if (pelicula == 5)
					{
						printf("PELICULA SELCCIONADA: The danish girl");
					}
				
					printf("\nPELICULA SELECCIONADA %n", pelicula);
					printf("\n\n");
					printf("DESEA ALGO DE LA DULCERIA? [S/N]");
					scanf("%s", &desea1);
					getch(); //ESPERA A QUE TECLEES CUALQUIER TECLA PARA CONTINUAR
					system("cls"); // LIMPIA PANTALLA

				return 0;
}
