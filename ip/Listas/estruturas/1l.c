#include <stdio.h>
#include <stdlib.h>
 
 
int main()
{
    int casos,quantidade,i,j,k,equivalentes=0;
    int *num=0,*den=0;
    double divisao[2];
    
    
    
    scanf("%d", &casos);
    
    //fazendo cada caso
    for(k=1;k<=casos;k++)
    {
        scanf("%d", &quantidade);
        
        
        num = (int*)calloc(quantidade,sizeof(int));
        den = (int*)calloc(quantidade,sizeof(int));
        
        //lendo sequencia
        for(i=0;i<quantidade;i++)
        {
            scanf("%d/%d", &num[i],&den[i]);
        }
        
        
        printf("Caso de teste %d\n", k);
        for(i=0;i<quantidade;i++)
        {
            for(j=0;j<quantidade;j++)
            {
                if(i!=j)
                {
                divisao[0]=(double) num[i]/den[i];
                divisao[1]=(double) num[j]/den[j];
                
                if(divisao[0]==divisao[1]  && i<j)
                {
                    equivalentes++;
                    printf("%d/%d equivalente a %d/%d\n", num[i],den[i],num[j],den[j]);
                }
                
                
                }
            }
        }
        
        if(equivalentes==0)    printf("Nao ha fracoes equivalentes na sequencia\n");
 
        free(num);
        free(den);
        equivalentes=0;
    }
return 0;
}