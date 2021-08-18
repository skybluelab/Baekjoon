#include <stdio.h>

int main(){
    
    int a,b;
    scanf("%d %d" , &a , &b);
    int newa;
    int newb;

    newa = a / 100 + (a / 10 - a / 100 * 10)*10 + a % 10 * 100;
    newb = b / 100 + (b / 10 - b / 100 * 10)*10 + b % 10 * 100;

    if(newa > newb){
        printf("%d" , newa);
    }
    else{
        printf("%d" , newb);
    }
    

    return 0;
}