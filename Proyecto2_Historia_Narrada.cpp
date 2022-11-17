/*Proyecto 2 - Historia Narrada
Alan Varela

Nombre de juego:


(2022-11-16)
Creacion programa
Desarrollo de historia
(2022-11-17)
Empezar programacion 

*/

#include <iostream>
#include <time.h>
#include <Windows.h>
#include <cstring>
#include <conio.h>
#include <stdio.h>
struct propiedadesJuego
{
	int juegoEnCurso = true;
	int codigo = 1337;
}partida;
struct propiedadesJugador
{
	std::string nombre;
	int vida=100;
	int ataque=1;
	int habilidad=0;
}jugador;


//Funciones Inicio Juego
void barraCarga();
void lluvia();
//Funciones desarrollo Juego
void morir();
void seguir();
int main()
{
	//Variables
	int resp;
	std::cout << R"(
	 _   _               ______      _ _             
	| \ | |             |  ____|    (_) |            
	|  \| | ___  _ __   | |__  __  ___| |_ _   _ ___ 
	| . ` |/ _ \| '_ \  |  __| \ \/ / | __| | | / __|
	| |\  | (_) | | | | | |____ >  <| | |_| |_| \__ \
	|_| \_|\___/|_| |_| |______/_/\_\_|\__|\__,_|___/
     )" << std::endl;
	Sleep(777);
	std::cout << "\n\n Por Alan Varela" << std::endl;
	Sleep(777);
	std::cout << "\n Presiona ENTER para empezar..." << std::endl;
	std::cin.get();
	system("CLS");
	//Desarrollo Juego
	while(partida.juegoEnCurso)
	{ 
		std::cout << "Introduce tu nombre: "; std::cin >> jugador.nombre;
	
		for (int i = 0; i < 40; i++)
		{
			std::cout << "Introduce tu nombre: "<< std::endl;
			Sleep(25);
		}
		system("CLS");
		system("color 1F");
		std::cout << "ERROR FATAL!" << std::endl;
		Sleep(1300);
		system("CLS");
		std::cout << "REINICIANDO EL SISTEMA... " << std::endl;
		Sleep(800);
		barraCarga();
		system("CLS");
		lluvia();
		system("color a");
		system("CLS");
		std::cout << "Lee con atencion " << jugador.nombre << " no tenemos mucho tiempo" << std::endl;
		Sleep(800);
		std::cout<<"\nAun no me conoces pero yo se todo de ti, recuerda este codigo 1337 " << std::endl;
		Sleep(3500);
		system("CLS");
		system("color 7");
		
		std::cout << "Esta es tu primera interaccion del juego\nPara elegir la opcion que deseas escribe el numero de la opcion y presiona ENTER\n" << std::endl;
		do
		{
			std::cout << R"(
			____________________________
			!\_________________________/!\
			!!                         !! \
			!!                         !!  \
			!!                         !!  !
			!!                         !!  !
			!!                         !!  !
			!!                         !!  !
			!!                         !!  !
			!!                         !!  /
			!!_________________________!! /
			!/_________________________\!/
			   __\_________________/__/!_
			  !_______________________!/ )
			________________________    (__
		   /oooo  oooo  oooo  oooo /!   _  )_
		  /ooooooooooooooooooooooo/ /  (_)_(_)
		 /ooooooooooooooooooooooo/ /    (o o)
		/C=_____________________/_/    ==\o/==

		 )" << std::endl;
			std::cout << "Bill: "<<jugador.nombre<<", que le paso a tu maquina, todo bien?" << std::endl;
			std::cout <<"(1) Si\n(2) No" << std::endl;
			std::cin >> resp;
	
			switch (resp)
			{
			case 1:
				std::cout << "\n";
				std::cout << jugador.nombre << ": Si, todo perfecto solo se reinicio mi computadora" << std::endl;
				break;
			case 2:
				std::cout << "\n";
				std::cout << jugador.nombre << ": No, mi computadora se reinicio pero creo que me han hackeado" << std::endl;
				break;
			default:
				system("CLS");
				std::cout << "Elige una opcion valida\n" << std::endl;
				break;
			}
		} while (resp!=1 && resp != 2);
		seguir();
		std::cout << "Recuerda que la opcion que eligas va a tener efecto en la progesion del juego\n";
	   
		do
		{
			std::cout << R"(
			           ***********
				 ***** ***********
			       ** ****** *** ********
			      ****  ******  ** *******
			      ***     ******* ** ******
			      ***       **        *  **
				*|/------  -------\ ** *
				 |       |=|       :===**
				  |  O  |   | O   |  }|*
				   |---- |   ----  |  |*
				   |    |___       |\/
				   |              |
				    \   -----     |
				     \           |
				       -__ -- -/

		 )" << std::endl;
			std::cout << "Bill: Bueno, venia para avisarte que hoy hare una fiesta en mi casa por mi cumpleanos y estas invitado" << std::endl;
			std::cout << "(1) Asistir a la fiesta\n(2) Quedarme en mi departamento " << std::endl;
			std::cin >> resp;

			switch (resp)
			{
			case 1:
				std::cout << jugador.nombre << ": Claro que voy a ir!" << std::endl;
				Sleep(150);
				std::cout << "Smith: Excelente!" << std::endl;
				break;
			case 2:
				std::cout << jugador.nombre << ": Prefiero quedarme en mi departamento, pero gracias por la invitacion" << std::endl;
				Sleep(150);
				std::cout << "Smith: Tu te lo pierdes" << std::endl;
				break;
			default:
				system("CLS");
				std::cout << "Elige una opcion valida\n" << std::endl;
				break;
			}
		} while (resp != 1 && resp != 2);
		seguir();
	
		//Desarrollo de juego en base a las opciones
		//1. Decidio ir a la fiesta de Bill
		if (resp==1)
		{
			std::cout << R"(
						                            
			 (
 
           )
         ( _   _._
          |_|-'_~_`-._
       _.-'-_~_-~_-~-_`-._
   _.-'_~-_~-_-~-_~_~-_~-_`-._
  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    |  []  []   []   []  [] |
    |           __    ___   |   
  ._|  []  []  | .|  [___]  |_._._._._._._._._._._._._._._._._.  
  |=|________()|__|()_______|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=| 
^^^^^^^^^^^^^^^ === ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^  
    _______      ===   
   <_Bill_>       === 
      ^|^             ===
       |                 ===
		 )" << std::endl;
		}
		//1. Decidio quedarse en su departamento
		else
		{
			do
			{
				std::cout << "No fuiste a la fiesta de Bill\nEstas en tu departamento, que deseas hacer?" << std::endl;
				std::cout << "(1) Ver la television\n(2) Seguir trabajando " << std::endl;
				std::cin >> resp;

				switch (resp)
				{
				case 1:
					std::cout << jugador.nombre << ": Voy a ver la television, ya trabaje demasiado por hoy" << std::endl;
					Sleep(150);
					break;
				case 2:
					std::cout << jugador.nombre << ": Voy a seguir trabajando me quedaron unos pendientes que resolver" << std::endl;
					Sleep(150);
					break;
				default:
					system("CLS");
					std::cout << "Elige una opcion valida\n" << std::endl;
					break;
				}
			} while (resp != 1 && resp != 2);
			seguir();
			//2. Vio la television
			if (resp==1)
			{
				do
				{
					std::cout <<"Te quedaste dormido viendo la television, de repente en los pasillos de tu departamento se escucha que estan golpeando las puertas de tus vecinos" << std::endl;
					std::cout << "(1) Investigar\n(2) Ignorarlo" << std::endl;
					std::cin >> resp;
					switch (resp)
					{
					case 1:
						std::cout << jugador.nombre << ": Que raro, voy a ver que sucede" << std::endl;
						Sleep(150);
						break;
					case 2:
						std::cout << jugador.nombre << ": Puede que no sea nada, mejor voy a seguir durmiendo" << std::endl;
						Sleep(150);
						break;
					default:
						system("CLS");
						std::cout << "Elige una opcion valida\n" << std::endl;
						break;
					}
				} while (resp != 1 && resp != 2);
				seguir();
				//3. Decidio ir a investigar
				if (resp==1)
				{
					do
					{
						std::cout << "Sales a los pasillos, al final del pasillo hay 4 hombres de traje\nTe ven y van corriendo hacia ti" << std::endl;
						std::cout << "(1) Enfrentarlos\n(2) Correr" << std::endl;
						std::cin >> resp;

						switch (resp)
						{
						case 1:
							std::cout << jugador.nombre << ": En que les puedo ayudar, que es lo que buscan?" << std::endl;
							Sleep(150);
							std::cout << "Hombre misterioso: A ti "<< jugador.nombre <<", a ti te buscamos" << std::endl;
							break;
						case 2:
							std::cout << "Decidiste correr y los hombres corren detras de ti" << std::endl;
							Sleep(150);
							break;
						default:
							system("CLS");
							std::cout << "Elige una opcion valida\n" << std::endl;
							break;
						}
					} while (resp != 1 && resp != 2);
					seguir();
					//4. Enfrentas a los hombres, te matan
					if (resp==1)
					{
						std::cout <<"Los hombres te rodean" << std::endl;
						Sleep(2000);
						std::cout << "Hombre misterioso: Jefe ya lo tenemos, que hacemos con el?" << std::endl;
						Sleep(2000);
						std::cout << "Hombre misterioso: Entendido" << std::endl;
						std::cout << R"(
					          ^
					         | |
					       @#####@
					     (###   ###)-.
					   .(###     ###) \
					  /  (###   ###)   )
					 (=-  .@#####@|_--"
					 /\    \_|l|_/ (\
					(=-\     |l|    /
					 \  \.___|l|___/
					 /\      |_|   /
					(=-\._________/\
					 \             /
					   \._________/
					    #  ----  #
					    #   __   #
					    \########/			
						)" << std::endl;
						std::cout << "\n\nPresiona ENTER para continuar..." << std::endl;
						std::cin.get();
						system("CLS");
						morir();
					}
					//4. Correr de los hombres
					else
					{
						do
						{
							std::cout << "Hombre misterioso: "<< jugador.nombre<<" puedes correr pero no esconderte" << std::endl;
							std::cout << "Corres afuera de tus departamentos y un hombre te toma del brazo" << std::endl;
							std::cout << "Adiutor: Soy Adiutor, no tengo tiempo para explicarme pero tienes que confiar en mi "<<jugador.nombre<< std::endl;
							std::cout << "(1) Confiar en Adiutor\n(2) Seguir corriendo" << std::endl;
							std::cin >> resp;

							switch (resp)
							{
							case 1:
								std::cout << jugador.nombre << ": En que les puedo ayudar, que es lo que buscan?" << std::endl;
								Sleep(150);
								std::cout << "Hombre misterioso: A ti " << jugador.nombre << ", a ti te buscamos" << std::endl;
								break;
							case 2:
								std::cout << "Decidiste correr y los hombres corren detras de ti" << std::endl;
								Sleep(150);
								break;
							default:
								system("CLS");
								std::cout << "Elige una opcion valida\n" << std::endl;
								break;
							}
						} while (resp != 1 && resp != 2);
					}
				}
				//3. Lo ignoro
				else
				{

				}
			}
			//2. Siguio trabajando
			else
			{

			}
		}
	
	}
	
	
	
	
	
	
return 0;
//main	
}

void barraCarga()
{
	char a = 219;
	for (int r = 1; r <= 25; r++)
	{
		for (int q = 0; q <= 100000020; q++);
		std::cout << a;
	}
}
void lluvia() 
{
	system("color a");
	int matriz[3][3] = { {10000000,11101110,10000110},{10010010,10100101,11111111},{10101010,11100011,10111111} };
	for (int l = 0; l < 50; l++)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
			std::cout << matriz[i][j];
			}
		}
		Sleep(25);
	}
	system("cls");
}
//Funcion morir
void morir()
{
	int opc;
	system("cls");
	system("color 4");
	std::cout << R"(
  __  __            _     _       _  
 |  \/  |          (_)   | |     | | 
 | \  / | ___  _ __ _ ___| |_ ___| | 
 | |\/| |/ _ \| '__| / __| __/ _ \ | 
 | |  | | (_) | |  | \__ \ ||  __/_| 
 |_|  |_|\___/|_|  |_|___/\__\___(_) 
                                     
						)" << std::endl;
	Sleep(2000);
	system("cls");
	system("color 7");
		do
		{
			std::cout << "(1) Jugar de nuevo\n(2) Salir\n";
			std::cin >> opc;

			switch (opc)
			{
			case 1:
				
				std::cout << "\nSuerte!" << std::endl;
				Sleep(5000);
				system("cls");
				break;
			case 2:
				partida.juegoEnCurso = false;
				Sleep(500);
				std::cout << "\nGracias por jugar!\n\n" << std::endl;
				
				break;
			default:
				system("CLS");
				std::cout << "Elige una opcion valida\n" << std::endl;
				break;
			}
		} while (opc != 1 && opc != 2);




}
void seguir()
{
	std::cin.ignore();
	std::cout << "\n\nPresiona ENTER para continuar..." << std::endl;
	std::cin.get();
	system("CLS");	
}