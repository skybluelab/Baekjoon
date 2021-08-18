#include <stdio.h>

int main(){
    int first = 0;
    char word[101] = {0,};
    scanf("%s" , &word);
    for(int i = 97 ; i <= 122; i++){
        for(int k = 0; k<100; k++){
            if(word[k] == i && first == 0){
                printf("%d ", k);
                first = 1;
            }
        }

        if(first == 0){
            printf("-1 ");
        }



        first  =  0;
    }
    

    return 0;
}