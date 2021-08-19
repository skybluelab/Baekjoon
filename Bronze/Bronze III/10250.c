#include <stdio.h>

int main(){
    
    int h,w,n;
    int t;
    int a;
    scanf("%d" , &t);
    for (int i = 0; i<t; i++){
        scanf("%d %d %d" ,&h ,&w,&n);
        a = n - h * (n/h);
        if(a==0){
            if(n/h >= 10){
                printf("%d%d\n" , h, n/h);
            }
            else{
                printf("%d0%d\n" , h, n/h);
            }

        }
        else{
            if(n/h + 1 < 10){
                printf("%d0%d\n" , a , n/h + 1);
            }
            else{
                printf("%d%d\n" , a , n/h + 1);
            }
            
        }
    }

    

    return 0;
}