#include <stdio.h>

int main(){
    long long a = 0;
    long long b,c;
    scanf("%d %d %d" , &a , &b , &c);   


    if(c <= b){
        printf("-1");
    }
    else{
        int k = a / (c-b) + 1;
        printf("%d" , k);
    }


    

    return 0;
}