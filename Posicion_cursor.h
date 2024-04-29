#include <iostream>
using namespace std;

#ifdef WINDOWS
    #include <windows.h>
#else
    #include <stdio.h>
#endif

void definir_posicion_cursor();

// Funcion para definir la posicion del cursor
void definir_posicion_cursor(int x, int y){
    #ifdef WINDOWS
        // Obtener el handle de la ventana de la consola
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        // Establecer la posición del cursor en (x, y)
        COORD coord = {x-1, y-1};
        SetConsoleCursorPosition(hConsole, coord);
    #else
        // Establecer la posición del cursor en (x, y)
        printf("\033[%d;%dH", y, x);
    #endif
}