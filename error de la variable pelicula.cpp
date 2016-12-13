# include <stdio.h>

using namespace std;

int main(){			

					int pelicula;
					char desea1;
						
					printf("\nSeleccione una pelicula\n");
					scanf("%d", &pelicula); //LECTURA DE LA OPCION QUE ELIJAS
					
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
				
			
					
		

				return 0;
}
