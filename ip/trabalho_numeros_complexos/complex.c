#include "complex.h"

Complex *create_complex(double real, double img){

    Complex *cp = malloc(sizeof(Complex)); //alocação de uma estrutura dinamicamente para armazenar
                                           //armazenar os dados de um novo complexo
    if(cp == NULL){ //Veirificando de a alocação foi feita corretamene                       
        printf("Não foi possível alocar o numero\n"); //printando msg de erro caso não e já encerrando a função em seguida
        return 0;
    }
    //jogando dentro do complexo os dados necessários
    cp->code[0] = 'C'; //os códigos para a identificação de que tal parte do arquivo é um complexo
    cp->code[1] = 'P';
    cp->real = real; //jogando dentro a parte real da chamada da função
    cp->img = img; //jogando dentro a parte img da chamada da função
    //printf("real %.2lf\nimg %.2lf\n%.2lf e %.2lf\n", real, img, cp->real, cp->img);
    return cp; //retornando o endereço do complexo alocado dinamicamente, lembrar de sempre dar o free do ponteiro aonde vc chamou a função
}

Complex *create_complexPolar(double r, double ang){
    //como na chamada da função já temos o "rô" nosso trabalho diminui bastante já que não teremos que calculá-lo
    double real, img;  
    real = r * cos(convert2Radianos(ang)); //obtendo a parte real e img a partir do cos e sen do angulo informado
    img = r * sin(convert2Radianos(ang));
    return create_complex(real, img); //retornando o endereço da chamada da função create_complex, dessa forma
                                      //temos uma dupla chamada de endereço, a função devolve o endereço de outra função
                                      //lembrar de desalocar o ponteiro ao qual foi atribuído nos outros programas
}

double convert2Radianos(double graus){ //função simples para converter graus em radianos

    return graus * M_PI / 180;
}

double convert2Graus(double radius){ //another simple function para converter radianos em graus

    return radius * 180 / M_PI;
}

void saveComplex(Complex *cp, char* dir){
    FILE *p; //declaração ponteiro para arquivo
    p = fopen(dir, "wb"); //abrindo o arquivo no modo de escrita binária para salvar o complexo

    if(p == NULL){ // verificando se p retornou um ponteiro válido
        printf("Não foi possível abrir o arquivo solicitado!\n");
    }
    
    fwrite(cp, sizeof(Complex), 1, p); //escrevendo bite a bite no arquivo as irformações do ponteiro
                                       //dado na chamada da função, no caso escrevendo no arquivo as informações
                                       //da estrutura do complexo no arquivo chamado por p no dir informado na chamada da função
    fclose(p); //sempre fechar o arquivo pra não dar pau
    
}

Complex * readComplex(char * dir){   //buscando um número complexo no arquivo especificado na chamada da função
    Complex *temp = NULL; //criando um complexo temporário somente para retorná-lo no final
    char code[2]; //char para ver se o conteúdo do arquivo é um complexo
    FILE *p = fopen(dir, "rb"); //abrindo o arquivo em leitura binária
    if(p == NULL){
        printf("Não foi possível abrir o arquivo no caminho especificado: \"%s\"\n", dir);
        return NULL;
    }

    temp = malloc(sizeof(Complex)); //alocando dinamicamente o complexo temporário
    if(temp == NULL){
        printf("Não foi possível alocar memória para o numero!\n");
        return NULL;
    }

   fread(code, 1, 2, p);
    if(code[0] != 'C' || code[1] != 'P'){ //caso qualquer um dos códigos não satizfazer a condição de complexo já encerramos por aqui
        printf("Não foi possível localizar um numero complexo no arquivo \"%s\"\n", dir);
        return NULL;
    }

    rewind(p); //função bacana que volta o ponteiro tipo FILE pro início do arquivo

    fread(temp, sizeof(Complex), 1, p); //lendo o arquivo e armazenando o complexo na estrutura temp
    fclose(p);
    return temp; //retornando o endereço de temp LEMBRA DE DAR FREE aonde vc chamar essa função
}

//as próximas funções são bem auto explicativas

void printComplexAlg(Complex *number){
    if(number == NULL){
        printf("Nao e possivel ler um ponteiro nulo\n");
    }
    printf("%.2lf+%.2lfi\n", number->real, number->img);
}

void printComplexGeo(Complex *number){
    if(number == NULL) printf("Nao e possivel ler um ponteiro nulo\n");

    printf("[%.2lf,%.2lf]\n", number->real, number->img);
}

void printComplexPolar(Complex *number){
    if(number == NULL) printf("Nao e possivel ler um ponteiro nulo\n");
    double ro, ang;

    ro = sqrt((pow(number->real,2)) + (pow(number->img, 2)));
    ang = convert2Graus(atan2(number->img, number->real));
    printf("%.2lf;%.2lf\n", ro, ang);
}

Complex * complexo_sum(Complex * c1, Complex * c2){
    //(a + bi) + (c + di) = (a + c) + i (b + d)
    double real, im;
    real = c1->real + c2->real;
    im = c1->img + c2->img;
    return create_complex(real, im);
}

Complex * complexo_sub(Complex * c1, Complex *c2){
    //(a + bi) – (c + di) = (a – c) + i (b – d)
    double real, im;
    real = c1->real - c2->real;
    im = c1->img - c2->img;
    return create_complex(real, im); 
}

Complex * complexo_multi(Complex * c1, Complex * c2){
    //(a + bi) . (c + di) = (ac – bd) + i (ad + bc)
    double real, im;
    real = (c1->real*c2->real - c1->img*c2->img);
    im = (c1->real*c2->img + c1->img*c2->real);
    return create_complex(real, im);
}

    /*
        Z3 = x + yi = (a + bi) / (c + di).
        x = ac + bd/c^2 + d^2
        y = bc – ad/c^2 + d^2
    */

Complex * complexo_div(Complex * c1, Complex *c2){
    double x, y;
    x = ((c1->real * c2->real) + (c1->img * c2->img)) / (pow(c2->real, 2) + pow(c2->img, 2));
    y = ((c1->img * c2->real) - (c1->real * c2->img)) / (pow(c2->real, 2) + pow(c2->img, 2));
    return create_complex(x, y);
}