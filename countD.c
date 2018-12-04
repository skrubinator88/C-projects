
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[])
{
    char *fileName="";
    fileName=argv[1];
    char *numberCheck = "";
    numberCheck = argv[2];

    FILE  *fp;
    fp = fopen(fileName, "r");
    
    if(fp == NULL){
        printf("Error: file not exist\n");
        exit(-1);
    }
    int count = 0;
    
    char buff[10];
    int i=0;
    while(fgets(buff, 10, (FILE*)fp)){
        for (i = 0; i < strlen(buff); i++) {
            char c = buff[i];
		if(argc == 2)
	   		printf("%c",c);
        else if(c == *numberCheck)
        		count++;
        }
        
    }
    
    fclose(fp);
    
    if(argc > 2) {
	    printf("'%c' appeared %d times\n", *numberCheck, count);
	}
}

