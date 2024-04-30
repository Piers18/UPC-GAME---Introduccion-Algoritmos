#include <iostream>
#include "Posicion_cursor.h"
#include "Color.h"
using namespace std;

void imprimir_logo_upc();
void imprimir_menu_rrague();
void mensaje_empezemos();
void encabezado();
void pie_puntos();
void carta_dibujada();
void ganador_jugador();
void ganador_pc();
void ganador_jugador_final();
void ganador_pc_final();
void alto_puntos();
void imprimir_instrucciones();
void imprimir_creditos();

void imprimir_logo_upc(){
	colorear(255,0,0);	// rojo
	definir_posicion_cursor(20, 11); cout << "                             **                               ";
	definir_posicion_cursor(20, 12); cout << "                            ***                                ";
	definir_posicion_cursor(20, 13); cout << "                          ******                               ";
	definir_posicion_cursor(20, 14); cout << "                         :******                               ";
	definir_posicion_cursor(20, 15); cout << "          -              ********                       =      ";
	definir_posicion_cursor(20, 16); cout << "         *              **********                       *     ";
	definir_posicion_cursor(20, 17); cout << "        *+              ************                     +*    ";
	definir_posicion_cursor(20, 18); cout << "        *+              ************                     +*    ";
	definir_posicion_cursor(20, 19); cout << "       **               **************                    **   ";
	definir_posicion_cursor(20, 20); cout << "      ***                ***************                  ***  ";
	definir_posicion_cursor(20, 21); cout << "     ****                 ***************                 **** ";
	definir_posicion_cursor(20, 22); cout << "     ****                  ***************                **** ";
	definir_posicion_cursor(20, 23); cout << "    =****=                  **************               :****+";
	definir_posicion_cursor(20, 24); cout << "    ******+                     ***********             -******";
	definir_posicion_cursor(20, 25); cout << "    ******+                     ***********             -******";
	definir_posicion_cursor(20, 26); cout << "    *******                       ********-             *******";
	definir_posicion_cursor(20, 27); cout << "     ********+                     +*****            +******** ";
	definir_posicion_cursor(20, 28); cout << "      *********                     ****            *********  ";
	definir_posicion_cursor(20, 29); cout << "      .**********                   **-           **********-  ";
	definir_posicion_cursor(20, 30); cout << "       =************               =:          ************=   ";
	definir_posicion_cursor(20, 31); cout << "         ***************                   +**************.    ";
	definir_posicion_cursor(20, 32); cout << "          *********************+++*+*********************      ";
	definir_posicion_cursor(20, 33); cout << "           :*******************************************-       ";
	definir_posicion_cursor(20, 34); cout << "             -***************************************-         ";
	definir_posicion_cursor(20, 35); cout << "                ***********************************            ";
	definir_posicion_cursor(20, 36); cout << "                   *****************************               ";
	definir_posicion_cursor(20, 37); cout << "                       *********************                   "<<endl;
}


void imprimir_menu_rrague(){
    
    colorear(0, 0, 255);    // Color azul
	definir_posicion_cursor(5, 12); cout << " =++++++=-     -+++++++-.        .++++-         .-*#%%#*=.     -+++:    .+++=  .++++++++- ";
	definir_posicion_cursor(5, 13); cout << " %@@@@@@@@%-   *@@@@@@@@@+       *@@@@%.       +@@@@@@@@@@*.   +@@@=    :@@@*  .@@@@@@@@+ ";
	definir_posicion_cursor(5, 14); cout << " %@@@--*@@@@.  *@@@+-+@@@@-     :@@@@@@+      #@@@%+--=%@@@#   +@@@=    :@@@*  .@@@%++++: ";
	definir_posicion_cursor(5, 15); cout << " %@@@.  %@@@:  *@@@-  *@@@=     #@@@#@@@:    =@@@%.     *+:    +@@@=    :@@@*  .@@@%      ";
	definir_posicion_cursor(5, 16); cout << " %@@@--*@@@%   *@@@+-+@@@@:    =@@@+:@@@#    #@@@-   --------  +@@@=    :@@@*  .@@@@%%%%: ";
	definir_posicion_cursor(5, 17); cout << " %@@@@@@@%*.   *@@@@@@@@#:    .@@@%. *@@@-   %@@@:   %@@@@@@%  +@@@=    :@@@*  .@@@@@@@@: ";
	definir_posicion_cursor(5, 18); cout << " %@@@#@@@+     *@@@#@@@#.     *@@@%**#@@@%.  *@@@+   =++%@@@*  =@@@=    -@@@*  .@@@%::::  ";
	definir_posicion_cursor(5, 19); cout << " %@@@#@@@+     *@@@#@@@#.     *@@@%**#@@@%.  *@@@+   =++%@@@*  =@@@=    -@@@*  .@@@%::::  ";
	definir_posicion_cursor(5, 20); cout << " %@@@.*@@@*    *@@@-=@@@%.   -@@@@@@@@@@@@+  .@@@@+.   -@@@@:  :@@@%-  :%@@@=  .@@@%..... ";
	definir_posicion_cursor(5, 21); cout << " %@@@. *@@@%.  *@@@- =@@@@-  %@@@=::::-%@@@:  :%@@@@%%@@@@%-    *@@@@@@@@@@+   .@@@@@@@@+ ";
	definir_posicion_cursor(5, 22); cout << " #%%%   +%%%%: +%%%-  -%%%%==%%%*      =%%%*    =#@@@@@@#=.      -*@@@@@%*:    .%%%%%%%%= ";

    colorear(255, 255, 255);
	definir_posicion_cursor(5, 33); cout << "   ----------------------------------------------------------------------------------   ";
	definir_posicion_cursor(5, 34); cout << "   ----------------------------------------------------------------------------------   ";
	definir_posicion_cursor(5, 37); cout << "                                  [1] PLAY                                              ";
	definir_posicion_cursor(5, 38); cout << "                                  [2] INSTRUCCIONES                                     ";
	definir_posicion_cursor(5, 39); cout << "                                  [3] CREDITOS                                          ";
	definir_posicion_cursor(5, 40); cout << "                                  [0] SALIR                                             ";
	definir_posicion_cursor(5, 44); cout << "                                    --> ";
}


