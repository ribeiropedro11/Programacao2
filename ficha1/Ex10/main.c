
int main(int argc, char** argv) {
    float num1,num2,num3,num4,num5,media;
    
    printf("Insira o primeiro numero:");
    scanf("%f",&num1);

    printf("Insira o segundo numero:");
    scanf("%f",&num2);

    printf("Insira o terceiro numero:");
    scanf("%f",&num3);

    printf("Insira o quarto numero:");
    scanf("%f",&num4);

    printf("Insira o quinto numero:");
    scanf("%f",&num5);
    
    media = (num1+num2+num3+num4+num5) / 5;

     printf("A media dos numeros e: %f\n ",media);
    
    return 0;
}

