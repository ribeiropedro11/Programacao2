#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    float d,dluz,anosdeluz;
    int segporano,velocidadedaluz;
    
    segporano = 31556926;
    velocidadedaluz = 300000;
    anosdeluz = segporano * velocidadedaluz;
    
    printf("Introduza a distancia em km: ");
    scanf("%f",&d);
    
    dluz = d/anosdeluz;
    
    printf ("levaria %0.10f anos de luz ", dluz);
    
    return 0;
}

