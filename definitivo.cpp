# include <stdio.h>
# include <iostream> // Permite la entrada y salida de datos
# include <conio.h> //
# include <stdlib.h> 
using namespace std;

int main(){
			
			char desea3;
			do
			{
			int pelicula; // EL TIPO DE PELICULA SELECCIONADA
			//int desea1, deseas, desea3;
			double descuento=0,descuento1=0; //DESCUENTO SI ELEGISTE LA PELICULA 3 Y COMPRASTE UNOS NACHOS Y UNA SODA
			char desea1, desea2; //UTILIZADAS PARA DEFINIR LAS CONDICIONES DE LOS CICLOS DO WHILE
			char Queso;    //LEE SI DESEAS PONERLE EXTRA QUESO A TUS NACHOS
			float venta = 0;   //ACUMULA EL EL SUBTOTAL A PAGAR
			float TOTAL = 0; //VARIABLE EN LA QUE SE GUARDA EL TOTAL A PAGAR
			int producto;       //LEE EL TIPO DE PRODUCTO SELECCIONADO
			char tamano; //LEE EL TIPO DE TAMAÑO SELECCIONADO
			int ERROR1 = 0;
			float IVA = 0;
			int BoletosSolicitados = 0; //UTILIZADA PARA LEER LOS BOLETOS SOLICITADOS 
			int boletosnino = 0, BoletosTerceraEdad = 0, boletosAdulto = 0; //ACUMULADORE DE LOS TIPOS DE BOLETOS
			int Totalboletos = 0, CantidadBoletos = 0; //ACUMULADOR DEL PRECIO TOTAL DE BOLETOS Y CANTIDAD TOTAL DE BOLETOS
			char ninosYabues; // LEE SI HAY NIÑOS O VIEJITOS
			int PALOMITAS = 0, Chedar = 0, Caramelizadas = 0, Naturales = 0; // ACUMULADOR DEL TOTAL DE APLOMIYAS Y ACUMULADORES DEL LOS TIPOS PALOMITAS
			int SODAS =0, J = 0, G = 0, M = 0, CH = 0; // ACUMULADPOR DEL TOTAL DE SODAS ACUMULADORES DE LOS TAMAÑOS DE SODAS
			int COMIDA=0, NACHOS = 0, NachosConQueso = 0, NachosExtraQueso = 0; // ACUMULADORES DE LA CANTIDAD DE NACHOS
			int DOGOS = 0, DogosNormal = 0, DogosDoble = 0; // TAMAÑOS DOGOS
			int DULCES = 0, Gomitas = 0, Chocolates = 0, Paletas = 0, Chicles = 0, Pulparindos = 0;//TIPOS DE DULCES
			float PAQ1 = 0, PAQ2 = 0, PAQ3 = 0; // PAQUETES 
			int PAQUETES = 0;
			int palomita = 0, dulce = 0, comida = 0; //TIPOS DE PRODUCTOS
			
				
				printf("BIENVENIDO A CINEPOLIS");
				printf("\n");
				
				printf("\nCuantos boletos desea comprar?\n");
				scanf("%d", &BoletosSolicitados); // Cantidad de boletos que pidio el cliente
			    printf("\nHay algun nino o abuelo? [S/N]\n");
				scanf("%s", &ninosYabues);
				
				if (ninosYabues == 'S' || ninosYabues == 's')
				{
					printf("\nIngrese la cantidad de ninos\n");
					scanf("%d", &boletosnino);

					if (boletosnino <= BoletosSolicitados)
					{
						Totalboletos = Totalboletos + boletosnino * 25;
						CantidadBoletos = CantidadBoletos + boletosnino;
					}
					
					printf("Ingrese la cantidad de abuelos\n");
					scanf("%d", &BoletosTerceraEdad);
					if ((BoletosTerceraEdad + boletosnino) <= BoletosSolicitados)
					{
						Totalboletos = Totalboletos + BoletosTerceraEdad * 25;
						CantidadBoletos = CantidadBoletos + BoletosTerceraEdad;
					}
					else
					{
						ERROR1 = ERROR1 + 1;
					}
                

				}
				
					BoletosSolicitados = BoletosSolicitados - boletosnino;
					BoletosSolicitados = BoletosSolicitados - BoletosTerceraEdad;
					Totalboletos = Totalboletos + BoletosSolicitados * 50;
					CantidadBoletos = CantidadBoletos + BoletosSolicitados;
					boletosAdulto = BoletosSolicitados;
					getch();
					system("cls");
					
				if (ERROR1 == 0)
				{	
				
					printf("                  CARTELERA  ");
					printf("\n");
					printf("\n[1] Blood in Blood out");
					printf("\n[2] Inception");
					printf("\n[3] El infierno");
					printf("\n[4] Animales fantasticos y donde encontrarlos");
					printf("\n[5] The danish girl");
					printf("\n");


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
				
					
					printf("\n\n");
					printf("DESEA ALGO DE LA DULCERIA? [S/N]");
					scanf("%s", &desea1);
					getch(); //ESPERA A QUE TECLEES CUALQUIER TECLA PARA CONTINUAR
					system("cls"); // LIMPIA PANTALLA




					if ((desea1 == 'S') || (desea1 == 's'))
					{

						do
						{
							//Console.Clear();
							printf("QUE DESEA COMPRAR?");
							printf("\n[1] PALOMITAS");
							printf("\n[2] SODA");
							printf("\n[3] COMIDA");
							printf("\n[4] DULCES");
							printf("\n[5] PAQUETES\n");

							scanf("%d", &producto);
							getch();
							system("cls");


							if (producto == 1) // SI ELEGISTE PALOMITAS
							{
								printf("ESCOJA EL TIPO DE PALOMITAS");
								printf("\n[1] Chedar");
								printf("\n[2] Dulces");
								printf("\n[3] Naturales\n");
								scanf("%d", &palomita);
								getch();
								system("cls");
						

								if (palomita == 1)
								{
									venta = venta + 85;
									Chedar = Chedar + 1;
									PALOMITAS = PALOMITAS + 1;
								}
								if (palomita == 2)
								{
									venta = venta + 70;
									Caramelizadas = Caramelizadas + 1;
									PALOMITAS = PALOMITAS + 1;
								}
								if (palomita == 3)
								{
									venta = venta + 75;
									Naturales = Naturales + 1;
									PALOMITAS = PALOMITAS + 1;
								}
							}
							if (producto == 2) // SI ELEGISTE SODA
							{
								printf("ELIJA EL TAMANO DE LA SODA");
								printf("\n[J] JUMBO");
								printf("\n[G] GRANDE");
								printf("\n[M] MEDIANA");
								printf("\n[CH] CHICA\n");
								
								scanf("%c", &tamano);
							    getch(); //ESPERA A QUE TECLEES CUALQUIER TECLA PARA CONTINUAR
								system("cls"); // LIMPIA PANTALLA

								if ( (tamano == 'J') || (tamano == 'j') )
								{
									venta = venta + 70;
									J = J + 1;
									SODAS = SODAS + 1;
								
								}
								if (tamano == 'G' || tamano == 'g')
								{
									venta = venta + 60;
									G = G + 1;
									SODAS = SODAS + 1;
								
								}
								if (tamano == 'M' || tamano == 'm')
								{
									venta = venta + 50;
									M = M + 1;
									SODAS = SODAS + 1;
								
								}
								if ( (tamano == 'CH') || (tamano == 'ch') )
								{
									venta = venta + 45;
									CH = CH + 1;
									SODAS = SODAS + 1;
							
								}
							}	
							if (producto == 3)//SI ELEGISTE COMIDA
							{
								printf("ESCOJE EL TIPO DE COMIDA");
								printf("\n[1] Nachos con queso");
								printf("\n[2] Dogo normal");
								printf("\n[3] Dogo doble/n");
								scanf("%d", &comida);
								getch(); //ESPERA A QUE TECLEES CUALQUIER TECLA PARA CONTINUAR
								system("cls"); // LIMPIA PANTALLA

								if (comida == 1)
								{
									printf("DESEA PONERLE EXTRA QUESO?[S/N\n");
								    scanf("%c", &Queso);
								    getch(); //ESPERA A QUE TECLEES CUALQUIER TECLA PARA CONTINUAR
									system("cls"); // LIMPIA PANTALLA

									if (Queso == 'S' || Queso == 's')
									{
										venta = venta + 85;
										NachosExtraQueso = NachosExtraQueso + 1;
										NACHOS = NACHOS + 1;
										COMIDA = COMIDA + 1;
									}
									else
									{
										venta = venta + 70;
										NachosConQueso = NachosConQueso + 1;
										NACHOS = NACHOS + 1;
									    COMIDA = COMIDA + 1;
									}

								}
								if (comida == 2)
								{
									venta = venta + 70;
									DogosNormal = DogosNormal + 1;
									DOGOS = DOGOS + 1;
									COMIDA = COMIDA + 1;
								}

								if (comida == 3)
								{
									venta = venta + 100;
									DogosDoble = DogosDoble + 1;
									COMIDA = COMIDA + 1;
								}

							}


							if (producto == 4) //SI ELEGISTE DULCES
							{
								printf("QUE DULCE DECEA COMPRAR?");
								printf("[1]GOMITAS............$15\n");
								printf("[2]CHOCOLATES.........$20\n");
								printf("[3]PALETAS............$15\n");
								printf("[4]CHICLES............$15\n");
								printf("[5]PULPARINDO.........$15\n");
								scanf("%d", &dulce);
								getch(); //ESPERA A QUE TECLEES CUALQUIER TECLA PARA CONTINUAR
								system("cls"); // LIMPIA PANTALLA

								if (dulce == 1)
								{
									venta = venta + 15;
									Gomitas = Gomitas + 1;
									DULCES = DULCES + 1;
								}
								if (dulce == 2)
								{
									venta = venta + 20;
									Chocolates = Chocolates + 1;
									DULCES = DULCES + 1;
								}
								if (dulce == 3)
								{
									venta = venta + 15;
									Paletas = Paletas + 1;
									DULCES = DULCES + 1;
								}
								if (dulce == 4)
								{
									venta = venta + 15;
									Chicles = Chicles + 1;
									DULCES = DULCES + 1;
								}
								if (dulce == 5)
								{
									venta = venta + 15;
									Pulparindos = Pulparindos + 1;
									DULCES = DULCES + 1;

								}

							}
							if (producto == 5) // SI ELEGISTE PAQUETES
							{
								printf("ELIJA UN PAQUETE\n");
								printf("[1] PAQUETE 1: SODA JUMBO, NACHOS, DOGO(15% DE DESCUENTO\n");
								printf("[2] PAQUETE 2: SODA GRANDE, NACHOS, PALOMITAS(10% DE DESCUENTO\n");
								printf("[3] PAQUETE 3: SODA CHICA, NACHOS, 3 DULCES(15% DE DESCUENTO\n");
								scanf("%d", &PAQUETES);
								getch(); //ESPERA A QUE TECLEES CUALQUIER TECLA PARA CONTINUAR
								system("cls"); // LIMPIA PANTALLA

								if (PAQUETES == 1)
								{
									venta = venta + 178.5;
									PAQ1 = PAQ1 + 1;
									
								}
								if (PAQUETES == 2)
								{
									venta = venta + 184.5;
									PAQ2 = PAQ2 + 1;
								}
								if (PAQUETES == 3)
								{
									venta = venta + 152;
									PAQ3 = PAQ3 + 1;
								}
							}	
						
								printf("Desea comprar algo mas? [S/N]\n");
								scanf("%c", &desea2);
								getch(); //ESPERA A QUE TECLEES CUALQUIER TECLA PARA CONTINUAR
								system("cls"); // LIMPIA PANTALLA
								
					   } while(desea2 == 'S' || desea2 == 's');
					   
					  
					//  printf("la venta total es\n");
					//	system("pause");
					//	getch(); 
					}
					
					system("cls"); // LIMPIA PANTALLA
					/*Descuento por elegir la pelicula 3, y que el cliente haya comprado una soda 
					  y unos nachos. */
					if ((pelicula == 3) && (SODAS > 0) && (NACHOS > 0))
					{

						printf("Tiene usted un descuento del 10% en su compra final :D\n");
						printf("\n");
						descuento1 = descuento1 + 1; //SE LE AGREGA UN 1 A LA VARIABLE PARA VALIDAR EL DESCEUNTO EN EL TICKET
					
					}

					/*Descuento por elegir la pelicula 5 y que hayan sido comprados mas de 2 
					  boletos para viejitos. */
					if (pelicula == 5 && BoletosTerceraEdad > 1)
					{

						printf("Tiene usted un descuento de un boleto de viejito en su compra final :D\n");
						Totalboletos = Totalboletos - 25;
						

					}
					
					printf("%d PELICULA SELECCIONADA", pelicula);
					printf("\nPELICULA SELECCIONADA");
					
					//Condiciones para imprimir una pelicula
					if (pelicula == 1) { printf("Blood in Blood out\n"); }
					if (pelicula == 2) { printf("Inception\n"); }
					if (pelicula == 3) { printf("El infierno\n"); }
					if (pelicula == 4) { printf("Animales fantasticos y donde encontrarlos\n"); }
					if (pelicula == 5) { printf("The danish girl\n"); }

				
					printf("\nPRODUCTOS VENDIDOS\n");
					//Condiciones para imprimir los productos vendidos
					if ((PAQ1 >= 0) || (PAQ2 > 0) || (PAQ3 > 0)) { printf("\nCOMBOS"); }
					if (PAQ1 >= 0) { printf("\n%.0f PAQUETES 1...................................................$%.1f", PAQ1, PAQ1*178.5); }
					if (PAQ2 >= 0) { printf("\n%.0f PAQUETES 2...................................................$%.1f", PAQ2, PAQ2*184.5); }
					if (PAQ3 >= 0) { printf("\n%.0f PAQUETES 3...................................................$%.0f", PAQ3, PAQ3*152); }
					if (PALOMITAS >= 0) { printf("\n\n"); }
					if (PALOMITAS >= 0) { printf("PALOMITAS"); }
					if (Chedar >= 0) { printf("\n%d Chedar.......................................................$%d", Chedar, Chedar*85); }
					if (Caramelizadas >= 0) { printf("\n%d Dulces.......................................................$%d", Caramelizadas, Caramelizadas*70); }
					if (Naturales >= 0) { printf("\n%d Naturales....................................................$%d", Naturales, Naturales*75); }
					if (SODAS >= 0) { printf("\n\n"); }
					if (SODAS >= 0) { printf("SODAS"); }
					if (J >= 0) { printf ("\n%d Jumbo........................................................$%d", J, J*70); }
					if (G >= 0) { printf ("\n%d Grandes......................................................$%d", G, G*60); }
					if (M >= 0) { printf ("\n%d Medianas.....................................................$%d", M, M*50); }
					if (CH >= 0) { printf("\n%d Chicas.......................................................$%d", CH, CH*45); }
					if (COMIDA >= 0) { printf("\n\n"); }
					if (COMIDA >= 0) { printf("COMIDA"); }
					if (NachosConQueso >= 0) { printf("\n%d Nachos con queso.............................................$%d", NachosConQueso, NachosConQueso*70); }
					if (NachosExtraQueso >= 0) { printf("\n%d Nachos con extra queso.......................................$%d", NachosExtraQueso, NachosExtraQueso*85); }
					if (DogosNormal >= 0) { printf("\n%d Dogos Normales...............................................$%d", DogosNormal, DogosNormal*70); }
					if (DogosDoble >= 0) { printf("\n%d Dogos dobles.................................................$%d", DogosDoble, DogosDoble*100); }
					if (DULCES >= 0) { printf("\n\n"); }					
					if (DULCES >= 0) { printf ("DULCES"); }
					if (Gomitas >= 0) { printf("\n%d Gomitas......................................................$%d", Gomitas, Gomitas*15); }
					if (Chocolates >= 0) { printf("\n%d Chocolates...................................................$%d", Chocolates, Chocolates*20); }
					if (Paletas >= 0) { printf("\n%d Paletas......................................................$%d", Paletas, Paletas*15); }
					if (Chicles >= 0) { printf("\n%d Chicles......................................................$%d", Chicles, Chicles*15); }
					if (Pulparindos >= 0) { printf("\n%d Pulparindo...................................................$%d", Pulparindos, Pulparindos*15); }
					printf("\n........................................................Total: $%.1f", venta);
					//Boletos vendidos
					if (CantidadBoletos > 0) { printf("\n\n"); }
					if (CantidadBoletos > 0) { printf("BOLETOS VENDIDOS"); }
					if (boletosnino > 0) { printf("\n%d Boletos de nino..............................................$%d", boletosnino, boletosnino*25); }
					if (boletosAdulto > 0) { printf("\n%d Boletos de adulto............................................$%d",boletosAdulto, boletosAdulto*50); }
					if (BoletosTerceraEdad > 0) { printf("\n%d Boletos de viejito...........................................$%d", BoletosTerceraEdad, BoletosTerceraEdad*25); }
					
					//Total a pagar
					venta = venta + Totalboletos; //SUMA EL PRECIO DE LOS BOLETOS A EL TOTAL SUBTOTAL
					if(descuento1 > 0){ descuento = venta*0.10;}
					
					venta = venta - descuento;
					IVA = venta * 0.16; //CALCULO PARA SACAR EL IVA 
					TOTAL = venta + IVA;//SUMA EL IVA AL TOTAL FINAL
					
					printf("\n");
					if (Totalboletos > 0) { printf("\nPrecio de los boletos:.........................................$%d", Totalboletos); }
					if (descuento1 > 0) { printf("\nDescuento del 10% en su pago final:............................$%.1f", descuento); }
					printf("\nSubtotal:......................................................$%.1f", venta);
					printf("\nIVA:...........................................................$%.1f", IVA);
					printf("\nTotal a pagar:.................................................$%.1f", TOTAL);
				
	            	
				}
				else
				{
					/*Si la cantidad de boletos de niños o abuelos superan la cantidad 
					solicitada el sistema arroja un error y te devuelve al principio*/
					printf("\nERROR VUELVE A INTRODUCIR LA CANTIDAD DE BOLETOS");

				}
				printf("\n");
				printf("\nDesea volver al menu");
				scanf("%c", &desea3);
				getch(); //ESPERA A QUE TECLEES UNA CUALQUIER TECLA PARA CONTINUAR
				system("cls"); // LIMPIA PANTALLA
				

			} while ( (desea3 == 'S') || (desea3 == 's') );
	
			return 0;
}
