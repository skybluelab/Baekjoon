#include <stdio.h>
#include <string.h>
int main(){
    char word[20] = {0,};
    scanf("%s" , &word);
    int high;
    int sum = 0;
    high = strlen(word);

    for(int i=0; i<high; i++){
        if(word[i] == 65 || word[i] == 66 || word[i] == 67){
            sum = sum + 3;
        }
        else if(word[i] == 68 || word[i] == 69 || word[i] == 70){
            sum = sum + 4;
        }
        else if(word[i] == 71 || word[i] == 72 || word[i] == 73){
            sum = sum + 5;
        }
        else if(word[i] == 74 || word[i] == 75 || word[i] == 76 ){
            sum = sum + 6;
        }
        else if(word[i] == 77 || word[i] == 78 || word[i] == 79){
            sum = sum + 7;
        }
        else if(word[i] == 83 || word[i] == 81 || word[i] == 82  || word[i] == 80){
            sum = sum + 8;
        }
        else if(word[i] == 86 || word[i] == 84 || word[i] == 85){
            sum = sum + 9;
        }
        else if(word[i] == 89 || word[i] == 87 || word[i] == 88 || word[i] == 90){
            sum = sum + 10;
        }
    }

    printf("%d" , sum);



    

    return 0;
}