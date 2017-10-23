
int main(int argc, char** argv) {
    
    int num1,num2,resultado,mult;
    
    printf("Insere o numero 1: ");
    scanf("%d",&num1);
    
    printf("Insere o numero 2: ");
    scanf("%d",&num2);
    
    resultado = num1 - num2;
    mult = resultado * num1;
    
    printf("O resultado é %d\n",mult);
    

    return (0);
}

