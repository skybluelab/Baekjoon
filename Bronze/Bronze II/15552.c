#include <stdio.h>


int a[1000000] , b[1000000];

int main(){
    
    int T;
    int i,j;
    

    scanf ("%d" , &T);

    for (i = 0; i<T; i++){
        scanf("%d %d", &a[i], &b[i]);
    }

    for (j=0; j<T; j++){
        printf("%d\n" , a[j] + b[j]);
    }

    

    return 0;
}