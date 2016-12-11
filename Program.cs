using System;
namespace CINE


{
	class MainClass
	{
		public static void Main(string[] args)
		{


			int pelicula; // EL TIPO DE PELICULA SELECCIONADA
			string desea1, desea2, desea3; //UTILIZADAS PARA DEFINIR LAS CONDICIONES DE LOS CICLOS DO WHILE
			string Queso = "";    //LEE SI DESEAS PONERLE EXTRA QUESO A TUS NACHOS
			double venta = 0;   //ACUMULA EL EL SUBTOTAL A PAGAR
			double TOTAL = 0; //VARIABLE EN LA QUE SE GUARDA EL TOTAL A PAGAR
			int producto;       //LEE EL TIPO DE PRODUCTO SELECCIONADO
			string tamaño = ""; //LEE EL TIPO DE TAMAÑO SELECCIONADO
			int ERROR1 = 0;
			double IVA = 0;
			int BoletosSolicitados = 0; //UTILIZADA PARA LEER LOS BOLETOS SOLICITADOS 
			int boletosniño = 0, BoletosTerceraEdad = 0, boletosAdulto = 0; //ACUMULADORE DE LOS TIPOS DE BOLETOS
			int Totalboletos = 0, CantidadBoletos = 0; //ACUMULADOR DEL PRECIO TOTAL DE BOLETOS Y CANTIDAD TOTAL DE BOLETOS
			string niñYabues = ""; // LEE SI HAY NIÑOS O VIEJITOS
			int PALOMITAS = 0, Chedar = 0, Caramelizadas = 0, Naturales = 0; // ACUMULADOR DEL TOTAL DE APLOMIYAS Y ACUMULADORES DEL LOS TIPOS PALOMITAS
			int SODAS = 0, J = 0, G = 0, M = 0, CH = 0; // ACUMULADPOR DEL TOTAL DE SODAS ACUMULADORES DE LOS TAMAÑOS DE SODAS
			int NACHOS = 0, NachosConQueso = 0, NachosExtraQueso = 0; // NACHOS
			int DOGOS = 0, DogosNormal = 0, DogosDoble = 0; // TAMAÑOS DOGOS
			int DULCES = 0, Gomitas = 0, Chocolates = 0, Paletas = 0, Chicles = 0, Pulparindos = 0;//TIPOS DE DULCES
			int PAQUETES = 0, PAQ1 = 0, PAQ2 = 0, PAQ3 = 0; // PAQUETES 
			int palomita = 0, dulce = 0, comida = 0; //TIPOS DE PRODUCTOS


			do
			{
				Console.WriteLine("BIENVENIDO A CINEPOLIS");
				Console.WriteLine("");

				Console.WriteLine("Cuantos boletos desea comprar?");
				BoletosSolicitados = Convert.ToInt32(Console.ReadLine());// Cantidad de boletos que pidio el cliente
				Console.WriteLine("hay algun niño o abuelo? [S/N]");
				niñYabues = Console.ReadLine();
				if (niñYabues == "S" || niñYabues == "s")
				{
					Console.WriteLine("Ingrese la cantidad de niños");
					boletosniño = Convert.ToInt32(Console.ReadLine());

					if (boletosniño <= BoletosSolicitados)
					{
						Totalboletos = Totalboletos + boletosniño * 25;
						CantidadBoletos = CantidadBoletos + boletosniño;
					}

					Console.WriteLine("Ingrese la cantidad de abuelos:");
					BoletosTerceraEdad = Convert.ToInt32(Console.ReadLine());

					if ((BoletosTerceraEdad + boletosniño) <= BoletosSolicitados)
					{
						Totalboletos = Totalboletos + BoletosTerceraEdad * 25;
						CantidadBoletos = CantidadBoletos + BoletosTerceraEdad;
					}
					else
					{
						ERROR1 = ERROR1 + 1;
					}


				}

				BoletosSolicitados = BoletosSolicitados - boletosniño;
				BoletosSolicitados = BoletosSolicitados - BoletosTerceraEdad;
				Totalboletos = Totalboletos + BoletosSolicitados * 50;
				CantidadBoletos = CantidadBoletos + BoletosSolicitados;
				boletosAdulto = BoletosSolicitados;

				Console.ReadKey();
				Console.Clear();

				if (ERROR1 == 0)
				{
					Console.WriteLine("                 CARTELERA  ");
					Console.WriteLine("");
					Console.WriteLine("[1] Blood in Blood out");
					Console.WriteLine("[2] Inception");
					Console.WriteLine("[3] El infierno");
					Console.WriteLine("[4] Animales fantasticos y donde encontrarlos");
					Console.WriteLine("[5] The danish girl");
					Console.WriteLine("");

					Console.WriteLine("Seleccione una pelicula");
					pelicula = Convert.ToInt32(Console.ReadLine()); //LECTURA DE LA OPCION QUE ELIJAS
					Console.ReadKey();
					Console.Clear();

					//CONDICIONES DEPENDIENDO DE LA PELIUCLA QUE ELEGISTE
					if (pelicula == 1)
					{
						Console.WriteLine("PELICULA SELCCIONADA: Blood in Blood out");
					}
					if (pelicula == 2)
					{
						Console.WriteLine("PELICULA SELCCIONADA: Inception");
					}
					if (pelicula == 3)
					{
						Console.WriteLine("PELICULA SELCCIONADA: El infierno");
					}
					if (pelicula == 4)
					{
						Console.WriteLine("PELICULA SELCCIONADA: Animales fantasticos y donde encontrarlos");
					}
					if (pelicula == 5)
					{
						Console.WriteLine("PELICULA SELCCIONADA: The danish girl");
					}

					Console.WriteLine("");
					Console.WriteLine("DESEA ALGO DE LA DULCERIA? [S/N]");
					desea1 = Console.ReadLine();
					Console.ReadKey();
					Console.Clear();



					if (desea1 == "S" || desea1 == "s")
					{

						do
						{
							Console.Clear();
							Console.WriteLine("QUÉ DESEA COMPRAR?");
							Console.WriteLine("[1] PALOMITAS");
							Console.WriteLine("[2] SODA");
							Console.WriteLine("[3] COMIDA");
							Console.WriteLine("[4] DULCES");
							Console.WriteLine("[5] PAQUETES");

							producto = Convert.ToInt32(Console.ReadLine());
							Console.ReadKey();
							Console.Clear();


							if (producto == 1) // SI ELEGISTE PALOMITAS
							{
								Console.WriteLine("ESCOJA EL TIPO DE PALOMITAS");
								Console.WriteLine("[1]Chedar");
								Console.WriteLine("[2]Dulces");
								Console.WriteLine("[3]Naturales");
								palomita = Convert.ToInt32(Console.ReadLine());
								Console.ReadKey();
								Console.Clear();

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
								Console.WriteLine("ELIJA EL TAMAÑO DE LA SODA");
								Console.WriteLine("");
								Console.WriteLine("[J]JUMBO");
								Console.WriteLine("[G]GRANDE");
								Console.WriteLine("[M]MEDIANA");
								Console.WriteLine("[CH]CHICA");
								tamaño = Console.ReadLine();
								Console.ReadKey();
								Console.Clear();

								if (tamaño == "J" || tamaño == "j")
								{
									venta = venta + 70;
									J = J + 1;
									SODAS = SODAS + 1;
								}
								if (tamaño == "G" || tamaño == "g")
								{
									venta = venta + 60;
									G = G + 1;
									SODAS = SODAS + 1;
								}
								if (tamaño == "M" || tamaño == "m")
								{
									venta = venta + 50;
									M = M + 1;
									SODAS = SODAS + 1;
								}
								if (tamaño == "CH" || tamaño == "ch" || tamaño == "Ch" || tamaño == "cH")
								{
									venta = venta + 45;
									CH = CH + 1;
									SODAS = SODAS + 1;
								}


							}
							if (producto == 3)//SI ELEGISTE COMIDA
							{
								Console.WriteLine("ESCOJE EL TIPO DE COMIDA");
								Console.WriteLine("[1] Nachos con queso");
								Console.WriteLine("[2] Dogo normal");
								Console.WriteLine("[3] Dogo doble");
								comida = Convert.ToInt32(Console.ReadLine());
								Console.ReadKey();
								Console.Clear();

								if (comida == 1)
								{
									Console.WriteLine("DESEA PONERLE EXTRA QUESO?[S/N]");
									Queso = Console.ReadLine();
									Console.ReadKey();
									Console.Clear();

									if (Queso == "S" || Queso == "s")
									{
										venta = venta + 85;
										NachosExtraQueso = NachosExtraQueso + 1;
										NACHOS = NACHOS + 1;
									}
									else
									{
										venta = venta + 70;
										NachosConQueso = NachosConQueso + 1;
										NACHOS = NACHOS + 1;
									}

								}
								if (comida == 2)
								{
									venta = venta + 70;
									DogosNormal = DogosNormal + 1;
									DOGOS = DOGOS + 1;
								}

								if (comida == 3)
								{
									venta = venta + 100;
									DogosDoble = DogosDoble + 1;
								}

							}


							if (producto == 4) //SI ELEGISTE DULCES
							{
								Console.WriteLine("QUE DULCE DECEA COMPRAR?");
								Console.WriteLine("[1]GOMITAS............$15");
								Console.WriteLine("[2]CHOCOLATES.........$20");
								Console.WriteLine("[3]PALETAS............$15");
								Console.WriteLine("[4]CHICLES............$15");
								Console.WriteLine("[5]PULPARINDO.........$15");
								dulce = Convert.ToInt32(Console.ReadLine());
								Console.ReadKey();
								Console.Clear();

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
								Console.WriteLine("ELIJA UN PAQUETE");
								Console.WriteLine("");
								Console.WriteLine("[1]PAQUETE 1: SODA JUMBO, NACHOS, DOGO(15% DE DESCUENTO");
								Console.WriteLine("[2]PAQUETE 2: SODA GRANDE, NACHOS, PALOMITAS(10% DE DESCUENTO");
								Console.WriteLine("[3]PAQUETE 3: SODA CHICA, NACHOS, 3 DULCES(15% DE DESCUENTO");
								PAQUETES = Convert.ToInt32(Console.ReadLine());
								Console.ReadKey();
								Console.Clear();

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


							Console.WriteLine("Desea comprar algo mas? [S/N]");
							desea2 = Console.ReadLine();
							Console.ReadKey();
							Console.Clear();

						} while (desea2 == "S" || desea2 == "s");




					}

					/*Descuento por elegir la pelicula 3, y que el cliente haya comprado una soda 
					  y unos nachos. */
					if ((pelicula == 3) & (SODAS > 0) & (NACHOS > 0))
					{

						Console.WriteLine("Tiene usted un descuento del 10% en su compra final :D");

						venta = venta - venta * 0.10;

					}

					/*Descuento por elegir la pelicula 5 y que hayan sido comprados mas de 2 
					  boletos para viejitos. */
					if (pelicula == 5 & BoletosTerceraEdad > 1)
					{

						Console.WriteLine("Tiene usted un descuento de un boleto de viejito en su compra final :D");
						Totalboletos = Totalboletos - 25;

					}

					Console.WriteLine("PELICULA SELCCIONADA");

					//Condiciones para imprimir una pelicula
					if (pelicula == 1) { Console.WriteLine("Blood in Blood out"); }
					if (pelicula == 2) { Console.WriteLine("Inception"); }
					if (pelicula == 3) { Console.WriteLine("El infierno"); }
					if (pelicula == 4) { Console.WriteLine("Animales fantasticos y donde encontrarlos"); }
					if (pelicula == 5) { Console.WriteLine("The danish girl"); }

					Console.WriteLine("");
					Console.WriteLine("PRODUCTOS VENDIDOS");

					//Condiciones para imprimir los productos vendidos
					if ((PAQ1 > 0) || (PAQ2 > 0) || (PAQ3 > 0)) { Console.WriteLine("COMBOS"); }
					if (PAQ1 > 0) { Console.WriteLine(PAQ1 + " PAQUETES 1...................................................$" + PAQ1 * 178.5); }
					if (PAQ2 > 0) { Console.WriteLine(PAQ2 + " PAQUETES 2...................................................$" + PAQ2 * 184.5); }
					if (PAQ3 > 0) { Console.WriteLine(PAQ3 + " PAQUETES 3...................................................$" + PAQ3 * 152); }
					if (PALOMITAS > 0) { Console.WriteLine(""); }
					if (PALOMITAS > 0) { Console.WriteLine("PALOMITAS"); }
					if (Chedar > 0) { Console.WriteLine(Chedar + " Chedar.......................................................$" + Chedar * 85); }
					if (Caramelizadas > 0) { Console.WriteLine(Caramelizadas + " Dulces.......................................................$" + Caramelizadas * 70); }
					if (Naturales > 0) { Console.WriteLine(Naturales + " Naturales....................................................$" + Naturales * 75); }
					if (SODAS > 0) { Console.WriteLine(""); }
					if (SODAS > 0) { Console.WriteLine("SODAS"); }
					if (J > 0) { Console.WriteLine(J + " Jumbo........................................................$" + J * 70); }
					if (G > 0) { Console.WriteLine(G + " Grandes......................................................$" + G * 60); }
					if (M > 0) { Console.WriteLine(M + " Medianas.....................................................$" + M * 50); }
					if (CH > 0) { Console.WriteLine(CH + " Chicas.......................................................$" + CH * 45); }
					if (DULCES > 0) { Console.WriteLine(""); }
					if (DULCES > 0) { Console.WriteLine(DULCES + " DULCES"); }
					if (Gomitas > 0) { Console.WriteLine(Gomitas + " Gomitas......................................................$" + Gomitas * 15); }
					if (Chocolates > 0) { Console.WriteLine(Chocolates + " Chocolates...................................................$" + Chocolates * 20); }
					if (Paletas > 0) { Console.WriteLine(Paletas + " Paletas......................................................$" + Paletas * 15); }
					if (Chicles > 0) { Console.WriteLine(Chicles + " Chicles......................................................$" + Chicles * 15); }
					if (Pulparindos > 0) { Console.WriteLine(Pulparindos + " Pulparindo...................................................$" + Pulparindos * 15); }
					Console.WriteLine(venta);
					//Boletos vendidos
					if (CantidadBoletos > 0) { Console.WriteLine(""); }
					if (CantidadBoletos > 0) { Console.WriteLine("BOLETOS VENDIDOS"); }
					if (boletosniño > 0) { Console.WriteLine(boletosniño + " Boletos de niño..............................................$" + boletosniño * 25); }
					if (boletosAdulto > 0) { Console.WriteLine(boletosAdulto + " Boletos de adulto............................................$" + boletosAdulto * 50); }
					if (BoletosTerceraEdad > 0) { Console.WriteLine(BoletosTerceraEdad + " Boletos de viejito...........................................$" + BoletosTerceraEdad * 25); }

					//Total a pagar
					venta = venta + Totalboletos; //SUMA EL PRECIO DE LOS BOLETOS A EL TOTAL FINAL
					IVA = venta * 0.16; //CALCULO PARA SACAR EL IVA 
					TOTAL = venta + IVA;//SUMA EL IVA AL TOTAL FINAL

					Console.WriteLine("");
					if (Totalboletos > 0) { Console.WriteLine("Precio de los boletos:.........................................$" + Totalboletos); }
					Console.WriteLine("Subtotal:......................................................$" + venta);
					Console.WriteLine("IVA:...........................................................$" + IVA);
					Console.WriteLine("Total a pagar:.................................................$" + TOTAL);

				}
				else
				{
					/*Si la cantidad de boletos de niños o abuelos superan la cantidad 
					solicitada el sistema arroja un error y te devuelve al principio*/
					Console.WriteLine("ERROR VUELVE A INTRODUCIR LA CANTIDAD DE BOLETOS");

				}


				desea3 = Console.ReadLine();
				Console.ReadKey();
				Console.Clear();

			} while ( (desea3 != "CLOSE") || (desea3 != "close") );
		}
	}
}
/*	PALOMITAS
	Chedar.......................................................$85
	Dulces.......................................................$70
	Naturales....................................................$75

	SODAS
	Jumbo........................................................$70
	Grande.......................................................$65
	Mediana......................................................$50
	Chicas.......................................................$45

	COMIDAS
	NACHOS $70 - Extra queso +$15
	Dogo $70 - doble.............................................$100

	DULCES
	Gomitas.............. .......................................$15
	Chocolates...................................................$20
	Paletas......................................................$15
	Chicles......................................................$15
	Pulparindo...................................................$15

	PAQUETES
	PAQUETE 1: SODA JUMBO, NACHOS, DOGO(15% DE DESCUENTO)........$178.5
	PAQUETE 2: SODA GRANDE, NACHOS, PALOMITAS(10% DE DESCUENTO)..$184.5
	PAQUETE 3: SODA CHICA, NACHOS, 3 DULCES(5% DE DESCUENTO).....$152
																		*/
