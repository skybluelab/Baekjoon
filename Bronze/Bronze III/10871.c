#include <stdio.h>

int c[1000000];

int main(){
    
    int n,a;
    scanf ("%d %d", &n , &a);
    for(int i=0; i<n; i++){
        scanf("%d" , &c[i]);
        
    }

    for(int j=0; j<n; j++){
        if(c[j] < a) printf("%d " , c[j]);
    }
    

    return 0;
}