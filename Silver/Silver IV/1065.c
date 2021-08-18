#include <stdio.h>

int hansu(int);

int main(){
    
    int n = 0;
    scanf("%d" , &n);
    printf("%d" , hansu(n));

    

    return 0;
}

int hansu(int a){
    int count = 0;
    for(int i = 1; i<=a; i++){
        if(i<10){
            count ++;
        }
        else if (i<100){
            count ++;
        }
        else if (i <1000){
            if(i/100 + i % 10 == 2 * (i/10 - i / 100 * 10)){
                count ++;
            }
        }
    }

    return count;
    


}