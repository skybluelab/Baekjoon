#include <stdio.h>

int main(){
    
    long long a,b,v;
    long long result;
    scanf("%d %d %d" , &a, &b , &v);

    for(long long i = 2; i<a+1; i++){
        if((v-i) % (a-b) == 0){
            result = (v-i) / (a-b) + 1;
        }
    }

    printf("%d" , result);
    

    return 0;
}