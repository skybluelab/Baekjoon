#include <stdio.h>

int a[1000000], b[1000000];

int main(){
    int T;

    scanf ("%d" , &T);
    for(int i=0; i<T; i++){
        scanf("%d %d" ,&a[i] ,&b[i]);
    }

    for(int j=0; j<T; j++){
        printf("Case #%d: %d + %d = %d\n" , j+1 ,a[j],b[j], a[j]+b[j]);
    }


    

    return 0;
}