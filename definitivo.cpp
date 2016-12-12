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
			double venta = 0;   //ACUMULA EL EL SUBTOTAL A PAGAR
			double TOTAL = 0; //VARIABLE EN LA QUE SE GUARDA EL TOTAL A PAGAR
			int producto;       //LEE EL TIPO DE PRODUCTO SELECCIONADO
			char tamano; //LEE EL TIPO DE TAMAÑO SELECCIONADO
			int ERROR1 = 0;
			double IVA = 0;
			int BoletosSolicitados = 0; //UTILIZADA PARA LEER LOS BOLETOS SOLICITADOS 
			int boletosnino = 0, BoletosTerceraEdad = 0, boletosAdulto = 0; //ACUMULADORE DE LOS TIPOS DE BOLETOS
			int Totalboletos = 0, CantidadBoletos = 0; //ACUMULADOR DEL PRECIO TOTAL DE BOLETOS Y CANTIDAD TOTAL DE BOLETOS
			char ninosYabues; // LEE SI HAY NIÑOS O VIEJITOS
			int PALOMITAS = 0, Chedar = 0, Caramelizadas = 0, Naturales = 0; // ACUMULADOR DEL TOTAL DE APLOMIYAS Y ACUMULADORES DEL LOS TIPOS PALOMITAS
			int SODAS = 0, J = 0, G = 0, M = 0, CH = 0; // ACUMULADPOR DEL TOTAL DE SODAS ACUMULADORES DE LOS TAMAÑOS DE SODAS
			int COMIDA=0, NACHOS = 0, NachosConQueso = 0, NachosExtraQueso = 0; // NACHOS
			int DOGOS = 0, DogosNormal = 0, DogosDoble = 0; // TAMAÑOS DOGOS
			int DULCES = 0, Gomitas = 0, Chocolates = 0, Paletas = 0, Chicles = 0, Pulparindos = 0;//TIPOS DE DULCES
			int PAQUETES = 0, PAQ1 = 0, PAQ2 = 0, PAQ3 = 0; // PAQUETES 
			int palomita = 0, dulce = 0, comida = 0; //TIPOS DE PRODUCTOS
			
				cout<<"BIENVENIDO A CINEPOLIS" <<endl;
				cout<<""<<endl;

				cout<<"Cuantos boletos desea comprar?" <<endl;
				cin>>BoletosSolicitados; // Cantidad de boletos que pidio el cliente
				cout<<"\nHay algun nino o abuelo? [S/N]" <<endl;
				cin>>ninosYabues;
				
				if (ninosYabues == 'S' || ninosYabues == 's')
					{
					cout<<"\nIngrese la cantidad de ninos"<<endl;
					cin>>boletosnino;

					if (boletosnino <= BoletosSolicitados)
					{
						Totalboletos = Totalboletos + boletosnino * 25;
						CantidadBoletos = CantidadBoletos + boletosnino;
					}
					
					cout<<"Ingrese la cantidad de abuelos"<<endl;
					cin>>BoletosTerceraEdad;
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
				
					cout<<"                 CARTELERA  ";
					cout<<"\n";
					cout<<"\n[1] Blood in Blood out";
					cout<<"\n[2] Inception";
					cout<<"\n[3] El infierno";
					cout<<"\n[4] Animales fantasticos y donde encontrarlos";
					cout<<"\n[5] The danish girl";
					cout<<"\n";


					cout<<"\nSeleccione una pelicula"<<endl;
					cin>>pelicula; //LECTURA DE LA OPCION QUE ELIJAS
					
			
					//CONDICIONES DEPENDIENDO DE LA PELIUCLA QUE ELEGISTE
					if (pelicula == 1)
					{
						cout<<"PELICULA SELCCIONADA: Blood in Blood out"<<endl;
					}
					if (pelicula == 2)
					{
						cout<<"PELICULA SELCCIONADA: Inception"<<endl;
					}
					if (pelicula == 3)
					{
						cout<<"PELICULA SELCCIONADA: El infierno"<<endl;
					}
					if (pelicula == 4)
					{
						cout<<"PELICULA SELCCIONADA: Animales fantasticos y donde encontrarlos"<<endl;
					}
					if (pelicula == 5)
					{
						cout<<"PELICULA SELCCIONADA: The danish girl"<<endl;
					}
				
					
					cout<<"\n\n";
					cout<<"DESEA ALGO DE LA DULCERIA? [S/N]";
					cin>>desea1;
					getch(); //ESPERA A QUE TECLEES CUALQUIER TECLA PARA CONTINUAR
					system("cls"); // LIMPIA PANTALLA




					if ((desea1 == 'S') || (desea1 == 's'))
					{

						do
						{
							//Console.Clear();
							cout<<"QUE DESEA COMPRAR?"<<endl;
							cout<<"[1] PALOMITAS"<<endl;
							cout<<"[2] SODA"<<endl;
							cout<<"[3] COMIDA"<<endl;
							cout<<"[4] DULCES"<<endl;
							cout<<"[5] PAQUETES"<<endl;

							cin>>producto;
							getch();
							system("cls");


							if (producto == 1) // SI ELEGISTE PALOMITAS
							{
								cout<<"ESCOJA EL TIPO DE PALOMITAS"<<endl;
								cout<<"[1]Chedar"<<endl;
								cout<<"[2]Dulces"<<endl;
								cout<<"[3]Naturales"<<endl;
								cin>>palomita;
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
								cout<<"ELIJA EL TAMANO DE LA SODA"<<endl;
								cout<<"[J] JUMBO"<<endl;
								cout<<"[G] GRANDE"<<endl;
								cout<<"[M] MEDIANA"<<endl;
								cout<<"[CH] CHICA"<<endl;
								
								cin>>tamano;
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
								cout<<"ESCOJE EL TIPO DE COMIDA"<<endl;
								cout<<"[1] Nachos con queso"<<endl;
								cout<<"[2] Dogo normal"<<endl;
								cout<<"[3] Dogo doble"<<endl;
								cin>>comida;
								getch(); //ESPERA A QUE TECLEES CUALQUIER TECLA PARA CONTINUAR
								system("cls"); // LIMPIA PANTALLA

								if (comida == 1)
								{
									cout<<"DESEA PONERLE EXTRA QUESO?[S/N"<<endl;
									cin>>Queso;
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
								cout<<"QUE DULCE DECEA COMPRAR?"<<endl;
								cout<<"[1]GOMITAS............$15"<<endl;
								cout<<"[2]CHOCOLATES.........$20"<<endl;
								cout<<"[3]PALETAS............$15"<<endl;
								cout<<"[4]CHICLES............$15"<<endl;
								cout<<"[5]PULPARINDO.........$15"<<endl;
								cin>>dulce;
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
								cout<<"ELIJA UN PAQUETE"<<endl;
								cout<<"[1] PAQUETE 1: SODA JUMBO, NACHOS, DOGO(15% DE DESCUENTO"<<endl;
								cout<<"[2] PAQUETE 2: SODA GRANDE, NACHOS, PALOMITAS(10% DE DESCUENTO"<<endl;
								cout<<"[3] PAQUETE 3: SODA CHICA, NACHOS, 3 DULCES(15% DE DESCUENTO"<<endl;
								cin>>PAQUETES;
								getch(); //ESPERA A QUE TECLEES CUALQUIER TECLA PARA CONTINUAR
								system("cls"); // LIMPIA PANTALLA

								if (PAQUETES == 1)
								{
									venta = venta + 178.5;
									PAQ1 = PAQ2 + 1;
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
						
								cout<<"Desea comprar algo mas? [S/N]"<<endl;
								cin>>desea2;
								getch(); //ESPERA A QUE TECLEES CUALQUIER TECLA PARA CONTINUAR
								system("cls"); // LIMPIA PANTALLA
								
					   } while(desea2 == 'S' || desea2 == 's');
					   
					  
					   cout<<"la venta total es" <<venta;
					//	system("pause");
					//	getch(); 
					}
					
					system("cls"); // LIMPIA PANTALLA
					/*Descuento por elegir la pelicula 3, y que el cliente haya comprado una soda 
					  y unos nachos. */
					if ((pelicula == 3) && (SODAS > 0) && (NACHOS > 0))
					{

						cout<<"Tiene usted un descuento del 10% en su compra final :D"<<endl;
						cout<<"\n";
						descuento1 = descuento1 + 1; //SE LE AGREGA UN 1 A LA VARIABLE PARA VALIDAR EL DESCEUNTO EN EL TICKET
					
					}

					/*Descuento por elegir la pelicula 5 y que hayan sido comprados mas de 2 
					  boletos para viejitos. */
					if (pelicula == 5 && BoletosTerceraEdad > 1)
					{

						cout<<"Tiene usted un descuento de un boleto de viejito en su compra final :D"<<endl;
						Totalboletos = Totalboletos - 25;
						cout<<"\n";

					}
					
					cout<<"PELICULA SELECCIONADA"<<endl;

					//Condiciones para imprimir una pelicula
					if (pelicula == 1) { cout<<"Blood in Blood out\n"; }
					if (pelicula == 2) { cout<<"Inception\n"; }
					if (pelicula == 3) { cout<<"El infierno\n"; }
					if (pelicula == 4) { cout<<"Animales fantasticos y donde encontrarlos\n"; }
					if (pelicula == 5) { cout<<"The danish girl\n"; }

				
					cout<<"\nPRODUCTOS VENDIDOS"<<endl;
					
					//Condiciones para imprimir los productos vendidos
					if ((PAQ1 > 0) || (PAQ2 > 0) || (PAQ3 > 0)) { cout<<"\nCOMBOS"<<endl; }
					if (PAQ1 > 0) { cout<<PAQ1 <<" PAQUETES 1...................................................$" <<PAQ1 * 178.5<<endl; }
					if (PAQ2 > 0) { cout<<PAQ2 <<" PAQUETES 2...................................................$" <<PAQ2 * 184.5<<endl; }
					if (PAQ3 > 0) { cout<<PAQ3 <<" PAQUETES 3...................................................$" <<PAQ3 * 152<<endl; }
					if (PALOMITAS > 0) { cout<<"\n\n"; }
					if (PALOMITAS > 0) { cout<<"PALOMITAS"<<endl; }
					if (Chedar > 0) { cout<<Chedar <<" Chedar.......................................................$" <<Chedar * 85<<endl; }
					if (Caramelizadas > 0) { cout<<Caramelizadas <<" Dulces.......................................................$" <<Caramelizadas * 70<<endl; }
					if (Naturales > 0) { cout<<Naturales <<" Naturales....................................................$" <<Naturales * 75<<endl; }
					if (SODAS > 0) { cout<<"\n\n"; }
					if (SODAS > 0) { cout<<"SODAS"<<endl; }
					if (J > 0) { cout<<J <<" Jumbo........................................................$" <<J * 70<<endl; }
					if (G > 0) { cout<<G <<" Grandes......................................................$" <<G * 60<<endl; }
					if (M > 0) { cout<<M <<" Medianas.....................................................$" <<M * 50<<endl; }
					if (CH > 0) { cout<<CH <<" Chicas.......................................................$" <<CH * 45<<endl; }
					if (DULCES > 0) { cout<<"\n\n"; }
					if (COMIDA > 0) { cout<<"COMIDA"<<endl; }
					if (NachosConQueso > 0) { cout<<NachosConQueso <<" Nachos con queso.............................................$" <<NachosConQueso * 70<<endl; }
					if (NachosExtraQueso > 0) { cout<<NachosExtraQueso <<" Nachos con extra queso.......................................$" <<NachosExtraQueso * 85<<endl; }
					if (DogosNormal > 0) { cout<<DogosNormal <<" Dogos Normales...............................................$" <<DogosNormal * 70<<endl; }
					if (DogosDoble > 0) { cout<<DogosDoble <<" Dogos dobles.................................................$" <<DogosNormal * 100<<endl; }
					if (DULCES > 0) { cout<<DULCES <<" DULCES"<<endl; }
					if (Gomitas > 0) { cout<<Gomitas <<" Gomitas......................................................$" <<Gomitas * 15<<endl; }
					if (Chocolates > 0) { cout<<Chocolates <<" Chocolates...................................................$" <<Chocolates * 20<<endl; }
					if (Paletas > 0) { cout<<Paletas <<" Paletas......................................................$" <<Paletas * 15<<endl; }
					if (Chicles > 0) { cout<<Chicles <<" Chicles......................................................$" <<Chicles * 15<<endl; }
					if (Pulparindos > 0) { cout<<Pulparindos <<" Pulparindo...................................................$" <<Pulparindos * 15<<endl; }
					cout<<"\n........................................................Total: $"<<venta;
					//Boletos vendidos
					if (CantidadBoletos > 0) { cout<<"\n\n"; }
					if (CantidadBoletos > 0) { cout<<"BOLETOS VENDIDOS"<<endl; }
					if (boletosnino > 0) { cout<<boletosnino <<" Boletos de nino..............................................$" <<boletosnino * 25<<endl; }
					if (boletosAdulto > 0) { cout<<boletosAdulto <<" Boletos de adulto............................................$" <<boletosAdulto * 50<<endl; }
					if (BoletosTerceraEdad > 0) { cout<<BoletosTerceraEdad <<" Boletos de viejito...........................................$" <<BoletosTerceraEdad * 25; }
					
					//Total a pagar
					venta = venta + Totalboletos; //SUMA EL PRECIO DE LOS BOLETOS A EL TOTAL SUBTOTAL
					if(descuento1 > 0){ descuento = venta*0.10;}
					
					venta = venta - descuento;
					IVA = venta * 0.16; //CALCULO PARA SACAR EL IVA 
					TOTAL = venta + IVA;//SUMA EL IVA AL TOTAL FINAL
					
					cout<<"\n";
					if (Totalboletos > 0) { cout<<"\nPrecio de los boletos:.........................................$" <<Totalboletos; }
					if (descuento1 > 0) { cout<<"\nDescuento del 10% en su pago final:............................$" <<descuento; }
					cout<<"\nSubtotal:......................................................$" <<venta;
					cout<<"\nIVA:...........................................................$" <<IVA;
					cout<<"\nTotal a pagar:.................................................$" <<TOTAL;
				
	            	
				}
				else
				{
					/*Si la cantidad de boletos de niños o abuelos superan la cantidad 
					solicitada el sistema arroja un error y te devuelve al principio*/
					cout<<"\nERROR VUELVE A INTRODUCIR LA CANTIDAD DE BOLETOS";

				}
				cout<<"\n";
				cout<<"\nDesea volver al menu"<<endl;
				cin>>desea3;
				getch(); //ESPERA A QUE TECLEES UNA CUALQUIER TECLA PARA CONTINUAR
				system("cls"); // LIMPIA PANTALLA
				

			} while ( (desea3 == 'S') || (desea3 == 's') );
	
			return 0;
}
