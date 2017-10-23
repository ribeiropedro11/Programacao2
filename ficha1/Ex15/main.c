
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int horasdepartida,horasdechegada,minutospartida,minutoschegada,tempoviagem;
    float distanciaper,velocidademedia,conscombustivel,qtdelitros;
    
    printf("Introduza a quantidade de combustivel gasto: ");
    scanf("%f",&qtdelitros);
    
    printf("Introduza a hora e os minutos de partida: ");
    scanf("%d%d",&horasdepartida,&minutospartida);
    
    printf("Introduza a horas e minutos de chegada: ");
    scanf("%d%d",&horasdechegada,&minutoschegada);
    
    printf("Introduza a distancia percorrida: ");
    scanf("%f",&distanciaper);
    
    tempoviagem = ((horasdechegada * 3600) + (minutoschegada * 60)) - ((horasdepartida * 3600) + (minutospartida * 60));
    velocidademedia = tempoviagem / distanciaper;
    conscombustivel = (qtdelitros * 100) / distanciaper;
    
    printf("O tempo de viagem foi de %d horas e %d minutos.\n",tempoviagem / 3600,tempoviagem % 3600 / 60 );
    printf("A velocidade media foi de: %.2f km/h.\n",velocidademedia);
    printf("O consumo medio de combustivel foi de: %.2f l/km.\n ",conscombustivel);
    
    
    
    

    return 0;
}

