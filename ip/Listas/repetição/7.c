#include <stdio.h>

int main(){

    long int mat = 0;
    int ch = 0, i;
    double MP = 0, ML = 0, TF = 0, NF = 0, p =0;
    

    while(1){
    
        scanf("%ld", &mat);
        if(mat == -1) break;

        MP = 0;
        for(i = 0; i < 8; i++){

            scanf("%lf", &p);
            if(p == -1) break;
            MP += p;
        }
        MP /= 8;

        ML = 0;
        for(i=0; i < 5; i++){

            scanf("%lf", &p);
            if(p == -1) break;
            ML =  ML + p;

        }
        ML /= 5;

        scanf("%lf", &TF); 
        if(TF == -1) break;
        
        scanf("%d", &ch); 
        if(ch == -1) break;

        //printf("%lf %lf %lf %d \n", MP, ML, TF, ch);

        NF = (.7*MP) + (.15*ML) + (.15*TF) ;

        printf("Matricula: %ld, Nota Final: %.2lf, Situacao Final: ", mat, NF);

        if(NF >= 6){

            if(ch >= 96) printf("APROVADO\n");
            else if(ch < 96) printf("REPROVADO POR FREQUENCIA\n");

        } else if(NF < 6){

            if(ch >=96) printf("REPROVADO POR NOTA\n");
            else if(ch < 96) printf("REPROVADO POR NOTA E POR FREQUENCIA\n");
        }

    }

    return 0;
}