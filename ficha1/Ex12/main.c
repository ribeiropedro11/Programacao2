
int main(int argc, char** argv) {
    
    int h,m,s;
    
    
    printf("Insira o numero de segundos: ");
    scanf("%d",&s);
    
    m = s/60;
    h = s/3600;
    
    printf("O numero de segundos em horas sao %d\n , em minutos sao %d\n e em segundos sao %d\n ",h,m,s);
    
    

    return 0;
}