void mensaje_empezemos(){

	colorear(0,0,255);
	definir_posicion_cursor(4, 21); cout << "@######  @@@    @@@  @@#%@@* @%#####  #####%@      =@=       @@@+    .%@@   :#@#@%+   %@%**#@: ";
	definir_posicion_cursor(4, 22); cout << "@        @##+  =##@  @%  .#@ @=           .#@     .@@@.      @+@@:   #@=@  =@@  -%@#  @+    :. ";
	definir_posicion_cursor(4, 23); cout << "@        @*.@:.@.*@  @%   .@ @=           %@*     *@#@*      @==@%  =@# @  @@-   .@@  @=       ";
	definir_posicion_cursor(4, 24); cout << "@        @*.@:.@.*@  @%   .@ @=           %@*     *@#@*      @==@%  =@# @  @@-   .@@  @=       ";
	definir_posicion_cursor(4, 25); cout << "@@@@@@-  @* #@@* *@  @%.:=@@ @@@@@@#     :=      %@- +@%     @= .@@#@-  @  @*     =@  :*@@@#.  ";
	definir_posicion_cursor(4, 26); cout << "@.....   @* :@%. *@  @@@@%+: @+.....    -@      +@*   %@+    @-  =@@*   @  @*     +@     :+%@= ";
	definir_posicion_cursor(4, 27); cout << "@        @*  =-  *@  @%.     @=        -@@     :@@%###%@@:   @-   #%.   @  @%     #@        @@:";
	definir_posicion_cursor(4, 28); cout << "@        @*      *@  @%      @=       =@@:     #@*:::::#@#   @-   :-    @  @@+   =@@        @@-";
	definir_posicion_cursor(4, 29); cout << "@......  @*      *@  @#      @+.....  @@-....  @%.     :@@=  @-         @  -@@-.#@%-  =:. .-@# ";
	definir_posicion_cursor(4, 30); cout << "@@@@@@@  @*      *@  @#      %@@@@@@  @@@@@@@  @=       +@%  @-         @   .+@@#=.   %@@@@@=  ";
}

void encabezado(int num_partida, int num_batalla){
	colorear(128, 0, 255);
	definir_posicion_cursor(4, 1); cout << "┌──────────────────────────────────────────────────────────────────────────────────────────┐";
	definir_posicion_cursor(4, 2); cout << "│                                                                                          │";
	definir_posicion_cursor(4, 3); cout << "│                              Partida " << num_partida << " - Batalla " << num_batalla << "                                       │";
	definir_posicion_cursor(4, 4); cout << "│                                                                                          │";
	definir_posicion_cursor(4, 5); cout << "└──────────────────────────────────────────────────────────────────────────────────────────┘";
}

void pie_puntos(int punt_jugador, int punt_computadora){
	colorear(128, 0, 255);
	definir_posicion_cursor(4, 46); cout << "┌──────────────────────────────────────────────────────────────────────────────────────────┐";
	definir_posicion_cursor(4, 47); cout << "│                                                                                          │";
	definir_posicion_cursor(4, 48); cout << "           Puntaje Jugador 1: " << punt_jugador << "                        Puntaje Jugador 2: " << punt_computadora;
	definir_posicion_cursor(4, 49); cout << "│                                                                                          │";
	definir_posicion_cursor(4, 50); cout << "└──────────────────────────────────────────────────────────────────────────────────────────┘";
}

