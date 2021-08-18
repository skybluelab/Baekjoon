#include <stdio.h>
#include <string.h>

int main(){
    
    char *t1 = "a";
    char *t2 = "b";
    char t3[3];
    sprintf(t3,"%s%s" , t1 , t2);
    printf("%s" , t3);

    

    return 0;
}