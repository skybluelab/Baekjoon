#include <stdio.h>

int main(){
    int A[101];
    int max = -1000001;
    int a = 0;

    for (int i=0; i<9; i++){
        scanf("%d" , &A[i]);
    }


    for (int j=0; j<9; j++){
        if(A[j] > max){
            max = A[j];
            a= j;
        }
    }

    printf("%d\n%d" , max , a+1);
    

    return 0;
}