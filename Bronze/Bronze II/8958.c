#include <stdio.h>
#include <string.h>

int main(){
    char A[100];
    int n = 0;
    int sum[100] = {0,};
    int sum1 = 0;
    scanf("%d" , &n);

    for(int i = 0 ; i < n; i++){

        scanf("%s" , &A);

        for(int j=0; j<strlen(A); j++){
            if(A[j] == 'O'){
                sum1 ++;
                sum[i] = sum[i] + sum1;
            }
            else if(A[j] == 'X'){
                sum1 = 0;
            }
        }

        char A[100] = "";
        sum1 = 0;
        
    }

    for(int l = 0; l<n; l++){
        printf("%d\n" , sum[l]);
    }


    return 0;
}