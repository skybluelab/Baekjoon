#include <stdio.h>
#include <string.h>

int main(){
    int C = 0;
    scanf("%d" , &C);
    int A[1001] = {0,};
    int member = 0;
    float average = 0;
    float result = 0;
    int sum = 0;
    int over = 0;

    for(int i = 0 ; i < C; i++){
        scanf("%d" , &member);
        for(int j= 0; j<member; j++){
            scanf("%d" , &A[j]);
            sum = sum + A[j];
        }

        average = (double)sum / (double)member;

        for (int k = 0; k < member; k++){
            if(A[k] > average){
                over++;
            }
        }

        result = ((double)over / (double)member) * (double)100;

        printf("%.3f%%\n" , result);

     average = 0;
     result = 0;
     sum = 0;
     over = 0;

    }

    

    return 0;
}