
int main(int argc, char** argv) {
    float peso,altura,imc;
    
    printf("Introduza o seu peso");
    scanf("%f",&peso);
    
    printf("Introduza a sua altura");
    scanf("%f",&altura);
    
    imc = peso / (altura * altura);
    
    printf("O seu imc é : %.2f\n",imc);

    return 0;
}

