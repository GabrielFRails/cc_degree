#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char names[15][31] = {"Tallya", "Julia", "Gabriel", "Vitor", "Mariana", "Matheus", 
                        "João", "Pedro", "Lucas", "Daniel", "Crizoelio", "Thiago", "Brizola",
                        "Amyr", "Fabricia"};

void swapNames(char *name1, char *name2);
void quickSort_names(char names[][31], int began, int tam);

int main(){

    int i=0;
    quickSort_names(names, 0, 15);

    for(i=0; i<15; i++){
        if(i == 14)
            printf("%s.\n", names[i]);
        else
            printf("%s, ", names[i]);
    }

    return 0;
}

void swapNames(char *name1, char *name2){
    char *temp = (char *)malloc((strlen(name1) + 1) * sizeof(char));
    strcpy(temp, name1);
    strcpy(name1, name2);
    strcpy(name2, temp);
    free(temp);
}

void quickSort_names(char names[][31], int began, int tam){
    int i, j, n, k;
    char pivo[31];
    i = began;
    j = tam - 1;
    strcpy(pivo, names[(began+tam)/2]);
    
    while(i <= j){
        

        while(strcmp(names[i], pivo) < 0 && i < tam){
            i++;
        }
        
        while(strcmp(names[j], pivo) > 0 && j > began){
            j--;
        }

        if(i<=j){
            swapNames(names[i], names[j]);
            //printf("Trocando %s e %s\n", names[i], names[j]);
            i++;
            j--;
        }
    }

    /*for(k=0; k<11; k++){
        if(k == 10)
            printf("%s.\n\n", names[k]);
        else
            printf("%s, ", names[k]);
    }*/

    if(j>began){
        quickSort_names(names, began, j+1);
    }

    if(i<tam){
        quickSort_names(names, i, tam);
    }
}