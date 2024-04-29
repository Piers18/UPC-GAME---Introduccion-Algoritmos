#include <iostream>
using namespace std;

#ifdef _WIN32
    #include <windows.h>
#else
    #include <stdio.h>
#endif

void colorear();

void colorear(int r, int g, int b){
    #ifdef _WIN32
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        // Aproximación de colores RGB utilizando los colores predefinidos
        int color = 0;
        if (r > 128) color |= FOREGROUND_RED;
        if (g > 128) color |= FOREGROUND_GREEN;
        if (b > 128) color |= FOREGROUND_BLUE;

        // Establecer el color del texto en la consola
        SetConsoleTextAttribute(hConsole, color);
    #else
        printf("\033[38;2;%d;%d;%dm", r, g, b);
    #endif
}