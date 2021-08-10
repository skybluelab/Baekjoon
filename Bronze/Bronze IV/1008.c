#include <stdio.h>

int main(){
    double A , B = 0;
    double C =0;

    scanf("%lf %lf" , &A , &B);
    
    C = A/B;

    printf("%0.9lf" , C);    

    return 0;
}