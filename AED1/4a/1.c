#include <stdio.h>
#include <string.h>

int sub_string(char *str1, char *str2);

int main(){

    char string1[100], string2[100];
    scanf("%[^\n]%*c", string1);
    scanf("%[^\n]", string2);
    int i = sub_string(string1, string2), j;
    if(i == -1) printf("A string2 não está contida na string1\n");
    else{
        char *p = string1;
        printf("%p -> endereço incial\n", p);
        for(j=0; j<i; j++) p++;
        printf("%p -> endereço final\n", p);
    }
    
    return 0;
}

int sub_string(char *str1, char *str2){

    int size_string1 = strlen(str1), size_string2 = strlen(str2), k;
    int i, j, count = 0, initial = -1;
    for(i=0; i<size_string1; i++){
        if(str2[0] == str1[i]){
            initial = i;
            break;
        }
    }
    if(initial == -1) return -1;
    else{
        for(i=initial; i<size_string1; i++){
            if(str2[0] == str1[i]){
                for(j=i, k=0; j<size_string1; j++, k++){
                    if(str2[k] == str1[j]){
                        count++;
                    }
                }
            }
            if(count == size_string2) return initial;
            else count = 0;
        }
        return -1;
    }
}