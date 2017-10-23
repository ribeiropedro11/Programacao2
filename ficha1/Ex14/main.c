#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int votoscand1,votoscand2,votoscand3,votoscand4,votoscand5;
    float percvotos1,percvotos2,percvotos3,percvotos4,percvotos5,totaleleitores;
    
    
    printf("Introduza o valor total de votos do candidato 1: ");
    scanf("%d",&votoscand1);
   
    printf("Introduza o valor total de votos do candidato 2: ");
    scanf("%d",&votoscand2);
    
    printf("Introduza o valor total de votos do candidato 3: ");
    scanf("%d",&votoscand3);
    
    printf("Introduza o valor total de votos do candidato 4: ");
    scanf("%d",&votoscand4);
    
    printf("Introduza o valor total de votos do candidato 5: ");
    scanf("%d",&votoscand5);
    
    totaleleitores = votoscand1+votoscand2+votoscand3+votoscand4+votoscand5;
    
    percvotos1 = (float)(votoscand1/totaleleitores) *100;
    percvotos2 = (float)(votoscand2/totaleleitores) *100;
    percvotos3 = (float)(votoscand3/totaleleitores) *100;
    percvotos4 = (float)(votoscand4/totaleleitores) *100;
    percvotos5 = (float)(votoscand5/totaleleitores) *100;
    printf("A percentagem de votos do candidato 1 e %.2f\n, a do candidato 2 e %.2f\n, a do candidato 3 e %.2f\n, a do candidato 4 e %.2f\n e a do candidato 5 e %.2f\n ",percvotos1,percvotos2,percvotos3,percvotos4,percvotos5);
            
    
    
    


    
    return 0;
}

