
int main(int argc, char** argv) {
    
    float num1,num2,num3,media,nota1,nota2,nota3;
    
    printf("Insira a primeira nota:");
    scanf("%f",&num1);

    printf("Insira a segunda nota:");
    scanf("%f",&num2);

    printf("Insira a terceira nota:");
    scanf("%f",&num3);
    
    nota1 = num1 * 0.25;
    nota2 = num2 * 0.35;
    nota3 = num3 * 0.40;
    
    media = nota1+nota2+nota3;

     printf("A media das notas e: %f\n ",media);

    return 0;
}

