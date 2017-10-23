
int main(int argc, char** argv) {
    float base,altura,area,resultado;
    
    printf("Insira o valor da altura: ");
    scanf("%f",&altura);
    
    printf("Insira o valor da base: ");
    scanf("%f",&base);
    
    area = (base * altura)/2;
    
    printf("a area do triangulo e : %.2f\n",area);

    return 0;
}

