#include <stdio.h>
#include <stdlib.h>

typedef struct User{
    int num_likes;
    int num_retweets;
    int num_mencoes;
}User; 
User *us;

int main(){

    int i, j, k, l, r, m, N, M, u1, u2; 
    scanf("%d %d", &N, &M);
    User ***mat; 
    mat = malloc(N * sizeof(User**));
    
    for(i=0; i<N; i++){
        mat[i] = malloc(sizeof(User*)*N);
        for(j=0; j<N; j++)
            mat[i][j] = NULL;
    }

    for(; M>0; M--){
        scanf("%d %d", &u1, &u2);
        mat[u1][u2] = malloc(sizeof(User));
        scanf("%d %d %d", &(*mat[u1][u2]).num_likes, &(*mat[u1][u2]).num_retweets, &(*mat[u1][u2]).num_mencoes);

    }

    M = N;

    for(i=0; i<N; i++){
        l = r = m = k = 0;
        for(j=0; j<N; j++){
            if(mat[i][j]!=NULL){
                l += (*mat[i][j]).num_likes;
                r += (*mat[i][j]).num_retweets;
                m += (*mat[i][j]).num_mencoes;
                k = 1;
                free(mat[i][j]);
            }
        }
        free(mat[i]);
        if(k==1) printf("Usuario %d - num. likes: %d, num. retweets: %d e num. mencoes: %d\n", i, l, r, m);
    }

    free(mat);

    return 0;
}