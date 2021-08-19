#include <stdio.h>

int main(){
    long long n;
    scanf("%d" , &n);
    if(n==1){
        printf("1");
    }
    else{
        for(long long i = 0; i < 1000000; i++){
            if(3 * i * i - 3 * i + 2 <= n && 3 * i * i + 3 * i + 1 >= n ){
                printf("%d" , i+1);
                break;
            }
        }
    }


    

    return 0;
}