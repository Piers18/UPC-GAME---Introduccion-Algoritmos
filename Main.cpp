#include <iostream>

using namespace std;

bool imprimir_menu(){
    char valor = '\0';

    cin>>valor;

    if(valor != '\0'){
        return true;
    }else{
        return false;
    }
}

int main(){
    bool iniciar_partida = false;

    // Imprimir menu y seleccionar comenzar
    while (iniciar_partida == false){
        iniciar_partida = imprimir_menu();

    }



    return 0;
}