void ganador_jugador(){

	colorear(255,255,255);
	definir_posicion_cursor(4, 21); cout << "**********  ********  *       *  *********  ******    *******  *********           *       *";
	definir_posicion_cursor(4, 22); cout << "*           *      *  * *     *  *       *  *     *   *     *  *       *           *      **";
	definir_posicion_cursor(4, 23); cout << "*           *      *  *   *   *  *       *  *      *  *     *  *       *           *     * *";
	definir_posicion_cursor(4, 24); cout << "*           *      *  *    *  *  *       *  *      *  *     *  *       *           *    *  *";
	definir_posicion_cursor(4, 25); cout << "*           *      *  *     * *  *       *  *      *  *     *  *       *           *   *   *";
	definir_posicion_cursor(4, 26); cout << "**********  ********  *      **  *********  *      *  *     *  ********            *       *";
	definir_posicion_cursor(4, 27); cout << "*        *  *      *  *       *  *       *  *      *  *     *  *    *              *       *";
	definir_posicion_cursor(4, 28); cout << "*        *  *      *  *       *  *       *  *     *   *     *  *     *     ***     *       *";
	definir_posicion_cursor(4, 29); cout << "*        *  *      *  *       *  *       *  *    *    *     *  *      *    *       *       *";
	definir_posicion_cursor(4, 30); cout << "**********  *      *  *       *  *       *  ****      *******  *       *   *********       *";
}

void ganador_pc(){

	colorear(255,255,255);
	definir_posicion_cursor(4, 21); cout << "**********  *******  *       *  ********  ******    *******  *********           *   *******";
	definir_posicion_cursor(4, 22); cout << "*           *     *  * *     *  *      *  *     *   *     *  *       *           *         *";
	definir_posicion_cursor(4, 23); cout << "*           *     *  *   *   *  *      *  *      *  *     *  *       *           *         *";
	definir_posicion_cursor(4, 24); cout << "*           *     *  *    *  *  *      *  *      *  *     *  *       *           *         *";
	definir_posicion_cursor(4, 25); cout << "*           *     *  *     * *  *      *  *      *  *     *  *       *           *   *******";
	definir_posicion_cursor(4, 26); cout << "**********  *******  *      **  ********  *      *  *     *  ********            *   *      ";
	definir_posicion_cursor(4, 27); cout << "*        *  *     *  *       *  *      *  *      *  *     *  *    *              *   *      ";
	definir_posicion_cursor(4, 28); cout << "*        *  *     *  *       *  *      *  *     *   *     *  *     *     ***     *   *      ";
	definir_posicion_cursor(4, 29); cout << "*        *  *     *  *       *  *      *  *    *    *     *  *      *    *       *   *      ";
	definir_posicion_cursor(4, 30); cout << "**********  *     *  *       *  *      *  ****      *******  *       *   *********   *******";
}

void ganador_jugador_final(){

	colorear(0,0,255);
	definir_posicion_cursor(30, 8);  cout <<"*******    Ganador del juego   ********";
	definir_posicion_cursor(35, 10);  cout << "       =@=                 ";
	definir_posicion_cursor(35, 11);  cout << "       =@=        %#@      ";
	definir_posicion_cursor(35, 12);  cout << "       =@=     =%#@@@.     ";
	definir_posicion_cursor(35, 13);  cout << "       =@=         #@.     ";
	definir_posicion_cursor(35, 14);  cout << "       =@=         #@.     ";
	definir_posicion_cursor(35, 15);  cout << "       =@=         #@.     ";
	definir_posicion_cursor(35, 16);  cout << "       =@=         #@.     ";
	definir_posicion_cursor(35, 17);  cout << "       =@=         #@.     ";
	definir_posicion_cursor(35, 18);  cout << "       =@=         #@.     ";
	definir_posicion_cursor(35, 19);  cout << "  **+%#@*       *##@@%#*   ";
}

void ganador_pc_final(){

	colorear(0,0,255);
	definir_posicion_cursor(30, 8);  cout <<"*******    Ganador del juego   ********";
	definir_posicion_cursor(35, 10);  cout << "       =@=                  ";
	definir_posicion_cursor(35, 11);  cout << "       =@=         .:--.    ";
	definir_posicion_cursor(35, 12);  cout << "       =@=        #%**#@#.  ";
	definir_posicion_cursor(35, 13);  cout << "       =@=             =@=  ";
	definir_posicion_cursor(35, 14);  cout << "       =@=             =@=  ";            
	definir_posicion_cursor(35, 15);  cout << "       =@=            .%#   ";
	definir_posicion_cursor(35, 16);  cout << "       =@=           :%#.   ";
	definir_posicion_cursor(35, 17);  cout << "       =@=         .*@=     ";
	definir_posicion_cursor(35, 18);  cout << "       =@=        -%#.      ";
	definir_posicion_cursor(35, 19);  cout << "  **+%#@*       :@@%%%%%%.  ";
}

