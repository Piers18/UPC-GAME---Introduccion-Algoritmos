#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "Logo.h"
using namespace std;

int const filas_terminal = 50;
int const columnas_terminal = 100;

#ifdef WINDOWS
    #include <windows.h>
#else
    #include <unistd.h>
    #include <stdio.h>
#endif

// Funcion para definir la altura y ancho de la terminal
void definir_tamano_terminal(){
    #ifdef WINDOWS
        // Obtener el handle de la ventana de la consola
        HWND consoleWindow = GetConsoleWindow();

        // Obtener información del buffer de pantalla
        CONSOLE_SCREEN_BUFFER_INFO screenBufferInfo;
        GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &screenBufferInfo);

        // Establecer el tamaño de la ventana
        SMALL_RECT windowSize = {0, 0, 99, 49}; //  filas: 50, columnas: 100 
        SetConsoleWindowInfo(GetStdHandle(STD_OUTPUT_HANDLE), TRUE, &windowSize);
    #else
        // Establecer el tamaño de la ventana a 50x100
        printf("\033[8;50;100t");
    #endif
}

// Funcion para dormir la terminal, le insertar como parametro el tiempo en milisec
void dormir_terminal(int milisegundos){
    #ifdef WINDOWS
        Sleep(milisegundos);
    #else
        usleep(milisegundos * 1000);
    #endif
}

// Funcion para limpiar pantalla en linux o window o ios
void limpiar_pantalla(){
    #ifdef WINDOWS
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

// Imprime inicio de partida
void imprimir_inicio_partida(int partida_actual){
    cout<<"\tEstamos en la partida "<<partida_actual<<endl;
}

// Imprime el score del jugador
void imprimir_score_jugador(int score_jugador){
    cout<<"El puntaje del jugador es: "<<score_jugador<<endl;
}

// Imprime el score de la computadora
void imprimir_score_computadora(int score_computadora){
    cout<<"El puntaje de la computadora es: "<<score_computadora<<endl;
}

// Imprime la partida actual
void imprimir_partida_actual(int partida_actual){
    cout<<"La partida actual es: "<<partida_actual<<endl;
}

// Imprime la batalla actual
void imprimir_batalla_actual(int batalla_actual){
    cout<<"La batalla actual es: "<<batalla_actual<<endl;
}

// Imprime la carta de la computadora
void imprimir_carta_computadora(int carta_computadora){
    cout<<"La carta de la computadora es: "<<carta_computadora<<endl;
}

// Imprime la carta del jugador
void imprimir_carta_jugador(int carta_jugador){

    cout<<"La carta del jugador es: "<<carta_jugador<<endl;

}

// Genera un numero aleatorio para las cartas (entre 1 y 13)
int generar_numero_para_carta(){
    int min = 1, max = 13;
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
bool imprimir_menu(){
    int valor = 0;

    cout<<"Escribe 1 para jugar: ";
    cin>>valor;

    if(valor == 1){
        return true;
    }else{
        return false;
    }
}

// Decide al ganador de la batalla y asigan los puntos correspondientes
void decidir_ganador_batalla(int carta_jugador, int carta_computadora, int &puntos_jugador, int &puntos_computadora){
    int azar_empate = generar_numero_aleatorio(1, 10);

    if(carta_jugador<carta_computadora){
        puntos_jugador += 100;

        cout<<"El ganador de la ronda es el jugador"<<endl;
    }else if(carta_jugador>carta_computadora){
        puntos_computadora += 100;
        
        cout<<"El ganador de la ronda es la computadora"<<endl;
    }else if(carta_jugador == carta_computadora){
        if(azar_empate>5){
            puntos_jugador += 100;

            cout<<"El ganador de la ronda es el jugador"<<endl;
        }else{
            puntos_computadora += 100;
        
            cout<<"El ganador de la ronda es la computadora"<<endl;
        }
    }

}

// Decide al ganador del juego
void decidir_ganador_juego(int puntos_jugador, int puntos_computadora){
    cout<<"Los puntos del jugador son: "<<puntos_jugador<<endl;
    cout<<"Los puntos de la computadora son: "<<puntos_computadora<<endl;

    if(puntos_jugador>puntos_computadora){
        cout<<"Felicitaciones ganaste el juego"<<endl;
    }else if(puntos_jugador<puntos_computadora){
        cout<<"Perdiste el juego"<<endl;
    }else{
        cout<<"Ups, nadie gano"<<endl;
    }
}

int main(){
    bool iniciar_partida = false;
    int carta_jugador, carta_computadora;
    int numero_de_partidas, numero_batallas;
    int puntos_jugador = 0, puntos_computadora = 0;

    // Semilla para la funcion que genera numero aleatorios
    srand(time(NULL));

    limpiar_pantalla();

    // Definir tamano terminal
    definir_tamano_terminal();

    //Imprimir el logo de la upc
    imprimir_logo_upc();
    dormir_terminal(5000);
    limpiar_pantalla();

    // Imprime menu y lee opciones de menu
    while (iniciar_partida == false){

        iniciar_partida = imprimir_menu();

    }

    // Obtenre el numero aletaorio de partidas
    numero_de_partidas = generar_numero_partidas();

    // Obtener un numero aleatorio de batallas
    numero_batallas = generar_numero_batallas();


    for(int i=1; i<=numero_de_partidas; i++){

        limpiar_pantalla();

        // Presentar partida
        imprimir_inicio_partida(i);

        dormir_terminal(2000);
        limpiar_pantalla();

        for(int j=1; j<=numero_batallas; j++){

            // Imprimir el numero de partida
            imprimir_partida_actual(i);

            // Imprimir en que batalla estamos
            imprimir_batalla_actual(j);

            // Imprimir el score del jugador
            imprimir_score_jugador(puntos_jugador);
            
            // Imprimir el score de la copmutadora
            imprimir_score_computadora(puntos_computadora);

            // Obtener un numero aletaorio para la carta del jugador y imprimirlo
            carta_jugador = generar_numero_para_carta();
            imprimir_carta_jugador(carta_jugador);


            // Obtener un numero aletaorio para la carta de la computadora
            carta_computadora = generar_numero_para_carta();
            imprimir_carta_computadora(carta_computadora);

            // Decidir al ganador de la batalla y asignar los puntajes
            decidir_ganador_batalla(carta_jugador, carta_computadora, puntos_jugador, puntos_computadora);

            
            dormir_terminal(2000);

            limpiar_pantalla();

        }
    }

    limpiar_pantalla();

    // Decidir al ganador del juego segun su puntaje
    decidir_ganador_juego(puntos_jugador, puntos_computadora);

    return 0;
}