#include <stdio.h>
#include <string.h>
void define_char(char *felicitacao, char *nacionalidade);

int main(){

    char felicitacao[24][30], nacionalidade[24][20];
    char entrada[20];
    int i, var=0;
    
    sprintf(felicitacao[0], "%s", "Feliz Natal!");
    sprintf(felicitacao[1], "%s", "Frohliche Weihnachten!");
    sprintf(felicitacao[2], "%s", "Frohe Weihnacht!");
    sprintf(felicitacao[3], "%s", "Chuk Sung Tan!");
    sprintf(felicitacao[4], "%s", "Feliz Navidad!");
    sprintf(felicitacao[5], "%s", "Kala Christougena!");
    sprintf(felicitacao[6], "%s", "Merry Christmas!");
    sprintf(felicitacao[7], "%s", "Merry Christmas!");
    sprintf(felicitacao[8], "%s", "Merry Christmas!");
    sprintf(felicitacao[9], "%s", "Feliz Natal!");
    sprintf(felicitacao[10], "%s", "God Jul!");
    sprintf(felicitacao[11], "%s", "Mutlu Noeller");
    sprintf(felicitacao[12], "%s", "Feliz Navidad!");
    sprintf(felicitacao[13], "%s", "Feliz Navidad!");
    sprintf(felicitacao[14], "%s", "Feliz Navidad!");
    sprintf(felicitacao[15], "%s", "Merry Christmas!");
    sprintf(felicitacao[16], "%s", "Merry Christmas!");
    sprintf(felicitacao[17], "%s", "Nollaig Shona Dhuit!");
    sprintf(felicitacao[18], "%s", "Zalig Kerstfeest!");
    sprintf(felicitacao[19], "%s", "Buon Natale!");
    sprintf(felicitacao[20], "%s", "Buon Natale!");
    sprintf(felicitacao[21], "%s", "Milad Mubarak!");
    sprintf(felicitacao[22], "%s", "Milad Mubarak!");
    sprintf(felicitacao[23], "%s", "Merii Kurisumasu!");

    sprintf(nacionalidade[0], "%s", "brasil");
    sprintf(nacionalidade[1], "%s", "alemanha");
    sprintf(nacionalidade[2], "%s", "austria");
    sprintf(nacionalidade[3], "%s", "coreia");
    sprintf(nacionalidade[4], "%s", "espanha");
    sprintf(nacionalidade[5], "%s", "grecia");
    sprintf(nacionalidade[6], "%s", "estados-unidos");
    sprintf(nacionalidade[7], "%s", "inglaterra");
    sprintf(nacionalidade[8], "%s", "australia");
    sprintf(nacionalidade[9], "%s", "portugal");
    sprintf(nacionalidade[10], "%s", "suecia");
    sprintf(nacionalidade[11], "%s", "turquia");
    sprintf(nacionalidade[12], "%s", "argentina");
    sprintf(nacionalidade[13], "%s", "chile");
    sprintf(nacionalidade[14], "%s", "mexico");
    sprintf(nacionalidade[15], "%s", "antardida");
    sprintf(nacionalidade[16], "%s", "canada");
    sprintf(nacionalidade[17], "%s", "irlanda");
    sprintf(nacionalidade[18], "%s", "belgica");
    sprintf(nacionalidade[19], "%s", "italia");
    sprintf(nacionalidade[20], "%s", "libia");
    sprintf(nacionalidade[21], "%s", "siria");
    sprintf(nacionalidade[22], "%s", "marrocos");
    sprintf(nacionalidade[23], "%s", "japao");

    while(scanf("%[^\n]%*c", entrada)!= EOF){
        
        for(i=0; i<24; i++){
            if(strcmp(entrada, nacionalidade[i])==0){
                printf("%s\n", felicitacao[i]);
                var = 1;
            }        
        }
        if(var!=1) printf("-- NOT FOUND --\n");
        var = 0;
    }

    return 0;
}


