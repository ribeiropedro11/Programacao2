
int main(int argc, char** argv) {
    float raio,a,p,pi;
    pi = 3.141;
    
    printf("Insera o raio da circunferencia: ");
    scanf("%f",&raio);
    
    a = pi*(raio*raio);
    p = (2 * pi) * raio;
    
    printf("A area e: %.2f\n", a);
    printf("O perimetro e: %.2f\n", p);
    
    return 0;
}

