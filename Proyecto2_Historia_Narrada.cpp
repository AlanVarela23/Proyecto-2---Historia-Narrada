/*Proyecto 2 - Historia Narrada
Alan Varela

Nombre de juego: Non Exitus

*/

#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <cstdlib>

struct propiedadesJuego
{
	int juegoEnCurso = true;
}partida;
struct propiedadesJugador
{
	std::string nombre;

}jugador;


//Funciones Inicio Juego
void barraCarga();
void lluvia();
//Funciones desarrollo Juego
void morir();
void sobrevivir();
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
	//Prologo
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
	std::cout<<"\nRecuerda este codigo 1337 y ten cuidado, tu vida esta en peligro" << std::endl;
	Sleep(800);
	std::cout<<"\nNo confies en nadie";
	Sleep(3700);
	system("CLS");
	system("color 7");
	std::cout << "Esta es tu primera interaccion del juego\nPara elegir la opcion que deseas escribe el numero de la opcion y presiona ENTER\n" << std::endl;
	//Bill te pregunta sobre tu maquina, primera interaccion no tiene efecto en el juego
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
				std::cout << jugador.nombre << ": No, mi computadora se reinicio y creo que me han hackeado" << std::endl;
				break;
			default:
				system("CLS");
				std::cout << "Elige una opcion valida\n" << std::endl;
				break;
			}
	} while (resp!=1 && resp != 2);
	seguir();
	//desarrollo de juego
	while(partida.juegoEnCurso)
	{	
		std::cout << "Recuerda que la opcion que eligas va a tener efecto en la progresion del juego\n";
	   
		//Bill te invita a su fiesta, decides si quedarte en tu departamento o ir a la fiesta, la historia se desarrolla
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
				std::cout << "\n";
				std::cout << jugador.nombre << ": Claro que voy a ir!" << std::endl;
				Sleep(1000);
				std::cout << "Bill: Excelente!" << std::endl;
				break;
			case 2:
				std::cout << "\n";
				std::cout << jugador.nombre << ": Prefiero quedarme en mi departamento, pero gracias por la invitacion" << std::endl;
				Sleep(1000);
				std::cout << "Bill: Tu te lo pierdes" << std::endl;
				break;
			default:
				system("CLS");
				std::cout << "Elige una opcion valida\n" << std::endl;
				break;
			}
		} while (resp != 1 && resp != 2);
		seguir();
	
		//Desarrollo de juego en base a las OPCIONES
		//1. Decidio ir a la fiesta de Bill 
		if (resp == 1)
		{
			
			std::cout << R"(			                            
			 
 
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
			Sleep(700);
			std::cout << "Fuiste a la fiesta de Bill" << std::endl;
			Sleep(700);
			std::cout << "Bill: "<<jugador.nombre<<" si veniste, por favor pasa" << std::endl;
			Sleep(1500);
			std::cout << "\n\nPresiona ENTER para continuar..." << std::endl;
			std::cin.get();
			system("CLS");
			do
			{
std::cout << R"(			                            
			 
   _                             .-.
  / )  .-.    ___          __   (   )
 ( (  (   ) .'___)        (__'-._) (
  \ '._) (,'.'               '.     '-.
   '.      /  "\               '    -. '.
     )    /   \ \   .-.   ,'.   )  (  ',_)    _
   .'    (     \ \ (   \ . .' .'    )    .-. ( \
  (  .''. '.    \ \|  .' .' ,',--, /    (   ) ) )
   \ \   ', :    \    .-'  ( (  ( (     _) (,' /
    \ \   : :    )  / _     ' .  \ \  ,'      /
  ,' ,'   : ;   /  /,' '.   /.'  / / ( (\    (
  '.'      "   (    .-'. \       ''   \_)\    \
                \  |    \ \__             )    )
              ___\ |     \___;           /  , /
             /  ___)                    (  ( (
             '.'                         ) ;) ;
                                        (_/(_/
		 )" << std::endl;
			Sleep(1500);
			std::cout << "Bill: Quieres algo de tomar "<< jugador.nombre<< "?" << std::endl;
			std::cout << "(1) Si\n(2) No " << std::endl;
			std::cin >> resp;
			switch (resp)
			{
			case 1:
				std::cout << "\n";
				std::cout << jugador.nombre << ": Si, por favor" << std::endl;
				Sleep(1500);
				std::cout << "Bill: Toma esto te va a gustar" << std::endl;
				Sleep(1500);
				break;
			case 2:
				std::cout << "\n";
				std::cout << jugador.nombre << ": Gracias, pero no tomo" << std::endl;
				Sleep(1500);
				break;
			default:
				system("CLS");
				std::cout << "Elige una opcion valida\n" << std::endl;
				break;
			}

			} while (resp != 1 && resp != 2);
			seguir();
			//2 Decidio Tomar MUERTE
			if (resp==1)
			{
				std::cout << R"(			                            
			 
                _________________
               <_________________>
                \ _________o___ /
                  \    o  .   /
                    \   .   /
                      \   /
                       | |
                       | |
                       | |
                       | |
                    ___| |___
                 _--         --_
                   -----------
		 )" << std::endl;
				std::cout << jugador.nombre << ": Que es esto?" << std::endl;
				Sleep(1500);
				std::cout << jugador.nombre << ": No me siento muy bien" << std::endl;
				Sleep(1500);
				std::cout << "Bill: Ayudenme a subirlo" << std::endl;
				Sleep(1500);
				std::cout << "\n\nPresiona ENTER para continuar..." << std::endl;
				std::cin.get();
				system("CLS");
				std::cout << R"(			                            
				
                                          .------.
                                         :|||"""`.`.
                                         :|||     7.`.
                      .===+===+===+===+===||`----L7'-`7`---.._
                      []                  || ==       |       """-.
                      []...._____.........||........../ _____ ____|
                     c\____/,---.\_       ||_________/ /,---.\_  _/
                       /_,-/ ,-. \ `._____|__________||/ ,-. \ \_[
                          /\ `-' /                    /\ `-' /
                            `---'                       `---'
				)" << std::endl;
				std::cout << jugador.nombre << ": A donde me llevan?!" << std::endl;
				Sleep(1500);
				std::cout << "Bill: Callate no hagas ruido!" << std::endl;
				Sleep(1500);
				std::cout << "\n\nPresiona ENTER para continuar..." << std::endl;
				std::cin.get();
				system("CLS");
				std::cout << R"(			                            
				
                        _..-:-.._
                      _..--''    :    ``--.._
               _..--''           :           ``--.._
         _..-''                  :                .'``--.._
  _..--'' `.                     :              .'         |
 |          `.              _.-''|``-._       .'           |
 |            `.       _.-''     |     ``-._.'       _.-.  |
 |   |`-._      `._.-''          |  ;._     |    _.-'   |  |
 |   |    `-._    |     _.-|     |  |  `-.  |   |    _.-'  |  
 |_   `-._    |   |    |   |     |  `-._ |  |   |_.-'   _.-'   ..
   `-._   `-._|   |    |.  |  _.-'-._   `'  |       _.-'   ..::::::..
       `-._       |    |  _|-'  *    `-._   |   _.-'   ..::::::::''
           `-._   |   _|-'.::. \|/  *    `-.|.-'   ..::::::::''
               `-.|.-' *`:::::::.. \|/  *      ..::::::::''
                      \|/  *`:::::::.. \|/ ..::::::::''
				)" << std::endl;
				std::cout << jugador.nombre << ": Que es este lugar?" << std::endl;
				Sleep(1500);
				std::cout << jugador.nombre << ": Ayudaaa!!" << std::endl;
				Sleep(1500);
				std::cout << "Bill: Grita todo lo que quieras aqui nadie te va a ayudar" << std::endl;
				Sleep(1500);
				std::cout << "\n\nPresiona ENTER para continuar..." << std::endl;
				std::cin.get();
				system("CLS");
				std::cout << "Despiertas el siguiente dia en un cuarto oscuro\nAlcanzas a percibir que hay una persona contigo" << std::endl;
				Sleep(2000);
				std::cout << jugador.nombre << ": Quien esta ahi?" << std::endl;
				Sleep(2000);
				std::cout << "Bill: "<<jugador.nombre<<" eres tu?"<< std::endl;
				Sleep(2000);
				std::cout << jugador.nombre << ": Bill que te pasa porque me secuestras?" << std::endl;
				Sleep(2000);
				std::cout << "Bill: " << jugador.nombre << " no fui yo, a mi tambien me secuestraron" << std::endl;
				Sleep(2000);
				std::cout << "Bill: Ellos pueden cambiar de forma" << std::endl;
				Sleep(2000);
				std::cout << jugador.nombre << ": QUIENES SON ELLOS?" << std::endl;
				Sleep(2000);
				std::cout << "Guardia: No esten hablando" << std::endl;
				Sleep(2000);
				std::cout << "Guardia: A ti ya no te necesitamos" << std::endl;
				Sleep(2000);
				std::cout << "Bill: A mi?" << std::endl;
				std::cout << "\n\nPresiona ENTER para continuar..." << std::endl;
				std::cin.get();
				system("CLS");
				std::cout << R"(			                            
				
(                                 _
   )                               /=>
  (  +____________________/\/\___ / /|
   .''._____________'._____      / /|/\
  : () :              :\ ----\|    \ )
   '..'______________.'0|----|      \
                    0_0/____/        \
                        |----    /----\
                       || -\\ --|      \
                       ||   || ||\      \
                        \\____// '|      \
Bang! Bang!                     .'/       |
                               .:/        |
                               :/_________|
				)" << std::endl;
				Sleep(2000);
				std::cout << jugador.nombre << ": NOOO! BILL!" << std::endl;
				Sleep(2000);
				std::cout << "\nEl guardia toma y saca el cuerpo de Bill del cuarto" << std::endl;
				Sleep(2000);
				std::cout << "\n\nPresiona ENTER para continuar..." << std::endl;
				std::cin.get();
				system("CLS");
				std::cout << R"(			                            
       .-""""-.        
      /        \      
     /_        _\    
    // \      / \\  
    |\__\    /__/|  
     \    ||    /    
      \        /      
       \  __  /      
        '.__.'         
         |  |           
         |  |          
				)" << std::endl;
				Sleep(2000);
				std::cout << "Bulla: Por fin te conozco "<<jugador.nombre<< " , no tienes idea de todos los problemas que vas a ocasionar en un futuro"<< std::endl;
				Sleep(3000);
				std::cout << "Bulla: Que mejor que usar tu creacion para destruirte" << std::endl;
				Sleep(3000);
				std::cout << jugador.nombre << ": De que estas hablando?" << std::endl;
				Sleep(2000);
				std::cout << "Bulla: Matenlo" << std::endl;
				Sleep(2500);
				morir();
			}
			//2 No tomo
			else
			{
				do {
					std::cout << R"(			                            			 
     ______________
    |______________|
    |NUEVO MENSAJE |
    |Sal de esa    |
    |fiesta ese    |
    |no es Bill    |
    |Te veo afuera |
    |              |
    |              |
    |              |
    |              |
    |              |
    |              |
    |              |
    |--------------|
     --------------		 
)" << std::endl;
					Sleep(2000);
					std::cout << "Bill: " << jugador.nombre << " como te la estas pasando?" << std::endl;
					Sleep(1500);
					std::cout << "Bill: Se que dijiste que no tomas pero prueba esta bebida, creo que te va a gustar" << std::endl;
					Sleep(1500);
					std::cout << "(1) Tomar bebida\n(2) Salir de la fiesta" << std::endl;
					std::cin >> resp;
					switch (resp)
					{
					case 1:
						std::cout << "\n";
						std::cout << jugador.nombre << ": Ok, a ver a que sabe" << std::endl;
						Sleep(1500);
						break;
					case 2:
						std::cout << "\n";
						std::cout << jugador.nombre << ": Gracias por la fiesta Bill pero creo que yo me paso a retirar" << std::endl;
						Sleep(1500);
						break;
					default:
						system("CLS");
						std::cout << "Elige una opcion valida\n" << std::endl;
						break;
					}
				} while (resp != 1 && resp != 2);
				seguir();
				//3 Tomo la bebida MUERTE
				if (resp==1)
				{
					Sleep(500);
					std::cout << "15 minutos antes...\n" << std::endl;
					Sleep(1700);
					system("CLS");
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
					Sleep(2000);
					std::cout << "Hombre misterioso: Vincta ya saben que lo estamos buscando" << std::endl;
					Sleep(1700);
					std::cout << "Hombre misterioso: Plan B, busca la forma de matarlo de una manera rapida y silenciosa" << std::endl;
					Sleep(1700);
					std::cout << "Bill(Vincta): Entendido" << std::endl;
					Sleep(1700);
					std::cout << "\n\nPresiona ENTER para continuar..." << std::endl;
					std::cin.get();
					system("CLS");
					std::cout << "Presente..." << std::endl;
					Sleep(1700);
					system("CLS");
					std::cout << R"(			                            
			 
                _________________
               <_________________>
                \ _________o___ /
                  \    o  .   /
                    \   .   /
                      \   /
                       | |
                       | |
                       | |
                       | |
                    ___| |___
                 _--         --_
                   -----------
		 )" << std::endl;
					Sleep(1500);
					std::cout << jugador.nombre << ": Que me diste, me siento muy mal" << std::endl;
					Sleep(2000);
					std::cout << "Bill(Vincta): Ya esta hecho jefe" << std::endl;
					Sleep(2300);
					morir();
				}
				//3 NO tomo la bebida lo emboscaron MUERTE
				else
				{
					std::cout <<"Vas saliendo de la fiesta cuando de pronto..." << std::endl;
					Sleep(2000);
					system("CLS");
					std::cout << R"(			                            			 
        __.,,------.._
      ,'"   _      _   "`.
     /.__, ._  -=- _"`    Y
    (.____.-.`      ""`   j
     VvvvvvV`.Y,.    _.,-'       ,     ,     ,
        Y    ||,   '"\         ,/    ,/    ./
        |   ,'  ,     `-..,'_,'/___,'/   ,'/   ,
   ..  ,;,,',-'"\,'  ,  .     '     ' ""' '--,/    .. ..
 ,'. `.`---'     `, /  , Y -=-    ,'   ,   ,. .`-..||_|| ..
ff\\`. `._        /f ,'j j , ,' ,   , f ,  \=\ Y   || ||`||_..
l` \` `.`."`-..,-' j  /./ /, , / , / /l \   \=\l   || `' || ||...
 `  `   `-._ `-.,-/ ,' /`"/-/-/-/-"'''"`.`.  `'.\--`'--..`'_`' || ,
            "`-_,',  ,'  f    ,   /      `._    ``._     ,  `-.`'//         ,
          ,-"'' _.,-'    l_,-'_,,'          "`-._ . "`. /|     `.'\ ,       |
        ,',.,-'"          \=) ,`-.         ,    `-'._`.V |       \ // .. . /j
        |f\\               `._ )-."`.     /|         `.| |        `.`-||-\\/
        l` \`                 "`._   "`--' j          j' j          `-`---'
         `  `                     "`,-  ,'/       ,-'"  /
                                 ,'",__,-'       /,, ,-'
                                 Vvv'            VVv'
					)" << std::endl;
					Sleep(2000);
					system("CLS");
					std::cout << R"(			                            			 
                           ______
        |\_______________ (_____\\______________
HH======#H###############H#######################
        ' ~""""""""""""""`##(_))#H\"""""Y########
                          ))    \#H\       `"Y###
                          "      }#H)
					)" << std::endl;
					Sleep(2000);
					system("CLS");
					std::cout << R"(
   .------\ /------.
   |       -       |
   |               |
   |               |
   |               |
_______________________
===========.===========
  / ~~~~~     ~~~~~ \
 /|     |     |      \
 W   ---  / \  ---   W
 \.      |o o|      ./
  |                 |
  \    #########    /
   \  ## ----- ##  /
    \##         ##/
     \_____v_____/

		 )" << std::endl;
					Sleep(1000);
					std::cout << "Adiutor: Soy Adiutor, ven conmigo " << std::endl;
					Sleep(3000);
					system("CLS");
					std::cout << R"(
             ____----------- _____