void alto_puntos(int punt_jugador, int punt_computadora){
	colorear(128, 0, 255);
	definir_posicion_cursor(4, 1); cout << "┌──────────────────────────────────────────────────────────────────────────────────────────┐";
	definir_posicion_cursor(4, 2); cout << "│                                                                                          │";
	definir_posicion_cursor(4, 3); cout << "           Puntaje Jugador 1: " << punt_jugador << "                        Puntaje Jugador 2: " << punt_computadora;
	definir_posicion_cursor(4, 4); cout << "│                                                                                          │";
	definir_posicion_cursor(4, 5); cout << "└──────────────────────────────────────────────────────────────────────────────────────────┘";
}

void imprimir_instrucciones(){
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << "  INSTRUCCIONES" << endl;
	cout << "  1.- Al iniciar el juego se generaran internamente la cantidad de partidas y batallas. " << endl;
	cout << "  2.- Cada juego tendra entre 5 y 10 partidas, y a su vez cada partida tendra entre 5 y 8 batallas. " << endl;
	cout << "  3.- La batalla la ganara el jugador que haya obtenido la carta con menor valor en el partido. " << endl;
	cout << "  4.- El jugador ganador de cada batalla recibira 100 puntos . " << endl;
	cout << "  5.- Ganara la totalidad del juego aquel que tenga la mayor puntuacion acumulada. " << endl;
	cout << "  CASO EXCEPCIONAL: En caso haya un empate entre ambos jugadores la maquina decidira un ganador aleatoriamente" << endl;
	cout << "  siendo parcial en las probabilidades" << endl;
}

void imprimir_creditos(){
	definir_posicion_cursor(35, 5); cout<<" AUTORES"<<endl;
	definir_posicion_cursor(30, 8); cout<<" AGUILAR ANTICONA PIERO ANTONIO"<<endl;
	definir_posicion_cursor(30, 9); cout<<" ARMESTAR FELIPA ADRIAN ANDRES"<<endl;
	definir_posicion_cursor(30, 10); cout<<" DIAZ MENDOZA SEBASTIAN"<<endl;

}

