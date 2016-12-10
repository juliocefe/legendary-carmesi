using System;
namespace CINE


{
	class MainClass
	{
		public static void Main(string[] args)
		{



			Console.WriteLine("Bienvenido a cinepolis");
			Console.WriteLine("");

			int boleto = 50, Aboletos = 0, producto2 = 0;
			string desea1, desea;
			string QUESO = "", DOGOGRANDE = "";
			double venta = 0, Tboletos = 0, cboletos = 0;
			int producto;
			string pelicula = "", tamaño = "";
			string P1, P2, P3, P4, P5;
			double promo = 0;
			double IVA;
			int niños = 0, mayores = 0; //boletos de niños  adulto
			string niñYabues = "";
			int PAL = 0, CHE = 0, DUL = 0, NAT = 0; // PALOMITAS
			int SOD = 0, J = 0, G = 0, M = 0, CH = 0; // TAMANO DE SODAS
			int NACH = 0, NACHQ = 0; // NACHOS
			int DOG = 0, DOGD = 0; // TAMANOS DOGOS
			int DULCES = 0, GOM = 0, CHO = 0, PALE = 0, CHIC = 0, PUL = 0;
			int PQ1 = 0, PQ2 = 0, PQ3 = 0; // PAQUETES 
			int palomita = 0, soda = 0, dulce = 0, paquete = 0, comida = 0; //TIPOS DE PRODUCTOS



			Console.WriteLine("Cuantos boletos desea comprar");
			Aboletos = Convert.ToInt32(Console.ReadLine());// boletos de adulto
			Console.WriteLine("hay algun niño o abuelo?");
			niñYabues = Console.ReadLine();
			if (niñYabues == "Si" || niñYabues == "si" || niñYabues == "SI" || niñYabues == "zi" || niñYabues == "ci")
			{
				Console.WriteLine("Ingrese la cantidad de niños");
				niños = Convert.ToInt32(Console.ReadLine());
				if (niños < Aboletos)
				{
					Tboletos = Tboletos + niños * 25;
					cboletos = cboletos + niños;
					Aboletos = Aboletos - niños;
				}
				Console.WriteLine("Ingrese la cantidad de abuelos:");
				mayores = Convert.ToInt32(Console.ReadLine());
				if (mayores < Aboletos)
				{
					Tboletos = Tboletos + mayores * 25;
					cboletos = cboletos + mayores;
					Aboletos = Aboletos - mayores;
				}
				Tboletos = Tboletos + Aboletos * boleto;
				cboletos = cboletos + Aboletos;

			}
			Console.ReadKey();
			Console.Clear();



			Console.WriteLine("                 MENU  ");
			Console.WriteLine("");
			Console.WriteLine(P1 = "[1]Blood in Blood out");
			Console.WriteLine(P2 = "[2]El infierno");
			Console.WriteLine(P3 = "[3]A la mas grande le puse cuca");
			Console.WriteLine(P4 = "[4]AI MUCHAS COSAS WUUUUU");
			Console.WriteLine(P5 = "[5]E.T");

			Console.WriteLine("");
			Console.WriteLine("Seleccione una pelicula");
			pelicula = Convert.ToString(Console.ReadLine());
			Console.WriteLine(pelicula);
			Console.WriteLine("Desea usted algo de la dulceria? [S/N]");
			desea1 = Console.ReadLine();



			if (desea1 == "S" || desea1 == "s")
			{
				//Console.WriteLine("         DULCERIA");
				//Console.WriteLine("");
				//Console.WriteLine("PALOMITAS");
				//Console.WriteLine("Chedar................$85");
				//Console.WriteLine("Dulces................$70");
				//Console.WriteLine("Naturales.............$75");
				//Console.WriteLine("");
				//Console.WriteLine("SODA");
				//Console.WriteLine("JUMBO.................$70");
				//Console.WriteLine("GRANDE................$65");
				//Console.WriteLine("MEDIANA...............$50");
				//Console.WriteLine("CHICA.................$45");
				//Console.WriteLine("");
				//Console.WriteLine("COMIDA");
				//Console.WriteLine("NACHOS $70 - Extra queso +$15");
				//Console.WriteLine("Dogo $70 - doble....$100");
				//Console.WriteLine("");
				//Console.WriteLine("DULCES");
				//Console.WriteLine("Gomitas...............$15");
				//Console.WriteLine("Chocolates............$20");
				//Console.WriteLine("Paletas...............$15");
				//Console.WriteLine("Chicles...............$15");
				//Console.WriteLine("Pulparindo............$20");
				//Console.WriteLine("[PAQ1]PAQUETE 1: SODA JUMBO, NACHOS, DOGO(15% DE DESCUENTO");
				//Console.WriteLine("[PAQ2]PAQUETE 2: SODA GRANDE, NACHOS, PALOMITAS(10% DE DESCUENTO");
				//Console.WriteLine("[PAQ3]PAQUETE 3: SODA CHICA, NACHOS, 3 DULCES(15% DE DESCUENTO");
				//Console.ReadKey();
				//Console.Clear();

				do
				{
					Console.Clear();
					Console.WriteLine("Qué desea comprar?");
					Console.WriteLine("[1]PALOMITAS");
					Console.WriteLine("[2]SODA");
					Console.WriteLine("[3]COMIDA");
					Console.WriteLine("[4]DULCES");
					Console.WriteLine("[5]PAQUETES");
					producto = Convert.ToInt32(Console.ReadLine());
					Console.ReadKey();
					Console.Clear();


					if (producto == 1) // SI ELEGISTE PALOMITAS
					{
						Console.WriteLine("            Escoge el tipo de palomita");
						Console.WriteLine("");
						Console.WriteLine("[1]Chedar................$85");
						Console.WriteLine("[2]Dulces................$70");
						Console.WriteLine("[3]Naturales.............$75");
						palomita = Convert.ToInt32(Console.ReadLine());
						if (palomita == 1)
						{
							venta += 85;
							CHE = CHE + 1;
						}
						if (palomita == 2)
						{
							venta += 70;
							DUL = DUL + 1;

						}
						if (palomita == 3)
						{
							venta += 45;
							NAT = NAT + 1;
						}
					}
					if (producto == 2) // SI ELEGISTE SODA
					{
						Console.WriteLine("        Elija el tamaño de la soda");
						Console.WriteLine("");
						Console.WriteLine("[J]JUMBO");
						Console.WriteLine("[G]GRANDE");
						Console.WriteLine("[M]MEDIANA");
						Console.WriteLine("[CH]CHICA");
						tamaño = Console.ReadLine();

						if (tamaño == "J")
						{
							venta += 70;
							J = J + 1;
						}
						if (tamaño == "G")
						{
							venta += 65;
							G += 1;
						}
						if (tamaño == "M")
						{
							venta += 50;
							M = M + 1;
						}
						if (tamaño == "CH")
						{
							venta += 45;
							CH = CH + 1;
						}
						SOD = SOD + 1;

					}
					if (producto == 3)//SI ELEGISTE COMIDA
					{
						Console.WriteLine("          Escoge el tipo de comida");
						Console.WriteLine("[1]NACHOS $70 - Extra queso +$15");
						Console.WriteLine("[2]Dogo $70 - doble....$100");
						comida = Convert.ToInt32(Console.ReadLine());

						if (comida == 1)
						{
							Console.WriteLine("Desea su dogo grande? [S/N]");
							DOGOGRANDE = Console.ReadLine();

							if (DOGOGRANDE == "S" || DOGOGRANDE == "s")
							{
								venta += 100;
								DOGD = DOGD + 1;
							}
							else
							{
								venta += 70;
								DOG = DOG + 1;
							}
						}
						if (comida == 2)
						{
							Console.WriteLine("DESEA PONERLE EXTRA QUESO?[S/N]");
							QUESO = Console.ReadLine();
							if (QUESO == "S" || QUESO == "s")
							{
								venta += 85;
								NACHQ += 1;
							}
							else
							{
								venta += 70;
								NACH += 1;
							}
							producto2 = producto2 + 1;
						}

					}

					if (producto == 4)
					{
						Console.WriteLine("QUE DULCE DECEA COMPRAR?");
						Console.WriteLine("[1]GOMITAS");
						Console.WriteLine("[2]CHOCOLATES");
						Console.WriteLine("[3]PALETAS");
						Console.WriteLine("[4]CHICLES");
						Console.WriteLine("[5]PULPARINDO");

						if (dulce == 1)
						{
							venta += 15;
							GOM = GOM + 1;
							DULCES = DULCES + 1;
						}
						if (dulce == 2)
						{
							venta += 15;
							CHO = CHO + 1;
							DULCES = DULCES + 1;
						}
						if (dulce == 3)
						{
							venta += 15;
							PALE = PALE + 1;
							DULCES = DULCES + 1;
						}
						if (dulce == 4)
						{
							venta += 15;
							CHIC = CHIC + 1;
							DULCES = DULCES + 1;
						}
						if (dulce == 5)
						{
							venta += 15;
							PUL = PUL + 1;
							DULCES = DULCES + 1;

						}

					}
					if (producto == 5) // SI ELEGISTE PAQUETES
					{
						Console.WriteLine("                    Elija un paquete");
						Console.WriteLine("");
						Console.WriteLine("[1]PAQUETE 1: SODA JUMBO, NACHOS, DOGO(15% DE DESCUENTO");
						Console.WriteLine("[2]PAQUETE 2: SODA GRANDE, NACHOS, PALOMITAS(10% DE DESCUENTO");
						Console.WriteLine("[3]PAQUETE 3: SODA CHICA, NACHOS, 3 DULCES(15% DE DESCUENTO");
						paquete = Convert.ToInt32(Console.ReadLine());

						if (paquete == 1)
						{
							venta += 178.5;
							PQ1 = PQ2 + 1;
						}
						if (paquete == 2)
						{
							venta += 85;
							PQ2 = PQ2 + 1;
						}
						if (paquete == 3)
						{
							venta += 85;
							PQ3 = PQ3 + 1;
						}
					}
					if (pelicula == "P3")
					{

						if (producto == 2 & producto2 == 1)
						{

							Console.WriteLine("Tiene usted un descuento del 10% en su compra final :D");
							promo += (75 + 70) * 0.10;
							venta = (75 + 70) - promo;
						}
					}

					Console.WriteLine("Desea comprar algo mas?");
					desea = Console.ReadLine();

				} while (desea == "Si" || desea == "si" || desea == "SI" || desea == "zi" || desea == "ci");




			}
			if (pelicula == "P5" & mayores > 1)
			{

				Tboletos = Tboletos - 25;

			}


			if (PQ1 > 0) { Console.WriteLine(PQ1 + " PAQUETES 1 VENDIDOS"); }
			if (PQ2 > 0) { Console.WriteLine(PQ2 + " PAQUETES 2 VENDIDOS"); }
			if (PQ3 > 0) { Console.WriteLine(PQ3 + " PAQUETES 3 VENDIDOS"); }
			if (PAL > 0) { Console.WriteLine(PAL + " PALOMITAS VENDIDAS"); }
			if (CHE > 0) { Console.WriteLine(CHE + " CHEDAR"); }
			if (DUL > 0) { Console.WriteLine(DUL + " DULCES"); }
			if (NAT > 0) { Console.WriteLine("		" + NAT + "PALOMITAS NATURALES"); }
			if (SOD > 0) { Console.WriteLine(SOD + " SODAS VENDIDAS"); }
			if (J > 0) { Console.WriteLine(J + " SODAS JUMBO"); }
			if (G > 0) { Console.WriteLine(G + " SODAS GRANDE"); }
			if (M > 0) { Console.WriteLine(M + " SODAS  MEDIANA"); }
			if (CH > 0) { Console.WriteLine(CH + " SODAS CHICAS"); }
			if (DULCES > 0) { Console.WriteLine(DULCES + " DULCES VENDIDOS"); }
			if (GOM > 0) { Console.WriteLine(GOM + " GOMITAS"); }
			if (CHO > 0) { Console.WriteLine(CHO + " CHOCOLATES"); }
			if (PALE > 0) { Console.WriteLine(PALE + " PALETAS"); }
			if (CHIC > 0) { Console.WriteLine(CHIC + " CHICLES"); }
			if (PUL > 0) { Console.WriteLine(PUL + " PULPARINDO"); }
			if (cboletos > 0) { Console.WriteLine(cboletos + "BOLETOS"); }
			if (PUL > 0) { Console.WriteLine(niños + "Boletos de niños $20(pz)"); }
			if (Aboletos > 0) { Console.WriteLine(Aboletos + "Boletos de adulto $50(pz)"); }
			if (mayores > 0) { Console.WriteLine(mayores + "Boletos de mayores $25(pz)"); }

			Console.WriteLine("");
			IVA = venta * 0.16;
			venta += Tboletos;
			venta += IVA;
			if (Tboletos > 0) { Console.WriteLine("Precio de los boletos: $" + Tboletos); }
			Console.WriteLine("Subtotal: $" + venta);
			Console.WriteLine("IVA: $" + IVA);
			Console.WriteLine("Total a pagar: $" + venta);

		}
	}
}