\~~~~~~~~~~/~_--~~~------~~~~~     \
 `---`\  _-~      |                   \
   _-~  <_         |                     \[]
 / ___     ~~--[""] |      ________-------'_
> /~` \    |-.   `\~~.~~~~~                _ ~ - _
 ~|  ||\%  |       |    ~  ._                ~ _   ~ ._
   `_//|_%  \      |          ~  .              ~-_   /\
          `--__     |    _-____  /\               ~-_ \/.
               ~--_ /  ,/ -~-_ \ \/          _______---~/
                   ~~-/._<   \ \`~~~~~~~~~~~~~     ##--~/
                         \    ) |`------##---~~~~-~  ) )
                          ~-_/_/                  ~~ ~~
								)" << std::endl;


						std::cout << "Adiutor: Sube" << std::endl;
						Sleep(2000);
						std::cout << jugador.nombre << ": Como se que puedo confiar en ti?" << std::endl;
						Sleep(2000);
						std::cout << "Adiutor: Soy el unico que te puede ayudar " << jugador.nombre << std::endl;
						Sleep(2000);
						std::cout << "\n\nPresiona ENTER para continuar..." << std::endl;
						std::cin.get();
						system("CLS");
						std::cout << "Adiutor esta hablando por telefono... " << std::endl;
						Sleep(2000);
						std::cout << "Adiutor: Si senor ya viene conmigo " << std::endl;
						Sleep(2000);
						std::cout << "Adiutor: QUE? " << std::endl;
						Sleep(2000);
						std::cout << "Adiutor: Cambio de planes" << std::endl;
						Sleep(2000);
						std::cout << jugador.nombre << ": Quienes son ellos?" << std::endl;
						std::cout << R"(
                                              ____
                             ______...-----'_'____\.
             _____.....----==---'\|-----''''        \
            /--------'''''  ____ |                   \
           /  __..--- | .-''    \|\                   \-___
          /| |       || |     __ | \           ____..-'    `---._
         //  |       || |    [__]| |__...----''                  `-.__
 _______//|  |       || |______\\| \ == _____         ____..---''''   \
