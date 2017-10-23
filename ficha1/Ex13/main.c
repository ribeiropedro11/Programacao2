
int main(int argc, char** argv) {
    
    int m,s,segtotal,horas,minutos,segundos;
    
    printf("Introduza os minutos da cancao: ");
    scanf("%d",&m);
    printf("Introduza os segundos da cancao: ");
    scanf("%d",&s);
    segtotal += (m * 60) + s;
    
    printf("Introduza os minutos da cancao: ");
    scanf("%d",&m);
    printf("Introduza os segundos da cancao: ");
    scanf("%d",&s);
    segtotal += (m * 60) + s;
    
    printf("Introduza os minutos da cancao: ");
    scanf("%d",&m);
    printf("Introduza os segundos da cancao: ");
    scanf("%d",&s);
    segtotal += (m * 60) + s;
    
    printf("Introduza os minutos da cancao: ");
    scanf("%d",&m);
    printf("Introduza os segundos da cancao: ");
    scanf("%d",&s);
    segtotal += (m * 60) + s; 
    
    printf("Introduza os minutos da cancao: ");
    scanf("%d",&m);
    printf("Introduza os segundos da cancao: ");
    scanf("%d",&s);
    segtotal += (m * 60) + s;
    
    horas = segtotal / 3600;
    minutos = segtotal % 3600 / 60;
    segundos = segtotal - (horas + minutos) * 60;
    
    printf("O album tem %d horas, %d minutos, %d segundos",horas,minutos,segundos);
    return 0;
}

