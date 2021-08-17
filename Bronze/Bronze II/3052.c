#include <stdio.h>

int main(){
    
    int num[10];
    int count = 0;
    int count1 = 0;

    for (int i=0; i<10; i++){
        scanf("%d" , &num[i]);
        num[i] =  (num[i] % 42);
    }

    for (int j = 0; j< 10; j++){
        for (int k = j+1; k<10; k++){
            if (num[j] == num [k]){
                count ++;
            }
        }
        if (count ==0 ) count1++;
    }

    printf("%d" , count1);






    

    return 0;
}