/_______/ |  `-------'|         `\  |==.     ``---.--'   .-\\\\\\\\\| )
|         | [-]       |[-]          | //          | [ ] (  )|||||||||_'|
|         \           |             |// .-------   \_____`.----''  \ ()|
|    _____ \          |         ___ |` /    ____\_   |   (_) |__..-'   |
\   /     \ \  ____..-| -----'''    | /  .-'      `-_|_               _|
|  /  _--'-\ \         \            | | /    ___     \ |  ____:F_P:-''/
| |  /---_    `-.______|__...------'/ //  .-'   `\    \|_/      __/_-/
 \| / .-. \   _ `--..__\___...-----' | |  |  .-.  |   | ____---'/    |
   | /   \ \  \`-_____....-----------'_|  | (   ) |   |     `--'    /
   | | ( )| |  |__\________/__..-'     \  \  `-'  /   |-'\         /
   \ \    / |  |       \_     _/        \  `-.__.'   /    `--.__.-'
    \ `--' /  /          `---'           \_        _/
     \____/__/                             `------'
								)" << std::endl;
						Sleep(2500);
						std::cout << "Adiutor: Agachate!!! " << std::endl;
						Sleep(2500);
						system("CLS");
						std::cout << R"(
                                      """""""    
                                       |""""""    
                         _________     O   C""    
                        //-------\\   /_     \    
L______________||O-----------------\   |____/_\ / 
-----------------||||| =========== /\ ____\    v|\
                  OOOO-L______________          / 
                    --____||||___\<               
                          ||||    (|-- |          
                          ----
								)" << std::endl;
						Sleep(3500);
						morir();
				}
			}
		}
		//1. Decidio quedarse en su departamento
		else
		{
			do
			{
				std::cout << R"(
                   \  |  /         ___________
    ____________  \ \_# /         |  ___      |       _________
   |            |  \  #/          | |   |     |      | = = = = |
   | |   |   |  |   \\#           | |`v'|     |      |         |
   |            |    \#  //       |  --- ___  |      | |  || | |
   | |   |   |  |     #_//        |     |   | |      |         |
   |            |  \\ #_/_______  |     |   | |      | |  || | |
   | |   |   |  |   \\# /_____/ \ |      ---  |      |         |
   |            |    \# |+ ++|  | |  |~~~~~~| |      | |  || | |
   |            |    \# |+ ++|  | |  |~~~~~~| |      | |  || | |
 ~~|    (~~~~~) |~~~~~#~| H  |_ |~|  | |||| | |~~~~~~|         |
   |    ( ||| ) |     # ~~~~~~    |  | |||| | |      | ||||||| |
   ~~~~~~~~~~~~~________/  /_____ |  | |||| | |      | ||||||| |
                                  ~~~~~~~~~~~~~      | ||||||| |
		 )" << std::endl;
				std::cout << "No fuiste a la fiesta de Bill\nEstas en tu departamento, que deseas hacer?" << std::endl;
				std::cout << "(1) Ver la television\n(2) Seguir trabajando " << std::endl;
				std::cin >> resp;

				switch (resp)
				{
				case 1:
					std::cout << "\n";
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
					std::cout << R"(
   _,-.
,-'  _|
|_,-O__`-._
|`-._\`.__ `_.
|`-._`-.\,-'_|  _,-'.
     `-.|.-' | |`.-'|_
        |      |_|,-'_`.
              |-._,-'  |
              | |    _,'
              '-|_,-'    
		 )" << std::endl;
					std::cout <<"Te quedaste dormido viendo la television, en los pasillos de tu departamento se escucha un ruido" << std::endl;
					std::cout << "(1) Investigar\n(2) Ignorarlo" << std::endl;
					std::cin >> resp;
					switch (resp)
					{
					case 1:
						std::cout << "\n";
						std::cout << jugador.nombre << ": Que raro, voy a ver que sucede" << std::endl;
						Sleep(150);
						break;
					case 2:
						std::cout << "\n";
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
				//3. Decidio ir a investigar MUERTE
				if (resp==1)
				{
					do
					{
						std::cout << R"(
 
|.'',                                     ,''.|
|.'.'',                                 ,''.'.|
|.'.'.'',                             ,''.'.'.|
|.'.'.'.'',                         ,''.'.'.'.|
|.'.'.'.'.|                         |.'.'.'.'.|
|.'.'.'.'.|===;                 ;===|.'.'.'.'.|
|.'.'.'.'.|:::|',             ,'|:::|.'.'.'.'.|
|.'.'.'.'.|---|'.|???????????|.'|---|.'.'.'.'.|
|.'.'.'.'.|:::|'.|???????????|.'|:::|.'.'.'.'.|
|,',',',',|---|',|???????????|,'|---|,',',',',|
|.'.'.'.'.|:::|'.|???????????|.'|:::|.'.'.'.'.|
|.'.'.'.'.|---|','   /%%%\   ','|---|.'.'.'.'.|
|.'.'.'.'.|===:'    /%%%%%\    ':===|.'.'.'.'.|
|.'.'.'.'.|%%%%%%%%%%%%%%%%%%%%%%%%%|.'.'.'.'.|
|.'.'.'.','       /%%%%%%%%%\       ','.'.'.'.|
|.'.'.','        /%%%%%%%%%%%\        ','.'.'.|
|.'.','         /%%%%%%%%%%%%%\         ','.'.|
|.','          /%%%%%%%%%%%%%%%\          ','.|

		 )" << std::endl;
						std::cout << "Sales a los pasillos\nAl final del pasillo se ven las sombras de 5 personas\nTe ven y van corriendo hacia ti" << std::endl;
						std::cout << "(1) Enfrentarlos\n(2) Correr" << std::endl;
						std::cin >> resp;

						switch (resp)
						{
						case 1:
							std::cout << "\n";
							std::cout << jugador.nombre << ": En que les puedo ayudar, que es lo que buscan?" << std::endl;
							Sleep(150);
							std::cout << "Hombre misterioso: A ti "<< jugador.nombre <<", a ti te buscamos" << std::endl;
							break;
						case 2:
							std::cout << "\n";
							std::cout << "Decidiste correr y los hombres corren detras de ti" << std::endl;
							std::cout << "Hombre misterioso: " << jugador.nombre << " puedes correr pero no esconderte" << std::endl;
							Sleep(150);
							break;
						default:
							system("CLS");
							std::cout << "Elige una opcion valida\n" << std::endl;
							break;
						}
					} while (resp != 1 && resp != 2);
					seguir();
					//4. Enfrentas a los hombres, MUERTE
					if (resp==1)
					{
						std::cout <<"Los hombres te rodean" << std::endl;
						Sleep(1800);
						std::cout << "Hombre misterioso: Jefe ya lo tenemos, que hacemos con el?" << std::endl;
						Sleep(1800);
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
						Sleep(2100);
						system("CLS");
						morir();
					}
					//4. Correr de los hombres
					else
					{
						do
						{
							std::cout << R"(
   .------\ /------.
   |       -       |
   |               |
   |               |
   |               |
_______________________
===========.===========
  / ~~~~~     ~~~~~ \
 /|     |     |\
 W   ---  / \  ---   W
 \.      |o o|      ./
  |                 |
  \    #########    /
   \  ## ----- ##  /
    \##         ##/
     \_____v_____/

		 )" << std::endl;
							std::cout << "Corres afuera de tus departamentos y alguien te toma del brazo" << std::endl;
							std::cout << "Adiutor: Soy Adiutor, no tenemos tiempo para que te explique pero tienes que confiar en mi "<<jugador.nombre<< std::endl;
							std::cout << "(1) Confiar en Adiutor\n(2) Seguir corriendo" << std::endl;
							std::cin >> resp;

							switch (resp)
							{
							case 1:
								std::cout << "\n";
								std::cout << "Adiutor: Sigueme "<< jugador.nombre << " mi auto esta a unas cuadras" << std::endl;
								Sleep(1500);
								std::cout << "Adiutor: Cuando estemos en un lugar seguro te explicaremos todo" << std::endl;
								break;
							case 2:
								std::cout << "\n";
								std::cout << "No confiaste en Adiutor y sigues corriendo de los hombres" << std::endl;
								Sleep(150);
								break;
							default:
								system("CLS");
								std::cout << "Elige una opcion valida\n" << std::endl;
								break;
							}
						
						} while (resp != 1 && resp != 2);
						seguir();
						//5 Confiaste en Adiutor MUERTE
						if (resp == 1)
						{
							do
							{
								std::cout << R"(
             ____----------- _____
\~~~~~~~~~~/~_--~~~------~~~~~     \
 `---`\  _-~      |                   \
   _-~  <_         |                     \[]
 / ___     ~~--[""] |      ________-------'_
> /~` \    |-.   `\~~.~~~~~                _ ~ - _
 ~|  ||\%  |       |    ~  ._                ~ _   ~ ._
   `_//|_%  \      |          ~  .              ~-_   /\
          `--__     |    _-____  /\               ~-_ \/.
               ~--_ /  ,/ -~-_ \ \/          _______---~/
                   ~~-/._<   \ \`~~~~~~~~~~~~~     ##--~/
                         \    ) |`------##---~~~~-~  ) )
                          ~-_/_/                  ~~ ~~
								)" << std::endl;
								
								
								std::cout << "Ves el auto de Adiutor y te subes" << std::endl;
								std::cout << "Adiutor: "<<jugador.nombre<<" tal vez estes asustado, pero pronto resolveremos tus dudas" << std::endl;
								std::cout << "\n\nPresiona ENTER para continuar..." << std::endl;
								std::cin.get();
								system("CLS");
								std::cout << R"(
 
                                 (>|======\\
                            ________||____ `\\
                        _-~~~~~~~~|~|~~~|~|  |\\
                       /          | |   | |  ||`\\
                     /_           | |   | |  ||  `\\
         ____-------(_|___________|_|___| |  ||    ||               _-~~~|
   _--~~~            |           =|       ||~~~~~~~~~~~~~~~~~~~~~~~~     |
  |]                 |            |       ||                             |
  |=   /~~~~~~~~~~\  |           /'       ||         /~~~~~~~~~~\        |
:~~~~/'  _ ----- _ `\~~~~~~~~~~~~~~~~~~~~~||~~~~~~~/'  _ ----- _ `\~~~~~~~~|
|   | _-~         ~-_|____________==______||______| _-~         ~-_| __--~
`~~~~/    _-----_    \___________________//______/-/    _-----_    \~~
    ;    / \ _ / \    .                           :    / \ _ / \    .
    |   | -((*))- |   |                           |   | -((*))- |   |
    |    \  / \  /    |                           |    \  / \  /    ,
     \    ~-----~    /                             \    ~-----~    /
      ~-_         _-~                           _---`-_         _-~
 --~~~|\~~ ----- ~\__--~~-\-^^^\___-~`~~---__--/       ~ ----- ~ -/_--~~\
								)" << std::endl;
								std::cout << "Adiutor: Ves eso?, toma esta arma" << std::endl;
								std::cout << "(1) Tomar arma\n(2) No tomar arma" << std::endl;
								std::cin >> resp;

								switch (resp)
								{
								case 1:
									std::cout << "\n";
									std::cout << "Adiutor: Disparales" << std::endl;
									Sleep(150);
									std::cout <<jugador.nombre<< ": Ahhhhhh!" << std::endl;
									break;
								case 2:
									std::cout << "\n";
									std::cout << "Adiutor: Toma el arma" << std::endl;
									Sleep(150);
									std::cout << "Adiutor: Tomaa el armaaa!!!" << std::endl;
									Sleep(150);
									break;
								default:
									system("CLS");
									std::cout << "Elige una opcion valida\n" << std::endl;
									break;
								}
							} while (resp != 1 && resp != 2);
							seguir();
							//Tomaste el arma y neutralizaste a los malos
							if (resp==1)
							{
								std::cout << "Adiutor: Excelente!" << std::endl;
								std::cout << "Adiutor: Vamos a un lugar seguro" << std::endl;
								std::cout << "\n\nPresiona ENTER para continuar..." << std::endl;
								std::cin.get();
								system("CLS");
								
									std::cout << R"(
                                           ___..--'  .`.
                                    ___...--'     -  .` `.`.
                           ___...--' _      -  _   .` -   `.`.
                  ___...--'  -       _   -       .`  `. - _ `.`.
           __..--'_______________ -         _  .`  _   `.   - `.`.
        .`    _ /\    -        .`      _     .`__________`. _  -`.`.
      .` -   _ /  \_     -   .`  _         .` |  CERRADO  |`.   - `.`.
    .`-    _  /   /\   -   .`        _   .`   |___________|  `. _   `.`.
  .`________ /__ /_ \____.`____________.`     ___       ___  - `._____`|
    |   -  __  -|    | - |  ____  |   | | _  |   |  _  |   |  _ |
    | _   |  |  | -  |   | |.--.| |___| |    |___|     |___|    |
    |     |--|  |    | _ | |'--'| |---| |   _|---|     |---|_   |
    |   - |__| _|  - |   | |.--.| |   | |    |   |_  _ |   |    |
 ---``--._      |    |   |=|'--'|=|___|=|====|___|=====|___|====|
 -- . ''  ``--._| _  |  -|_|.--.|_______|_______________________|
`--._           '--- |_  |:|'--'|:::::::|:::::::::::::::::::::::|
_____`--._ ''      . '---'``--._|:::::::|:::::::::::::::::::::::|
----------`--._          ''      ``--.._|:::::::::::::::::::::::|

								)" << std::endl;
									std::cout << jugador.nombre << ": Que es este lugar?" << std::endl;
									Sleep(1500);
									std::cout << "Adiutor: Es nuestra casa de seguridad"<< std::endl;
									Sleep(1500);
									std::cout << jugador.nombre << ": Quien es nosotros porque siempre hablas en plural" << std::endl;
									Sleep(1500);
									std::cout << "Adiutor: Ya veras" << std::endl;
									Sleep(1500);
									std::cout << "\n\nPresiona ENTER para continuar..." << std::endl;
									std::cin.get();
									system("CLS");
									
									std::cout << R"(
       _..._
     .'     '.
    /`\     /`\    |\
   (__|     |__)|\  \\  /|
   (     "     ) \\ || //
    \         /   \\||//
     \   _   /  |\|`  /
      '.___.'   \____/
       (___)    (___)
     /`     `\  / /
    |         \/ /
    | |     |\  /
    | |     | "`
    | |     |
    | |     |
    |_|_____|
								)" << std::endl;
									std::cout << "Spes: Saludos "<<jugador.nombre <<" te he estado esperando\n" << std::endl;
									Sleep(1500);
									std::cout << "Spes: Mi nombre es Spes, en el futuro tu y yo somos amigos\nComo puedes ver logramos crear el viaje en el tiempo\nNos estan cazando por que violamos la quinta ley de la constitucion Inter-Dimensional\n" << std::endl;
									Sleep(1500);
									std::cout << "Spes: Nos estan buscando los mejores cazarecompensas del multiverso\nSe que todo esto puede sonar un poco abrumador pero no tenemos mucho tiempo\n" << std::endl;
									Sleep(1500);
									std::cout << "Spes: Ven te quiero presentar a alguien\n" << std::endl;
									Sleep(1500);
									std::cout << "\n\nPresiona ENTER para continuar..." << std::endl;
									std::cin.get();
									system("CLS");
									std::cout << jugador.nombre << " del futuro: Hola " << jugador.nombre <<"\n"<<std::endl;
									Sleep(1500);
									std::cout << jugador.nombre << " del futuro: Para confirmar que realmente eres tu, cual es el codigo?" << std::endl;
									Sleep(1500);
									std::cout << "Codigo: "; std::cin >> resp;
									if (resp==1337)
									{
										std::cout << jugador.nombre << " del futuro: Perfecto!, siguenos" << std::endl;
										Sleep(1200);										
										std::cout << "\n\nPresiona ENTER para continuar..." << std::endl;
										std::cin.get();
										system("CLS");
										std::cout << R"(			                            
    #############        
    ##         ##    
    #  ~~   ~~  #     
    #  ()   ()  #    
    (     ^     )    
     |         |      
     |  {===}  |   
      \       /      
     /  -----  \      
  ---  |%\ /%|  ---    
/      |%%%%%|     \    
       |%/ \%|            
				)" << std::endl;
										Sleep(2000);
										std::cout << "Daimon: Hola " << jugador.nombre << " , en esta epoca eres facil de enganar" << std::endl;
										Sleep(2000);
										std::cout << jugador.nombre << ": De que estas hablando?" << std::endl;
										Sleep(2000);										
										std::cout << "Daimon: Adios "<<jugador.nombre << std::endl;
										Sleep(2500);
										morir();																														
									}
									//No supiste el codigo MUERTE
									else
									{
										std::cout << jugador.nombre << ": No se" << std::endl;
										Sleep(2000);
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
										Sleep(2100);
										system("CLS");
										morir();
									}

							}
							//No tomaste el arma, MUERTE
							else
							{
								morir();
							}
						}
						//5 No confiaste en Adiutor y seguiste corriendo MUERTE
						else
						{

							do
							{
								std::cout << R"(
									    _____________________
									   (<$$$$$$>#####<::::::>)
								    _/~~~~~~~~~~~~~~~~~~~~~~~~~\
								  /~                             ~\
							    .~                                 ~
						     ()\/_____                           _____\/()
						   .-''      ~~~~~~~~~~~~~~~~~~~~~~~~~~~     ``-.
					    .-~              __________________              ~-.
					    `~~/~~~~~~~~~~~~TTTTTTTTTTTTTTTTTTTT~~~~~~~~~~~~\~~'
					    | | | #### #### || | | | [] | | | || #### #### | | |
					    ;__\|___________|++++++++++++++++++|___________|/__;
						 (~~====___________________________________====~~~)
						  \------_____________[MALUS911]__________-------/
							 |      ||         ~~~~~~~~       ||      |
							  \_____/                          \_____/	
								)" << std::endl;
								
								std::cout << "Ves un policia, que decides hacer?" << std::endl;
								std::cout << "(1) Decirle al policia de los hombres\n(2) Seguir corriendo" << std::endl;
								std::cin >> resp;

								switch (resp)
								{
								case 1:
									std::cout << "\n";
									std::cout << jugador.nombre << ": Ayuda oficial unos hombres me estan siguiendo" << std::endl;
									Sleep(150);
									break;
								case 2:
									std::cout << "\n";
									std::cout << jugador.nombre << ": Nunca hacen nada, mejor busco una solucion yo mismo" << std::endl;
									Sleep(150);
									break;
								default:
									system("CLS");
									std::cout << "Elige una opcion valida\n" << std::endl;
									break;
								}
							}while (resp != 1 && resp != 2);
							seguir();
							
							//6 No confiaste en Adiutor y el policia te mato
							if (resp == 1)
							{
								std::cout << "Oficial: Cual es tu nombre hijo" << std::endl;
								Sleep(1800);
								std::cout <<jugador.nombre << ": Me llamo "<<jugador.nombre<<" oficial" << std::endl;
								Sleep(1800);
								std::cout << "Oficial: Lo siento hijo pero son ordenes de arriba" << std::endl;
								Sleep(1800);
								std::cout << jugador.nombre << ": Que ordenes? " << std::endl;
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
								Sleep(2100);
								system("CLS");
								morir();
							}
							//6 No fuiste con la policia y seguiste corriendo, te encontraron
							else
							{
								std::cout << "Seguiste corriendo y corriendo hasta que te cansas y te metes a un callejon" << std::endl;
								Sleep(400);
								std::cout << jugador.nombre<<": Creo que los perdi" << std::endl;
								std::cout << "\n\nPresiona ENTER para continuar..." << std::endl;
								std::cin.get();
								system("CLS");
								std::cout << R"(
            .-""""-.       .-""""-.
           /        \     /        \
          /_        _\   /_        _\
         // \      / \\ // \      / \\
         |\__\    /__/| |\__\    /__/|
          \    ||    /   \    ||    /
           \        /     \        /
            \  __  /       \  __  /
    .-""""-. '.__.'.-""""-. '.__.'.-""""-.
   /        \ |  |/        \ |  |/        \
  /_        _\|  /_        _\|  /_        _\
 // \      / \\ // \      / \\ // \      / \\
 |\__\    /__/| |\__\    /__/| |\__\    /__/|
  \    ||    /   \    ||    /   \    ||    /
   \        /     \        /     \        /
    \  __  /       \  __  /       \  __  /
     '.__.'         '.__.'         '.__.'
      |  |           |  |           |  |
      |  |           |  |           |  |

						)" << std::endl;
								
								std::cout << "Hombre misterioso: Nosotros no estariamos tan seguros" << std::endl;
								Sleep(3500);
								morir();

							}
						}
					}
				}
				//3. Lo ignoro y lo encuentran MUERTE
				else
				{
				std::cout << R"(
            .-""""-.       .-""""-.
           /        \     /        \
          /_        _\   /_        _\
         // \      / \\ // \      / \\
         |\__\    /__/| |\__\    /__/|
          \    ||    /   \    ||    /
           \        /     \        /
            \  __  /       \  __  /
    .-""""-. '.__.'.-""""-. '.__.'.-""""-.
   /        \ |  |/        \ |  |/        \
  /_        _\|  /_        _\|  /_        _\
 // \      / \\ // \      / \\ // \      / \\
 |\__\    /__/| |\__\    /__/| |\__\    /__/|
  \    ||    /   \    ||    /   \    ||    /
   \        /     \        /     \        /
    \  __  /       \  __  /       \  __  /
     '.__.'         '.__.'         '.__.'
      |  |           |  |           |  |
      |  |           |  |           |  |

						)" << std::endl;				
					std::cout << "Hombre misterioso: Jefe lo encontramos" << std::endl;
					Sleep(1800);
					std::cout << "Hombre misterioso: Entendido" << std::endl;
					Sleep(1800);
					morir();
				}
			}
			//2. Siguio trabajando Sobrevive
			else
		{
			std::cout << R"(
             ____________________________________________________
            /                                                    \
           |    _____________________________________________     |
           |   | Mensajes: 0                                 |    |
           |   |                                             |    |
           |   |                                             |    |
           |   |                                             |    |
           |   |                                             |    |
           |   |                                             |    |
           |   |                                             |    |
           |   |                                             |    |
           |   |                                             |    |
           |   |                                             |    |
           |   |                                             |    |
           |   |                                             |    |
           |   |                                             |    |
           |   |_____________________________________________|    |
           |                                                      |
            \_____________________________________________________/
                   \_______________________________________/
                _______________________________________________
             _-'    .-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.  --- `-_
          _-'.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.--.  .-.-.`-_
       _-'.-.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-`__`. .-.-.-.`-_
    _-'.-.-.-.-. .-----.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-----. .-.-.-.-.`-_
 _-'.-.-.-.-.-. .---.-. .-----------------------------. .-.---. .---.-.-.-.`-_
:-----------------------------------------------------------------------------:
`---._.-----------------------------------------------------------------._.---'
								)" << std::endl;
			Sleep(1500);
			system("CLS");
			std::cout << R"(
             ____________________________________________________
            /                                                    \
           |    _____________________________________________     |
           |   | Mensajes: 1                                 |    |
           |   |                                             |    |
           |   |                                             |    |
           |   |                                             |    |
           |   |                                             |    |
           |   |                                             |    |
           |   |                                             |    |
           |   |                                             |    |
           |   |                                             |    |
           |   |                                             |    |
           |   |                                             |    |
           |   |                                             |    |
           |   |                                             |    |
           |   |_____________________________________________|    |
           |                                                      |
            \_____________________________________________________/
                   \_______________________________________/
                _______________________________________________
             _-'    .-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.  --- `-_
          _-'.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.--.  .-.-.`-_
       _-'.-.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-`__`. .-.-.-.`-_
    _-'.-.-.-.-. .-----.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-----. .-.-.-.-.`-_
 _-'.-.-.-.-.-. .---.-. .-----------------------------. .-.---. .---.-.-.-.`-_
:-----------------------------------------------------------------------------:
`---._.-----------------------------------------------------------------._.---'
								)" << std::endl;
				Sleep(2000);
				std::cout <<jugador.nombre<< ": Que raro un mensaje, quien me pudiera estar hablando a esta hora?" << std::endl;
				Sleep(1200);
				std::cout << jugador.nombre << ": Lo voy a abrir" << std::endl;
				std::cout << "\n\nPresiona ENTER para continuar..." << std::endl;
				std::cin.get();
				system("CLS");
				do{
				std::cout << R"(
             ____________________________________________________
            /                                                    \
           |    _____________________________________________     |
           |   | #^$^%*@@$#%#*@!@*@protonmail.com -->        |    |
           |   | URGENTE                                     |    |
           |   | Sal de tu departamento en este momento, te  |    |
           |   | estan buscando.                             |    |
           |   | Estoy afuera de la puerta principal, sube   |    |
           |   | al auto.                                    |    |
           |   |                                             |    |
           |   |                                             |    |
           |   |                                             |    |
           |   |                                             |    |
           |   |                                             |    |
           |   |                                             |    |
           |   |                                             |    |
           |   |_____________________________________________|    |
           |                                                      |
            \_____________________________________________________/
                   \_______________________________________/
                _______________________________________________
             _-'    .-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.  --- `-_
          _-'.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.--.  .-.-.`-_
       _-'.-.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-`__`. .-.-.-.`-_
    _-'.-.-.-.-. .-----.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-----. .-.-.-.-.`-_
 _-'.-.-.-.-.-. .---.-. .-----------------------------. .-.---. .---.-.-.-.`-_
:-----------------------------------------------------------------------------:
`---._.-----------------------------------------------------------------._.---'
								)" << std::endl;
				Sleep(2300);
				std::cout << "(1) Salir de tu departamento\n(2) Ignorar el mensaje" << std::endl;
				std::cin >> resp;
				switch (resp)
				{
				case 1:
					std::cout << "\n";
					std::cout << jugador.nombre << ": Tal vez no sea nada pero mas vale prevenir" << std::endl;
					Sleep(150);
					break;
				case 2:
					std::cout << "\n";
					std::cout << jugador.nombre<< ": Las campanas de publicidad cada vez son mas raras, lo voy a poner en Spam" << std::endl;
					Sleep(150);
					break;
				default:
					system("CLS");
					std::cout << "Elige una opcion valida\n" << std::endl;
					break;
				}
				} while (resp != 1 && resp != 2);
				seguir();
				//Saliste de tu departamento
				if (resp == 1)
				  {
					std::cout << R"(
                       ____________________
                     //|           |        \
                   //  |           |          \
      ___________//____|___________|__________()\__________________
    /__________________|_=_________|_=___________|_________________{}
    [           ______ |           | .           | ==  ______      { }
  __[__        /##  ##\|           |             |    /##  ##\    _{# }_
 {_____)______|##    ##|___________|_____________|___|##    ##|__(______}
             /  ##__##                              /  ##__##        \
----------------------------------------------------------------------------
								)" << std::endl;
					Sleep(2000);
					std::cout << "Hombre: Sube!" << std::endl;
					Sleep(2000);
					std::cout << jugador.nombre << ": Quien eres?" << std::endl;
					Sleep(2000);
					std::cout << "Hombre: Entre menos sepas mejor "<< jugador.nombre << std::endl;
					Sleep(2000);
					std::cout << "\n\nPresiona ENTER para continuar..." << std::endl;
					std::cin.get();
					system("CLS");
					std::cout << R"(
                    *                 *                  *              *
                                                      *             *
                        *            *                             ___
  *               *                                          |     | |
        *              _________##                 *        / \    | |
                      @\\\\\\\\\##    *     |              |--o|===|-|
  *                  @@@\\\\\\\\##\       \|/|/            |---|   | |
                    @@ @@\\\\\\\\\\\    \|\\|//|/     *   /     \  | |
             *     @@@@@@@\\\\\\\\\\\    \|\|/|/         |       | | |
                  @@@@@@@@@----------|    \\|//          |       |=| |
    ____          @@ @@@ @@__________|     \|/           |       | | |
  _|___@|__       @@@@@@@@@__________|     \|/           |_______| |_|
=|__ _____ |=     @@@@ .@@@__________|      |             |@| |@|  | |
____0_____0__\|/__@@@@__@@@__________|_\|/__|___\|/__\|/___________|_|_
								)" << std::endl;
				Sleep(2000);
				std::cout << jugador.nombre << ": Que es este lugar?" << std::endl;
				Sleep(2000);
				std::cout << "Hombre: En la parte trasera hay un cohete espacial"<<std::endl;
				Sleep(2000);
				std::cout << "Hombre: Lo unico que tienes que saber es que alguien te contacto y te dio un codigo, usalo" << std::endl;
				Sleep(2000);
				std::cout << jugador.nombre << ": A donde voy?" << std::endl;
				Sleep(2000);
				std::cout << "Hombre: No confies en nadie, todos mienten" << std::endl;
				std::cout << "\n\nPresiona ENTER para continuar..." << std::endl;				
				std::cin.get();
				system("CLS");
				std::cout << "Ingresa el codigo de lanzamiento: " << std::endl;
				std::cin >> resp;
				Sleep(2000);
				system("CLS");
				if (resp==1337)
				{
std::cout << R"(
                   .'.
                   |o|
                  .'o'.
                  |.-.|
                  '   '
                   ( )
                    )
                   ( )

               ____
          .-'""p 8o""`-.
       .-'8888P'Y.`Y[ ' `-.
     ,']88888b.J8oo_      '`.
   ,' ,88888888888["        Y`.
  /   8888888888P            Y8\
 /    Y8888888P'             ]88\
:     `Y88'   P              `888:
:       Y8.oP '- >            Y88:
|          `Yb  __             `'|
:            `'d8888bo.          :
:             d88888888ooo.      ;
 \            Y88888888888P     /
  \            `Y88888888P     /
   `.            d88888P'    ,'
     `.          888PP'    ,'
       `-.      d8P'    ,-'   
          `-.,,_'__,,.-'
								)" << std::endl;
				
					Sleep(2500);
					sobrevivir();
				}
				else
				{
					std::cout << R"(
                               ________________
                          ____/ (  (    )   )  \___
                         /( (  (  )   _    ))  )   )\
                       ((     (   )(    )  )   (   )  )
                     ((/  ( _(   )   (   _) ) (  () )  )
                    ( (  ( (_)   ((    (   )  .((_ ) .  )_
                   ( (  )    (      (  )    )   ) . ) (   )
                  (  (   (  (   ) (  _  ( _) ).  ) . ) ) ( )
                  ( (  (   ) (  )   (  ))     ) _)(   )  )  )
                 ( (  ( \ ) (    (_  ( ) ( )  )   ) )  )) ( )
                  (  (   (  (   (_ ( ) ( _    )  ) (  )  )   )
                 ( (  ( (  (  )     (_  )  ) )  _)   ) _( ( )
                  ((  (   )(    (     _    )   _) _(_ (  (_ )
                   (_((__(_(__(( ( ( |  ) ) ) )_))__))_)___)
                   ((__)        \\||lll|l||///          \_))
                            (   /(/ (  )  ) )\   )
                          (    ( ( ( | | ) ) )\   )
                           (   /(| / ( )) ) ) )) )
                         (     ( ((((_(|)_)))))     )
                          (      ||\(|(|)|/||     )
                        (        |(||(||)||||        )
                          (     //|/l|||)|\\ \     )
                        (/ / //  /|//||||\\  \ \  \ _)
								)" << std::endl;
					Sleep(2500);
					morir();
				}
					
			    }
			     //Ignoraste el mensaje MUERTE
			     else
				{
					std::cout <<"Se escucha un fuerte golpe en la puerta de tu departamento " << std::endl;
					Sleep(1500);
					std::cout << "Entran personas a tu departamento " << std::endl;
					Sleep(1500);
					std::cout <<"Hombre misterioso: Lo encontramos Jefe" << std::endl;
					Sleep(1500);
					std::cout << jugador.nombre<<": Quienes son ustedes? " << std::endl;
					Sleep(1500);
					std::cout << "Hombre misterioso: Entendido" << std::endl;
					Sleep(1800);
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
					Sleep(2000);
					morir();
				}
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
				Sleep(500);
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
void sobrevivir()
{
	int opc;
	system("cls");
	system("color a");
	std::cout << R"(
   _____       _                    _       _     _       _ 
  / ____|     | |                  (_)     (_)   | |     | |
 | (___   ___ | |__  _ __ _____   _____   ___ ___| |_ ___| |
  \___ \ / _ \| '_ \| '__/ _ \ \ / / \ \ / / / __| __/ _ \ |
  ____) | (_) | |_) | | |  __/\ V /| |\ V /| \__ \ ||  __/_|
 |_____/ \___/|_.__/|_|  \___| \_/ |_| \_/ |_|___/\__\___(_)                                                                                               
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
			Sleep(500);
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