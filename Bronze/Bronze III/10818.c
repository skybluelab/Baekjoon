#include <stdio.h>


int A[1000000];
int main(){
    int n;
    scanf("%d" , &n);
    int min = 1000001;
    int max = -1000001;

    for (int i=0; i<n; i++){
        scanf("%d" , &A[i]);
    }

    for (int j=0; j<n; j++){
        if(A[j] < min){
            min = A[j];
        }
    }

    for (int j=0; j<n; j++){
        if(A[j] > max){
            max = A[j];
        }
    }

    printf("%d %d" , min , max);
    

    return 0;
}