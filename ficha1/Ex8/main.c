
int main(int argc, char** argv) {
    float grausfah, grauscent;
    
    printf("Insira a temperatura em graus Fahrenheit");
    scanf("%f",grausfah);
    
    grauscent=(grausfah - 32) * 5/9;

 
    printf("A temperatura em graus centigrados é : %.2f\n",grauscent);

    return 0;

}

