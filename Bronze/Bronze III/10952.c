#include <stdio.h>


int main(){
    int A[100] = {1,};
    int B[100] = {1,};
    int i=1;

    
    while (A[i-1] != 0 && B[i-1] != 0){
        scanf("%d %d" ,&A[i] , &B[i]);
        i++;
    }

    for(int j=1; j<i-1; j++){
        printf("%d\n" , A[j] + B[j]);
    }


    

    return 0;
}