#include<stdio.h>
#include<string.h>

int main() {
    char input[20];
    char small[20];
    char large[20];
    char smallFirst=0;
    char largeFirst=0;
    
    while(strlen(small) != 4){
        printf("Please enter a word: ");
        scanf("%s",&input[0]);
        if(strlen(small) == 0){
            strcpy(small,input);
        } else if(strlen(small) > strlen(input)) {
            strcpy(small,input);
        } 
        if(strlen(large) < strlen(input)){
            strcpy(large,input);
        }
    }
    if(small[0] > 90 && small < 65)
        smallFirst = small[0] + 32;
    if(large[0] > 90 && small < 65)
    largeFirst = large[0] + 32;
    
    if(smallFirst > largeFirst) {
        printf("largest word: %s\n",large);
        printf("smallest word: %s\n",small);
    } else {
        printf("smallest word: %s\n",small);
        printf("largest word: %s\n",large);
    }
    return 0;
}
