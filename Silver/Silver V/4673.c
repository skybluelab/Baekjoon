#include <stdio.h>
int Blacklist[10001] = {0,};
int now = 0;
int d();
int main(){
    d();

    

    return 0;
}

int d(){
    for(int i = 1 ; i <= 10000; i++){
        if(i<10){
            now = i + i;
            Blacklist[now] = 1;

        }
        else if(i<100){
            now = i + i/10 + i%10;
            Blacklist[now] = 1;
        }
        else if(i<1000){
            now = i + i / 100 + i /10 - i / 100 * 10 + i % 10;
            Blacklist[now] = 1;  
        }
        else{
            now = i + i / 1000 + i / 100 - i / 1000 * 10 + i % 100 / 10 + i % 10;
            if(now <= 10000){
                Blacklist[now] = 1;  
            }
        }

    }

    for(int k = 1; k<= 10000; k++){
        if(Blacklist[k] == 0){
            printf("%d\n" , k);
        }

    }

    return 0;
}