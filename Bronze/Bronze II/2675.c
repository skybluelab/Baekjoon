#include <stdio.h>
#include <string.h>

int main(){
    char test[30] = {0,};
    char result [100] = {0,};
    int S = 0;
    int count = 0;
    scanf("%d" , &S);
    for(int i =0; i<S; i++){
        scanf("%d" , &count);
        scanf("%s" , &test);

        for(int l = 0; l < strlen(test); l++){
            for(int k = 0; k < count; k++){
                printf("%c" , test[l]);
            }
        
        }
        
        printf("\n");

    }


    

    return 0;
}
