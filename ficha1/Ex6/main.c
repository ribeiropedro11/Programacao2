
int main(int argc, char** argv) {
    int num, sucessor, antecessor;
    
    printf("Insira um numero: ");
    scanf("%d",&num);
    
    sucessor = num + 1;
    antecessor = num -1;
    
    printf("O sucessor é : %d\n", sucessor);
    printf("O numero antecessor : %d\n", antecessor);

    return 0;
}

