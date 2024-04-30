#include <iostream>
#include "Posicion_cursor.h"
#include "Color.h"
using namespace std;

void imprimir_logo_upc();
void imprimir_menu_rrague();

void imprimir_logo_upc(){
	colorear(255,0,0);
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
    
    colorear(0, 0, 200);    // Color azul
	definir_posicion_cursor(10, 12); cout << " =++++++=-     -+++++++-.        .++++-         .-*#%%#*=.     -+++:    .+++=  .++++++++- ";
	definir_posicion_cursor(10, 13); cout << " %@@@@@@@@%-   *@@@@@@@@@+       *@@@@%.       +@@@@@@@@@@*.   +@@@=    :@@@*  .@@@@@@@@+ ";
	definir_posicion_cursor(10, 14); cout << " %@@@--*@@@@.  *@@@+-+@@@@-     :@@@@@@+      #@@@%+--=%@@@#   +@@@=    :@@@*  .@@@%++++: ";
	definir_posicion_cursor(10, 15); cout << " %@@@.  %@@@:  *@@@-  *@@@=     #@@@#@@@:    =@@@%.     *+:    +@@@=    :@@@*  .@@@%      ";
	definir_posicion_cursor(10, 16); cout << " %@@@--*@@@%   *@@@+-+@@@@:    =@@@+:@@@#    #@@@-   --------  +@@@=    :@@@*  .@@@@%%%%: ";
	definir_posicion_cursor(10, 17); cout << " %@@@@@@@%*.   *@@@@@@@@#:    .@@@%. *@@@-   %@@@:   %@@@@@@%  +@@@=    :@@@*  .@@@@@@@@: ";
	definir_posicion_cursor(10, 18); cout << " %@@@#@@@+     *@@@#@@@#.     *@@@%**#@@@%.  *@@@+   =++%@@@*  =@@@=    -@@@*  .@@@%::::  ";
	definir_posicion_cursor(10, 19); cout << " %@@@#@@@+     *@@@#@@@#.     *@@@%**#@@@%.  *@@@+   =++%@@@*  =@@@=    -@@@*  .@@@%::::  ";
	definir_posicion_cursor(10, 20); cout << " %@@@.*@@@*    *@@@-=@@@%.   -@@@@@@@@@@@@+  .@@@@+.   -@@@@:  :@@@%-  :%@@@=  .@@@%..... ";
	definir_posicion_cursor(10, 21); cout << " %@@@. *@@@%.  *@@@- =@@@@-  %@@@=::::-%@@@:  :%@@@@%%@@@@%-    *@@@@@@@@@@+   .@@@@@@@@+ ";
	definir_posicion_cursor(10, 22); cout << " #%%%   +%%%%: +%%%-  -%%%%==%%%*      =%%%*    =#@@@@@@#=.      -*@@@@@%*:    .%%%%%%%%= ";

    colorear(0, 0, 200);
	definir_posicion_cursor(10, 33); cout << "   ----------------------------------------------------------------------------------   ";
	definir_posicion_cursor(10, 34); cout << "   ----------------------------------------------------------------------------------   ";
	definir_posicion_cursor(10, 37); cout << "                                  [1] PLAY                                              ";
	definir_posicion_cursor(10, 38); cout << "                                  [2] INSTRUCCIONES                                     ";
	definir_posicion_cursor(10, 39); cout << "                                  [3] CREDITOS                                          ";
	definir_posicion_cursor(10, 40); cout << "                                  [0] SALIR                                             ";
	definir_posicion_cursor(10, 44); cout << "                                    -->                                                 ";
}