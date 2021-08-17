#include <stdio.h>

int main(){
    float A[1001];
    float B[1001];
    float M = 0;
    int N = 0;
    float sum = 0;
    float aver = 0;
    scanf("%d" , &N);

    for (int i = 0; i<N; i++){
        scanf("%d" , &A[i] );        
        if(A[i] > M){
            M = A[i];
        }
    }

    for (int j = 0; j<N; j++){
        B[j] = A[j] / M * 100;         
    }

    for (int k = 0 ; k<N ; k++){
        sum = sum + B[k];
    }

    aver = sum / N ;
    printf("%.9lf" , aver);    

    return 0;
}