void carta_dibujada(int carta_numero, int identif){	
	int a;

	if(identif == 1){
		a = 5;
	}else if(identif == 2){
		a = 56;
	}

	if (carta_numero == 1) {

		colorear(0, 255, 0);
		definir_posicion_cursor(a, 11); cout << "++++=+++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 12); cout << "++++++++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 13); cout << "++++++++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 14); cout << "+++++++++++++++++++++++:.        .:+++++";
		definir_posicion_cursor(a, 15); cout << "++++++++++++++++++-:                .-++";
		definir_posicion_cursor(a, 16); cout << "+++++++++++++++-:                     .:";
		definir_posicion_cursor(a, 17); cout << "+++++++++++++-.                         ";
		definir_posicion_cursor(a, 18); cout << "+++++++++++-                            ";
		definir_posicion_cursor(a, 19); cout << "+++++++++-.                             ";
		definir_posicion_cursor(a, 20); cout << "++++++-            ******               ";
		definir_posicion_cursor(a, 21); cout << "+++++:          .:*+++++*               ";
		definir_posicion_cursor(a, 22); cout << "++++.           *+++++++*               ";
		definir_posicion_cursor(a, 23); cout << "+++.           *****++++*               ";
		definir_posicion_cursor(a, 24); cout << "                   *++++*             ++";
		definir_posicion_cursor(a, 25); cout << "                   *++++*            +++";
		definir_posicion_cursor(a, 26); cout << "                   *++++*            +++";
		definir_posicion_cursor(a, 27); cout << "                   *++++*           =+++";
		definir_posicion_cursor(a, 28); cout << "                   *++++*         .=++++";
		definir_posicion_cursor(a, 29); cout << "                   ******        -++++++";
		definir_posicion_cursor(a, 30); cout << "                               .=+++++++";
		definir_posicion_cursor(a, 31); cout << "                            .+++++++++++";
		definir_posicion_cursor(a, 32); cout << "+                         .-++++++++++++";
		definir_posicion_cursor(a, 33); cout << "++.                    .-=++++++++++++++";
		definir_posicion_cursor(a, 34); cout << "++.                  .-=++++++++++++++++";
		definir_posicion_cursor(a, 35); cout << "+++++            .:+++++++++++++++++++++";
		definir_posicion_cursor(a, 36); cout << ":+++=+++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 37); cout << ":+++=+++++++++++++++++++++++++++++++++++";



	}
	if (carta_numero == 2) {

		colorear(0, 255, 0);
		definir_posicion_cursor(a, 11); cout << "++++++++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 12); cout << "++++++++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 13); cout << "++++++++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 14); cout << "+++++++++++++++++++++++:.        .:+++++";
		definir_posicion_cursor(a, 15); cout << "++++++++++++++++++-:                .*++";
		definir_posicion_cursor(a, 16); cout << "+++++++++++++++-:                     .:";
		definir_posicion_cursor(a, 17); cout << "+++++++++++++-.                         ";
		definir_posicion_cursor(a, 18); cout << "+++++++++++-                            ";
		definir_posicion_cursor(a, 19); cout << "+++++++++          *******              ";
		definir_posicion_cursor(a, 20); cout << "+++++++.        ************            ";
		definir_posicion_cursor(a, 21); cout << "++++:         ****    *******           ";
		definir_posicion_cursor(a, 22); cout << "+++:          ****     ******           ";
		definir_posicion_cursor(a, 23); cout << "++:           ****     ******          :";
		definir_posicion_cursor(a, 24); cout << "+.                   *******          ++";
		definir_posicion_cursor(a, 25); cout << ".                  ********           ++";
		definir_posicion_cursor(a, 26); cout << "                 ********            +++";
		definir_posicion_cursor(a, 27); cout << "                ********             +++";
		definir_posicion_cursor(a, 28); cout << "               ************+        :+++";
		definir_posicion_cursor(a, 29); cout << "              ***************      :++++";
		definir_posicion_cursor(a, 30); cout << "                                .+++++++";
		definir_posicion_cursor(a, 31); cout << "                              .+++++++++";
		definir_posicion_cursor(a, 32); cout << "+                          .++++++++++++";
		definir_posicion_cursor(a, 33); cout << "++.                     .-++++++++++++++";
		definir_posicion_cursor(a, 34); cout << "++.                  .-+++++++++++++++++";
		definir_posicion_cursor(a, 35); cout << "+++++            .:+++++++++++++++++++++";
		definir_posicion_cursor(a, 36); cout << "++++++++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 37); cout << "++++++++++++++++++++++++++++++++++++++++";

	}
	if (carta_numero == 3) {

		colorear(0, 255, 0);
		definir_posicion_cursor(a, 11); cout << "++++=+++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 12); cout << "++++++++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 13); cout << "++++++++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 14); cout << "+++++++++++++++++++++++:.        .:+++++";
		definir_posicion_cursor(a, 15); cout << "++++++++++++++++++-:                .*++";
		definir_posicion_cursor(a, 16); cout << "+++++++++++++++-:                     .:";
		definir_posicion_cursor(a, 17); cout << "+++++++++++++-.                        :";
		definir_posicion_cursor(a, 18); cout << "+++++++++++-                            ";
		definir_posicion_cursor(a, 19); cout << "+++++++++.        *********             ";
		definir_posicion_cursor(a, 20); cout << "+++++=.       .**************           ";
		definir_posicion_cursor(a, 21); cout << "++++=.        ****     *******          ";
		definir_posicion_cursor(a, 22); cout << "+++=           **-     *******          ";
		definir_posicion_cursor(a, 23); cout << "+++                   *******:          ";
		definir_posicion_cursor(a, 24); cout << "++                **********:          :";
		definir_posicion_cursor(a, 25); cout << ":                  **********.        ++";
		definir_posicion_cursor(a, 26); cout << "             ***      *******        +++";
		definir_posicion_cursor(a, 27); cout << "             ***      *******.      -+++";
		definir_posicion_cursor(a, 28); cout << "             ***:..:********       +++++";
		definir_posicion_cursor(a, 29); cout << "                *********         ++++++";
		definir_posicion_cursor(a, 30); cout << "                                ++++++++";
		definir_posicion_cursor(a, 31); cout << "                              .+++++++++";
		definir_posicion_cursor(a, 32); cout << "+                          .++++++++++++";
		definir_posicion_cursor(a, 33); cout << "++.                     .-++++++++++++++";
		definir_posicion_cursor(a, 34); cout << "+++                  .-+++++++++++++++++";
		definir_posicion_cursor(a, 35); cout << "+++++            .:+++++++++++++++++++++";
		definir_posicion_cursor(a, 36); cout << "++++++++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 37); cout << "++++++++++++++++++++++++++++++++++++++++";

	}
	if (carta_numero == 4) {
		colorear(0, 255, 0);
		definir_posicion_cursor(a, 11); cout << "++++=+++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 12); cout << "++++++++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 13); cout << "++++++++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 14); cout << "+++++++++++++++++++++++:.        .:+++++";
		definir_posicion_cursor(a, 15); cout << "++++++++++++++++++-:                .*++";
		definir_posicion_cursor(a, 16); cout << "+++++++++++++++-:                     .:";
		definir_posicion_cursor(a, 17); cout << "+++++++++++++-.                        :";
		definir_posicion_cursor(a, 18); cout << "+++++++++++-                            ";
		definir_posicion_cursor(a, 19); cout << "+++++++=.            *******            ";
		definir_posicion_cursor(a, 20); cout << "++++++=             ********            ";
		definir_posicion_cursor(a, 21); cout << "++++=             .*********            ";
		definir_posicion_cursor(a, 22); cout << "++=              *++ +******           :";
		definir_posicion_cursor(a, 23); cout << "+.              *++  +******          .=";
		definir_posicion_cursor(a, 24); cout << ":              **+   +******          ==";
		definir_posicion_cursor(a, 25); cout << "             **+:    :******         =+=";
		definir_posicion_cursor(a, 26); cout << "            ****++++++*******        ++=";
		definir_posicion_cursor(a, 27); cout << "            *****************       +++=";
		definir_posicion_cursor(a, 28); cout << "                    *******       +++++=";
		definir_posicion_cursor(a, 29); cout << "                    *******      ++++++=";
		definir_posicion_cursor(a, 30); cout << "                                ++++++++";
		definir_posicion_cursor(a, 31); cout << "                               +++++++++";
		definir_posicion_cursor(a, 32); cout << "+                          .++++++++++++";
		definir_posicion_cursor(a, 33); cout << "++.                     .-++++++++++++++";
		definir_posicion_cursor(a, 34); cout << "++.                  .-+++++++++++++++++";
		definir_posicion_cursor(a, 35); cout << "+++++            .:+++++++++++++++++++++";
		definir_posicion_cursor(a, 36); cout << "++++++++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 37); cout << "++++++++++++++++++++++++++++++++++++++++";


	}
	if (carta_numero == 5) {

		colorear(0, 255, 0);
		definir_posicion_cursor(a, 11); cout << "++++=+++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 12); cout << "++++++++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 13); cout << "++++++++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 14); cout << "+++++++++++++++++++++++:.        .:+++++";
		definir_posicion_cursor(a, 15); cout << "++++++++++++++++++-:                .*++";
		definir_posicion_cursor(a, 16); cout << "+++++++++++++++-:                     .:";
		definir_posicion_cursor(a, 17); cout << "++++++++++++-.                        ::";
		definir_posicion_cursor(a, 18); cout << "+++++++++++-                           :";
		definir_posicion_cursor(a, 19); cout << "++++++++.      *************            ";
		definir_posicion_cursor(a, 20); cout << "++++++         ************             ";
		definir_posicion_cursor(a, 21); cout << "++++          ***                       ";
		definir_posicion_cursor(a, 22); cout << "+++           ***                       ";
		definir_posicion_cursor(a, 23); cout << "++           **************            :";
		definir_posicion_cursor(a, 24); cout << ":                     *******         ::";
		definir_posicion_cursor(a, 25); cout << "                      *******         :+";
		definir_posicion_cursor(a, 26); cout << "            ****      *******        .++";
		definir_posicion_cursor(a, 27); cout << "            ****      *******       .+++";
		definir_posicion_cursor(a, 28); cout << "             ***** *********       +++++";
		definir_posicion_cursor(a, 29); cout << "             ************         ++++++";
		definir_posicion_cursor(a, 30); cout << "                                ++++++++";
		definir_posicion_cursor(a, 31); cout << "                              .+++++++++";
		definir_posicion_cursor(a, 32); cout << "+                          .++++++++++++";
		definir_posicion_cursor(a, 33); cout << "++.                     .-++++++++++++++";
		definir_posicion_cursor(a, 34); cout << "++.                  .-+++++++++++++++++";
		definir_posicion_cursor(a, 35); cout << "+++++            .:+++++++++++++++++++++";
		definir_posicion_cursor(a, 36); cout << "++++++++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 37); cout << "++++++++++++++++++++++++++++++++++++++++";


	}
	if (carta_numero == 6) {

		colorear(0, 255, 0);
		definir_posicion_cursor(a, 11); cout << "++++=+++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 12); cout << "++++++++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 13); cout << "++++++++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 14); cout << "+++++++++++++++++++++++:.        .:+++++";
		definir_posicion_cursor(a, 15); cout << "++++++++++++++++++-:                .*++";
		definir_posicion_cursor(a, 16); cout << "+++++++++++++++-:                     .:";
		definir_posicion_cursor(a, 17); cout << "++++++++++++-.                        ::";
		definir_posicion_cursor(a, 18); cout << "+++++++++++-                           :";
		definir_posicion_cursor(a, 19); cout << "++++++++.           *********           ";
		definir_posicion_cursor(a, 20); cout << "++++++            ****     ****         ";
		definir_posicion_cursor(a, 21); cout << "++++            ****      ****          ";
		definir_posicion_cursor(a, 22); cout << "+++            ****                     ";
		definir_posicion_cursor(a, 23); cout << "++            ************             :";
		definir_posicion_cursor(a, 24); cout << ":            ***************          ::";
		definir_posicion_cursor(a, 25); cout << "            ****        *****         :+";
		definir_posicion_cursor(a, 26); cout << "            ****        *****        .++";
		definir_posicion_cursor(a, 27); cout << "            ****      .*****        .+++";
		definir_posicion_cursor(a, 28); cout << "            *******.*******        +++++";
		definir_posicion_cursor(a, 29); cout << "             ************         ++++++";
		definir_posicion_cursor(a, 30); cout << "                                ++++++++";
		definir_posicion_cursor(a, 31); cout << "                              .+++++++++";
		definir_posicion_cursor(a, 32); cout << "+                          .++++++++++++";
		definir_posicion_cursor(a, 33); cout << "++.                     .-++++++++++++++";
		definir_posicion_cursor(a, 34); cout << "++.                  .-+++++++++++++++++";
		definir_posicion_cursor(a, 35); cout << "+++++            .:+++++++++++++++++++++";
		definir_posicion_cursor(a, 36); cout << "++++++++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 37); cout << "++++++++++++++++++++++++++++++++++++++++";


	}
	if (carta_numero == 7) {


		colorear(0, 255, 0);
		definir_posicion_cursor(a, 11); cout << "++++++++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 12); cout << "++++++++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 13); cout << "++++++++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 14); cout << "+++++++++++++++++++++++:.         .+++++";
		definir_posicion_cursor(a, 15); cout << "++++++++++++++++++:                 .*++";
		definir_posicion_cursor(a, 16); cout << "+++++++++++++++:                      .:";
		definir_posicion_cursor(a, 17); cout << "++++++++++++.                         ::";
		definir_posicion_cursor(a, 18); cout << "+++++++++++                            :";
		definir_posicion_cursor(a, 19); cout << "+++++++.      *****************         ";
		definir_posicion_cursor(a, 20); cout << "++++++        *****************         ";
		definir_posicion_cursor(a, 21); cout << "+++++           **************          ";
		definir_posicion_cursor(a, 22); cout << "+++                  .*******          :";
		definir_posicion_cursor(a, 23); cout << "+:                   *******          .:";
		definir_posicion_cursor(a, 24); cout << "+.                  *******           .+";
		definir_posicion_cursor(a, 25); cout << "                   *******            ++";
		definir_posicion_cursor(a, 26); cout << "                  *******           .+++";
		definir_posicion_cursor(a, 27); cout << "                 *******           .++++";
		definir_posicion_cursor(a, 28); cout << "                *******           .+++++";
		definir_posicion_cursor(a, 29); cout << "               *******           :++++++";
		definir_posicion_cursor(a, 30); cout << ":                               ++++++++";
		definir_posicion_cursor(a, 31); cout << "+                             .+++++++++";
		definir_posicion_cursor(a, 32); cout << "++                         .++++++++++++";
		definir_posicion_cursor(a, 33); cout << "+++++                   .-++++++++++++++";
		definir_posicion_cursor(a, 34); cout << "+++++++++            .-+++++++++++++++++";
		definir_posicion_cursor(a, 35); cout << "++++++++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 36); cout << "++++++++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 37); cout << "++++++++++++++++++++++++++++++++++++++++";


	}
	if (carta_numero == 8) {

		colorear(0, 255, 0);
		definir_posicion_cursor(a, 11); cout << "++++++++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 12); cout << "++++++++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 13); cout << "++++++++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 14); cout << "+++++++++++++++++++++++:.        .++++++";
		definir_posicion_cursor(a, 15); cout << "+++++++++++++++++++:                .*++";
		definir_posicion_cursor(a, 16); cout << "++++++++++++++++:                     +:";
		definir_posicion_cursor(a, 17); cout << "+++++++++++++.                        ::";
		definir_posicion_cursor(a, 18); cout << "++++++++++++       *******             :";
		definir_posicion_cursor(a, 19); cout << "++++++++.       ************            ";
		definir_posicion_cursor(a, 20); cout << "++++++       ******      ****           ";
		definir_posicion_cursor(a, 21); cout << "++++        ******       ****           ";
		definir_posicion_cursor(a, 22); cout << "+++          ****************           ";
		definir_posicion_cursor(a, 23); cout << "++            **************           :";
		definir_posicion_cursor(a, 24); cout << ":              **************         .:";
		definir_posicion_cursor(a, 25); cout << "              ****************        :+";
		definir_posicion_cursor(a, 26); cout << "             ******************      .++";
		definir_posicion_cursor(a, 27); cout << "             ****       *******     .+++";
		definir_posicion_cursor(a, 28); cout << "             ****        ******    +++++";
		definir_posicion_cursor(a, 29); cout << "               *************      ++++++";
		definir_posicion_cursor(a, 30); cout << "                   *******      ++++++++";
		definir_posicion_cursor(a, 31); cout << "                              .+++++++++";
		definir_posicion_cursor(a, 32); cout << "+                          .++++++++++++";
		definir_posicion_cursor(a, 33); cout << "++.                     .-++++++++++++++";
		definir_posicion_cursor(a, 34); cout << "++.                  .-+++++++++++++++++";
		definir_posicion_cursor(a, 35); cout << "+++++            .:+++++++++++++++++++++";
		definir_posicion_cursor(a, 36); cout << "++++++++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 37); cout << "++++++++++++++++++++++++++++++++++++++++";


	}
	if (carta_numero == 9) {


		colorear(0, 255, 0);
		definir_posicion_cursor(a, 11); cout << "++++++++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 12); cout << "++++++++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 13); cout << "++++++++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 14); cout << "++++++++++++++++++++++++.        .:+++++";
		definir_posicion_cursor(a, 15); cout << "+++++++++++++++++++:                .*++";
		definir_posicion_cursor(a, 16); cout << "++++++++++++++++:                     .:";
		definir_posicion_cursor(a, 17); cout << "++++++++++++++.                        :";
		definir_posicion_cursor(a, 18); cout << "++++++++++++    **********              ";
		definir_posicion_cursor(a, 19); cout << "++++++++.      *****   *****            ";
		definir_posicion_cursor(a, 20); cout << "+++++++      *******   ******           ";
		definir_posicion_cursor(a, 21); cout << "+++++        *******   ******           ";
		definir_posicion_cursor(a, 22); cout << "+++          *******   ******.         :";
		definir_posicion_cursor(a, 23); cout << "+.            ******  :******.        .+";
		definir_posicion_cursor(a, 24); cout << ":              **************.        :+";
		definir_posicion_cursor(a, 25); cout << "                 ************         ++";
		definir_posicion_cursor(a, 26); cout << "                      .******         ++";
		definir_posicion_cursor(a, 27); cout << "              ****    ******        ++++";
		definir_posicion_cursor(a, 28); cout << "               ****.  ******      ++++++";
		definir_posicion_cursor(a, 29); cout << "                 ********        +++++++";
		definir_posicion_cursor(a, 30); cout << "                                ++++++++";
		definir_posicion_cursor(a, 31); cout << "                               +++++++++";
		definir_posicion_cursor(a, 32); cout << "+                          .++++++++++++";
		definir_posicion_cursor(a, 33); cout << "++.                     .+++++++++++++++";
		definir_posicion_cursor(a, 34); cout << "++++..               .-+++++++++++++++++";
		definir_posicion_cursor(a, 35); cout << "++++++++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 36); cout << "++++++++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 37); cout << "++++++++++++++++++++++++++++++++++++++++";


	}
	if (carta_numero == 0) {


		colorear(0, 255, 0);
		definir_posicion_cursor(a, 11); cout << "++++++++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 12); cout << "++++++++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 13); cout << "++++++++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 14); cout << "+++++++++++++++++++++++:.        .++++++";
		definir_posicion_cursor(a, 15); cout << "+++++++++++++++++++:                .+++";
		definir_posicion_cursor(a, 16); cout << "++++++++++++++++:                     .:";
		definir_posicion_cursor(a, 17); cout << "+++++++++++++.                        ::";
		definir_posicion_cursor(a, 18); cout << "++++++++++++      *******              :";
		definir_posicion_cursor(a, 19); cout << "+++++++.       ************             ";
		definir_posicion_cursor(a, 20); cout << "++++++        *****    *****            ";
		definir_posicion_cursor(a, 21); cout << "+++++         ****      ****:           ";
		definir_posicion_cursor(a, 22); cout << "+++           ****      ****:          :";
		definir_posicion_cursor(a, 23); cout << "+++           ****      ****:         .:";
		definir_posicion_cursor(a, 24); cout << "+.            ****      ****:         .+";
		definir_posicion_cursor(a, 25); cout << ":             ****      ****:         ++";
		definir_posicion_cursor(a, 26); cout << "              ****.    .****.       .+++";
		definir_posicion_cursor(a, 27); cout << "               ************-       .++++";
		definir_posicion_cursor(a, 28); cout << "                 *********        .+++++";
		definir_posicion_cursor(a, 29); cout << "                                 :++++++";
		definir_posicion_cursor(a, 30); cout << ":                               ++++++++";
		definir_posicion_cursor(a, 31); cout << "+                             .+++++++++";
		definir_posicion_cursor(a, 32); cout << "++                         .++++++++++++";
		definir_posicion_cursor(a, 33); cout << "+++++                   .-++++++++++++++";
		definir_posicion_cursor(a, 34); cout << "+++++++++            .++++++++++++++++++";
		definir_posicion_cursor(a, 35); cout << "++++++++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 36); cout << "++++++++++++++++++++++++++++++++++++++++";
		definir_posicion_cursor(a, 37); cout << "++++++++++++++++++++++++++++++++++++++++";
	}
}