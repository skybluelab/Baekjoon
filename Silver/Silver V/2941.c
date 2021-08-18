#include <stdio.h>
#include <string.h>

int main(){
    char words[400] = {0,};
    int count = 0;
    scanf("%s" , &words);
    int high = strlen(words);
    for(int i = 0 ; i < high; i++){
        if(words[i] == 'c' && words[i+1] == '='){
            count ++;
            i++;
        }
        else if(words[i] == 'c' && words[i+1] == '-'){
            count ++;
            i++;
        }
        else if(words[i] == 'd' && words[i+1] == 'z' && words[i+2] == '='){
            count++;
            i = i + 2;
        }
        else if(words[i] == 'd' && words[i+1] == '-'){
            count ++;
            i++;
        }
        else if(words[i] == 'l' && words[i+1] == 'j'){
            count++;
            i++;
        }
        else if(words[i] == 'n' && words[i+1] == 'j'){
            count++;
            i++;
        }
        else if(words[i] == 's' && words[i+1] == '='){
            count++;
            i++;
        }
        else if(words[i] == 'z' && words[i+1] == '='){
            count++;
            i++;
        }
        else{
            count++;
        }


    }
        printf("%d" , count);

    return 0;
}