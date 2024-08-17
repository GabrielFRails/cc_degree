#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int likes, rts, mencoes;
}User;

User **us;

int main(){

    int N, M, i, j, k, likes, rts, mencoes, u1, u2;
    scanf("%d %d", &N, &M);

    us = malloc(N*sizeof(User*));
    if(us == NULL){
        printf("Memória insuficiente\n");
        return 0;
    }

    for(i=0; i<N; i++){
        us[i] = malloc(M * sizeof(User));
        for(j=0; j<N; j++){
            us[i][j].likes = us[i][j].mencoes = us[i][j].rts = 0;
        }
    }

    for(i=0; i<M; i++){
        scanf("%d %d", &u1, &u2);
        scanf("%d %d %d",&(us[u1][u2].likes), &(us[u1][u2].rts), &(us[u1][u2].mencoes));
    }

    for(i=0; i<M; i++){
        likes = rts = mencoes = k = 0;
        for(j=0; j<M; j++){
            if(&(us[i][j]) != NULL){
                likes += us[i][j].likes;
                rts += us[i][j].rts;
                mencoes += us[i][j].mencoes;
                k=1;
            }
        }
        if(k==1) printf("Usuario %d - num. likes: %d, num. retweets: %d e num. mencoes: %d\n", i, likes, rts, mencoes);
    }

    for(i=0; i<N; i++)
        free(us[i]);
    free(us);
    
    return 0;
}