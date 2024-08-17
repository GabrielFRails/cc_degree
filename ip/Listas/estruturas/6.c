#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno{
    int mat, dd, mm, aa;
    char nome[201];
}Aluno;

Aluno *al;

int Compara_Idade(Aluno * al, int i1, int i2);
void swap(Aluno * al, int i, int j);

int main(){

    int N, indice, i, j; //Número de casos de teste/alunos
    scanf("%d", &N);
    al = (Aluno *) calloc(N, sizeof(Aluno));

    for(i=0; i<N; i++)
        scanf("%d %d %d %d %[^\n]", &al[i].mat, &al[i].dd, &al[i].mm, &al[i].aa, al[i].nome);

    for(i=0; i<N; i++)
        for(j=i+1; j<N; j++)
            if(Compara_Idade(al, i, j)==0) swap(al, i, j);

    for(i=0; i<N; i++) 
        printf("Matric.: %d Nome: %s Data Nasc: %d/%d/%d\n", 
        al[i].mat, al[i].nome, al[i].dd, al[i].mm, al[i].aa);

    free(al);

    return 0;
}

int Compara_Idade(Aluno * a, int i1, int i2){
    if(a[i1].aa < a[i2].aa) return 0; //se o ano for menor ent fulano1 é mais novo que fulano 2
    else if(a[i1].aa == a[i2].aa){
        if(a[i1].mm < a[i2].mm) return 0;
        else if(a[i1].mm == a[i2].mm){
            if(a[i1].dd < a[i2].dd) return 0;
            else return 1;
        }
        else return 1;
    }
    return  1;
}

void swap(Aluno * al, int i, int j){
    Aluno aux;
    aux = al[i];
    al[i] = al[j];
    al[j] = aux;
}



