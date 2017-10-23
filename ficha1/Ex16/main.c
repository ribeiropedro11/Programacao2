
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
    float taxa;
    double juros,saldo=0,deposito;
    
    printf("Introduza a taxa: ");
    scanf("%f",&taxa);
      
    printf("Introduza o deposito a prazo do 1ºtrimestre: ");
    scanf("%lf",&deposito);
    
    saldo += deposito;
    juros = saldo*(taxa/100);
    saldo += juros;
            
    
    
    printf("O saldo bancario é: %.2lf\n",saldo);
    printf("O valor dos juros e: %.2lf\n",juros);
    
    printf("Introduza o deposito a prazo do 2ºtrimestre: ");
    scanf("%lf",&deposito);
    
    saldo += deposito;   
    juros = saldo*(taxa/100);
    saldo += juros;
    
    
    
    
    printf("O saldo bancario é: %.2lf\n",saldo);
    printf("O valor dos juros e: %.2lf\n",juros);
    
     printf("Introduza o deposito a prazo do 3ºtrimestre: ");
    scanf("%lf",&deposito);
    
    saldo += deposito;   
    juros = saldo*(taxa/100);
    saldo += juros;
    
    
    
    
    printf("O saldo bancario é: %.2lf\n",saldo);
    printf("O valor dos juros e: %.2lf\n",juros);
    
     printf("Introduza o deposito a prazo do 4ºtrimestre: ");
    scanf("%lf",&deposito);
    
    saldo += deposito;   
    juros = saldo*(taxa/100);
    saldo += juros;
    
    
    
    printf("O saldo bancario é: %.2lf\n",saldo);
    printf("O valor dos juros e: %.2lf\n",juros);
    
   
    return 0;
}
