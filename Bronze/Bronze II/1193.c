#include <stdio.h>

int main(){
    
    long long x;
    scanf("%d" , &x);
    long long a = x;

    for(long long i = 0; i<10000; i++){
        if(i * (i + 1) / 2 >= x){
            a = a - ((i-1) * i / 2);
            if(i % 2 == 1){
                printf("%d/%d" , i-a + 1, a );
                break;
            }
            else{
                printf("%d/%d" ,  a ,i-a+1 );
                break;
            }
        }
            

    }

    

    return 0;
}


