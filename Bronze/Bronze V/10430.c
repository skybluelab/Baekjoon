#include <stdio.h>

int main(){
    int A , B , C;
    int a,b,c,d;

    scanf("%d %d %d ", &A , &B , &C);

    a = (A+B)%C;
    b = ((A%C) + (B%C))%C;
    c = (A*B)%C;
    d = ((A%C) * (B%C))%C;

    printf("%d\n%d\n%d\n%d" , a,b,c,d);

    

    return 0;
}