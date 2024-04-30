#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "Logo.h"
using namespace std;

int const filas_terminal = 50;
int const columnas_terminal = 100;

#ifdef _WIN32
    #include <windows.h>
#else
    #include <unistd.h>
    #include <stdio.h>
#endif

// Funcion para definir la altura y ancho de la terminal
void definir_tamano_terminal(){
    #ifdef _WIN32
        // Obtener el handle de la ventana de la consola
        HWND consoleWindow = GetConsoleWindow();

        // Obtener información del buffer de pantalla
        CONSOLE_SCREEN_BUFFER_INFO screenBufferInfo;
        GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &screenBufferInfo);

        // Establecer el tamano de la ventana
        SMALL_RECT windowSize = {0, 0, 99, 49}; //  filas: 50, columnas: 100 
        SetConsoleWindowInfo(GetStdHandle(STD_OUTPUT_HANDLE), TRUE, &windowSize);
    #else
        // Establecer el tamano de la ventana a 50x100
        printf("\033[8;50;100t");
    #endif
}

// Funcion para dormir la terminal, le insertar como parametro el tiempo en milisec
void dormir_terminal(int milisegundos){
    #ifdef _WIN32
        Sleep(milisegundos);
    #else
        usleep(milisegundos * 1000);
    #endif
}

// Funcion para limpiar pantalla en linux o window o ios
void limpiar_pantalla(){
    #ifdef _WIN32
        system("cls");
    #else
        system ("clear");
    #endif
}

// Generar un numero aleatorio entre dos numero
int generar_numero_aleatorio(int min, int max){
    int num;

    num = min + rand() % (max + 1 - min);

    return num;
}



// Genera un numero aleatorio para las cartas (entre 0 y 9)
int generar_numero_para_carta(){
    int min = 0, max = 9;
    int numero_de_carta;

    numero_de_carta = generar_numero_aleatorio(min, max);

    return numero_de_carta;
}

// Genera aleatorimente el numero de battallas (entre 5 y 8)
int generar_numero_batallas(){
    int min = 5, max = 8;
    int numero_batallas;

    numero_batallas = generar_numero_aleatorio(min, max);

    return numero_batallas;
}

// Genera aleatorimente el numero de partidas (entre 5 y 10)
int generar_numero_partidas(){
    int min = 5, max = 8;
    int numero_partidas;

    numero_partidas = generar_numero_aleatorio(min, max);

    return numero_partidas;
}


// Imprime el menu y sus opciones ademas verifica que la opcion ingresada es validad
int imprimir_menu(){
    int valor = 4;

    // Imprime el nombre del juego y las opciones del primer menu
    imprimir_menu_rrague();

    cin>>valor;

    if(valor == 1){
        return 1;
    }else if(valor == 2){
        return 2;
    }else if(valor == 3){
        return 3;
    }else if(valor == 0){
        return 0;
    }else{
        limpiar_pantalla();
        return imprimir_menu();
    }
}

// Decide al ganador de la batalla y asigan los puntos correspondientes
void decidir_ganador_batalla(int carta_jugador, int carta_computadora, int &puntos_jugador, int &puntos_computadora){
    int azar_empate = generar_numero_aleatorio(1, 10);

    if(carta_jugador<carta_computadora){
        puntos_jugador += 100;

        ganador_jugador();
        
    }else if(carta_jugador>carta_computadora){
        puntos_computadora += 100;
        
        ganador_pc();
    }else if(carta_jugador == carta_computadora){
        if(azar_empate>5){
            puntos_jugador += 100;

            ganador_jugador();
        }else{
            puntos_computadora += 100;
        
            ganador_pc();
        }
    }

}

// Decide al ganador del juego
void decidir_ganador_juego(int puntos_jugador, int puntos_computadora){
    alto_puntos(puntos_jugador, puntos_computadora);

    if(puntos_jugador>puntos_computadora){
        ganador_jugador_final();
    }else if(puntos_jugador<puntos_computadora){
        ganador_pc_final();
    }
}







/* Comienzo del a funcion principal del video juego */

int main(){
    int iniciar_partida = 2;
    int carta_jugador, carta_computadora;
    int numero_de_partidas, numero_batallas;
    int puntos_jugador = 0, puntos_computadora = 0;
    int identificador_para_cartas = 1; // 1 es el jugador 1 y en numero 2 es para la computadora

    // Semilla para la funcion que genera numero aleatorios
    srand(time(NULL));

    limpiar_pantalla();

    // Definir tamano terminal
    definir_tamano_terminal();

    //Imprimir el logo de la upc
    imprimir_logo_upc();
    dormir_terminal(3000);
    limpiar_pantalla();

    // Imprime menu y lee opciones de menu
    while ((iniciar_partida == 2) || (iniciar_partida == 3)){
        iniciar_partida = imprimir_menu();

        if(iniciar_partida == 2){
            limpiar_pantalla();
            imprimir_instrucciones();
            dormir_terminal(5000);
            limpiar_pantalla();
        }

        if(iniciar_partida == 3){
            limpiar_pantalla();
            imprimir_creditos();
            dormir_terminal(5000);
            limpiar_pantalla();
        }
    }

    if(iniciar_partida == 0){
        return 0;
    }

    if(iniciar_partida == 1){
        // Obtenre el numero aletaorio de partidas
        numero_de_partidas = generar_numero_partidas();

        // Obtener un numero aleatorio de batallas
        numero_batallas = generar_numero_batallas();

        limpiar_pantalla();
        mensaje_empezemos();
        dormir_terminal(3000);
        limpiar_pantalla();

        for(int i=1; i<=numero_de_partidas; i++){

            limpiar_pantalla();

            for(int j=1; j<=numero_batallas; j++){

                // Imprimir el numero de partida y batallas
                encabezado(i, j);

                // Imprimir el score del jugador y la computadora
                pie_puntos(puntos_jugador, puntos_computadora);


                // Obtener un numero aletaorio para la carta del jugador y imprimirlo
                carta_jugador = generar_numero_para_carta();
                identificador_para_cartas = 1;
                carta_dibujada(carta_jugador, identificador_para_cartas);


                // Obtener un numero aletaorio para la carta de la computadora
                carta_computadora = generar_numero_para_carta();
                identificador_para_cartas = 2;
                carta_dibujada(carta_computadora, identificador_para_cartas);

                dormir_terminal(3000);

                limpiar_pantalla();

                // Decidir al ganador de la batalla y asignar los puntajes
                decidir_ganador_batalla(carta_jugador, carta_computadora, puntos_jugador, puntos_computadora);


                dormir_terminal(3000);

                limpiar_pantalla();

            }
        }

        limpiar_pantalla();

        // Decidir al ganador del juego segun su puntaje
        decidir_ganador_juego(puntos_jugador, puntos_computadora);
    }

    return 0;
}