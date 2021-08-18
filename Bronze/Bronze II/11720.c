#include <stdio.h>

int main(){
    char A[101] = {0,};
    int n = 0;
    int sum = 0;
    scanf("%d" , &n);
    scanf("%s" , &A);

    for(int i = 0; i<n; i++){
        sum = sum + (int)A[i] - '0';
    }
    
    printf("%d" , sum);
    

    return 0;
}