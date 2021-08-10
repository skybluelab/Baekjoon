#include <stdio.h>

int main(){
    int num1, num2;
    int a,b,c,d;
    scanf("%d %d" , &num1 , &num2);

    a = num1 * (num2 % 10);
    b = num1 * (num2 / 10 - num2/100*10);
    c = num1 * (num2 /100);
    d = num1 * num2;

    printf("%d\n%d\n%d\n%d" , a, b,c,d);
   

    return 0;
}