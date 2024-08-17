#include <stdio.h>
 
#define sm 937
 
int main(){
 
    int pessoas = 0, escola = 0, etnia = 0;
    float renda = 0, renda_cap = 0;
    scanf("%f %d%d%d", &renda, &pessoas, &escola, &etnia);
 
    renda_cap = renda / pessoas;
 
    if(escola == 1) printf("ALUNO NAO COTISTA\n");
    else if(escola == 2){
 
        if(renda_cap > (1.5 * sm)){
 
            switch (etnia){
 
                case 1:
                printf("ALUNO COTISTA (L4)\n");
                break;
 
                case 2:
                printf("ALUNO COTISTA (L4)\n");
                break;
 
                case 3:
                printf("ALUNO COTISTA (L4)\n");
                break;
 
                case 4:
                printf("ALUNO COTISTA (L3)\n");
                break;
 
                default: break;
            }
 
        } else if(renda_cap <= (1.5 * sm)){
 
            switch (etnia){
 
                case 1:
                printf("ALUNO COTISTA (L2)\n");
                break;
 
                case 2:
                printf("ALUNO COTISTA (L2)\n");
                break;
 
                case 3:
                printf("ALUNO COTISTA (L2)\n");
                break;
 
                case 4:
                printf("ALUNO COTISTA (L1)\n");
                break;
 
                default: break;
            }
 
        }
 
    } else return 0;
 
 
    return 0;
}