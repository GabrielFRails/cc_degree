#include <stdio.h>
#include <stdlib.h>
#define N 30

typedef struct{
  int a, b;
}frac;

int main(){
    int n_casos, i, j, k, tam = 1, eqv = 0;
    frac *Frac, *Frac2;
    char op = ' ';

    scanf("%d", &n_casos);

    for(i=1;i<=n_casos;i++){

      Frac = (frac*) calloc(tam, sizeof(frac));
      
        while(op != '\n'){
            scanf("%d%*c%d%c", &Frac[tam-1].a, &Frac[tam-1].b, &op);
            tam++;
            Frac2 = (frac*) realloc(Frac, tam*sizeof(frac));
            Frac = Frac2;
        }
        op = 0;
        
      printf("Caso de teste %d\n", i);
      //------------------Compara nos vetores--------------------//
      eqv = 0;

      for(k=0;k<tam-2;k++){
        for(j=k+1;j<tam-1;j++){
          if( (Frac[k].a/(double)Frac[k].b) == (Frac[j].a/(double)Frac[j].b) && k != j ){
            eqv++;
            printf("%.d/%.d equivalente a %.d/%.d\n", Frac[k].a,  Frac[k].b, Frac[j].a,  Frac[j].b);
          }
        }
      }

      if(eqv==0) printf("Nao ha fracoes equivalentes na sequencia\n");
      
      free(Frac);
    }

    
  
  return 0;
}