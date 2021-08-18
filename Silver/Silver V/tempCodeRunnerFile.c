#include <stdio.h>
#include <string.h>

int main(){
    int n = 0;
    int self = 0;
    int result = 0;
    char word[101] = {0,};
    char alphabet[30] = {0,};
    
    scanf("%d" , &n);
    for(int k=0; k<n; k++){
        scanf("%s" , word);
        int high = strlen(word);
        for(int i = 0; i<high; i++){
            if(alphabet[word[i]] == 0 && self == 0){
                alphabet[word[i]]++;
            }
            else if(alphabet[word[i]] != 0){
                if(alphabet[word[i]] != alphabet[word[i-1]]){
                    self++;
                }
            }
        }

        if(self != 0){
            result ++;
        }

        self = 0;
        for(int m = 0; m<30; m++){
            alphabet[m] = 0;
        }
        for(int n = 0; n<101; n++){
            word[n] = 0;
        }

    }

    printf("%d" , n - result);


    

    return 0;
}