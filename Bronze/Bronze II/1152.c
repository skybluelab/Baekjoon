#include <stdio.h>
#include <string.h>

char sentence[1000001] = {0,};
int main(){
    
    scanf("%[^\n]s" , &sentence);
    int high;
    int count = 0;
    high = strlen(sentence);

    for(int i = 0 ; i<high; i++){
        if(sentence[i] == ' ' && i != 0 && i!= high-1){
            count++;
        }
    }

    if(sentence[0] == ' ' && high == 1){
        printf("0");
    }
    else{
        printf("%d" , count + 1);
    }

    

    return 0;
}