#include <stdio.h>

int main(){
    int A , B;
    int a,b,c,d,e;
    scanf("%d %d" , &A , &B);
    a = A + B;
    b = A - B;
    c = A * B;
    d = A / B;
    e = A % B;

    printf("%d\n%d\n%d\n%d\n%d" , a,b,c,d,e);    

    return 0;
}