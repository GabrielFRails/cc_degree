#include <stdio.h>
    #include <stdlib.h>
     
    struct registro_aluno{
        int mat, dd, mm, yy;
        char nome[201];
    };
     
    typedef struct registro_aluno alunos;
     
    int ComparaDataNasc(alunos * a, int i1, int i2);
    void swap(alunos * a, int i, int j);
     
    int main() {
        int i, j, n;
        alunos * a;
     
        scanf("%d", &n);
     
        a = (alunos * ) calloc(n, sizeof(alunos));
     
        for(i=0;i<n;i++) scanf("%d %d %d %d %[^\n]", &a[i].mat, &a[i].dd, &a[i].mm, &a[i].yy, a[i].nome);
     
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(ComparaDataNasc(a,i,j)==0) swap(a, i, j);
            }
        }
     
        for(i=0;i<n;i++) printf("Matric.: %d Nome: %s Data Nasc: %d/%d/%d\n", a[i].mat, a[i].nome, a[i].dd, a[i].mm, a[i].yy);
     
        return 0;
    }
     
    int ComparaDataNasc(alunos * a, int i1, int i2){
        if(a[i1].yy < a[i2].yy) return 0;
        else if(a[i1].yy == a[i2].yy){
            //se o ano de nascimento for igual, compara o mês
            if(a[i1].mm < a[i2].mm) return 0;
            else if(a[i1].mm == a[i2].mm){
                //se o mês também for igual, compara o dia
                if(a[i1].dd < a[i2].dd) return 0;
                else return 1;
            }
            else return 1;
        }
        else return 1;
    }
     
    void swap(alunos * a, int i, int j){
        alunos aux;
        aux = a[i];
        a[i] = a[j];
        a[j] = aux;
    }