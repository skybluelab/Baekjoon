#include <stdio.h>

int main(){
    
    int t;
    int k,n;
    scanf("%d" , &t);

    for(int i =0; i<t; i++){
        scanf("%d %d" , &k, &n);
        printf("%d\n" , n * (n+1)/ 2 + k - 1);
    }

    

    return 0;
}