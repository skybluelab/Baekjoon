#include <stdio.h>
#include <string.h>

char word[1000001] = {0,};
int alphabet[130] = {0,};
int main(){
    
    int max = 0;
    int same = 0;
    int high = 0;
    char what;

    scanf("%s" , word);
    high = strlen(word);

    for(int i = 0; i < high; i++){
        if(word[i] < 96){
            word[i] = word[i] + 32;
        }
        alphabet[word[i]] ++;
    }

    for(int k = 0 ; k < 130; k++){
        if(alphabet[k] > max){
            same = 0;
            max = alphabet[k];
            what = k;
        }
        else if(alphabet[k] == max){
            same ++;
        }
    }

    if(same == 0){
        if(what > 96){
            what  =  what  -  32;
            printf("%c" , what);
        }
        else{
            printf("%c" , what);
        }
    }
    else if(same > 0){
        printf("?");
    }
    

    return 0;
}