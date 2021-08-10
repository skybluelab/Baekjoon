#include <stdio.h>

int main(){
    int T;
    int i  , j ;
    int A[100] , B[100];

    scanf ("%d" , &T);

    for (i = 0; i<T; i++){
        scanf("%d %d" , &A[i] , &B[i]);        
    }

    for (j = 0; j <T; j++){
        printf("%d\n" , A[j] + B[j]);
    }



    

    return 0;
}