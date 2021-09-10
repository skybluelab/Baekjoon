#include <stdio.h>

int main(){
    int T;
    scanf("%d" , &T);
    int man[15][15] = {0,};
    int k,n;

    for(int i = 0; i<15; i++){
        man[0][i] = i;
    }

    for(int a = 1 ; a <= 14; a++){
        for(int b = 1; b<=14; b++){
            man[a][b] = man[a][b-1] + man[a-1][b]; 
        }
    }

    for(int j = 0; j<T; j++){
        scanf("%d %d" , &k , &n);
        printf("%d\n" , man[k][n]);
    }

    return 0;
}