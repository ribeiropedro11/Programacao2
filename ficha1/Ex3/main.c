
int main(int argc, char** argv) {
    float base,altura,A,P;
    
    printf("Insira a base do retangulo: ");
    scanf("%f",&base);
    
    printf("Insira a altura do retangulo: ");
    scanf("%f",&altura);
    
    A=(base*altura);
    P=(base*2)+(altura*2);
    
    printf("A area do retangulo é: %.2f\n",A);
    printf("O perimetro do retangulo é: %.2f\n",P);
   
    return 0;
}

