#include <stdio.h>
#include <stdlib.h>

typedef struct Curso{
    int *code;
    float *valor_credito;
    char **nome; //ponteiro para um ponteiro de char
} Curso;

Curso curso;

typedef struct Aluno{
    char **nome; //ponteiro para um ponteiro de char
    int *code_curso;
    int *creditos;
} Aluno; 

Aluno aluno;

int main(){

    int indice[2], i, j, Ncursos, Nalunos;
    float mensalidade = 0;
    scanf("%d%*c", &Ncursos);
    
    //Alocando as partes da estrutura curso
    curso.code = calloc(Ncursos, sizeof(int));
    curso.valor_credito = calloc(Ncursos, sizeof(float));
    curso.nome = malloc(sizeof(char*)*Ncursos); //Aqui aloca-se Ncursos ponteiros de char, ou seja, N strings vazias n usadas
    for(indice[0] = 0; indice[0]<Ncursos; indice[0]++)
        curso.nome[indice[0]] = malloc(sizeof(char*)*100);

    for(i=0; i<Ncursos; i++)
        scanf("%d %f%*c %[^\n]", &curso.code[i], &curso.valor_credito[i], curso.nome[i]);
    scanf("%*c");
    scanf("%d%*c", &Nalunos);

    //Alocando as partes da estrtura aluno
    aluno.nome = malloc(sizeof(char*)*Nalunos); //AQui aloca-se Nalunos ponteiros de char, mesmo naipe do anterior
    for(indice[1]=0; indice[1]<Nalunos; indice[1]++) //loop para percorrer todos os índices do "vetor"
        aluno.nome[indice[1]] = malloc(sizeof(char*)*Nalunos); //String Dinâmica Normal
    aluno.code_curso = calloc(Nalunos, sizeof(int));
    aluno.creditos = calloc(Nalunos, sizeof(int));
    for(i=0; i<Nalunos; i++)
        scanf("%[^\n] %d %d%*c", aluno.nome[i], &aluno.code_curso[i], &aluno.creditos[i]);

    for(i=0; i<Nalunos; i++){
        for(j=0; j<Ncursos; j++){
            if(aluno.code_curso[i]==curso.code[j]) break;
        }
        mensalidade = aluno.creditos[i] * curso.valor_credito[j];
        printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2f Mensalidade: %.2f\n", 
                aluno.nome[i] ,curso.nome[j], aluno.creditos[i] ,curso.valor_credito[j], mensalidade);
    }


    free(curso.code);
    free(curso.valor_credito);
    for(indice[0] = 0; indice[0]<Ncursos; indice[0]++)
        free(curso.nome[indice[0]]);
    free(curso.nome);

    free(aluno.creditos);
    free(aluno.code_curso);
    for(indice[1]=0; indice[1]<Nalunos; indice[1]++)
        free(aluno.nome[indice[1]]);

    return 0;
}