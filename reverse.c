#include<stdio.h>
#define N 50
int main(){
int arr[N],i=0;
char ch;
 printf("Enter a message: ");
 while((ch=getchar()) != '\n'){
    arr[i]=0;
    arr[i] = ch;
    i++;
 }
printf("Reversal is: ");

 /* Put code here to print out the reversal by using putchar()*/
for(i=sizeof(arr)/sizeof(int); i>0; i--){
  putchar(arr[i]);
}

 printf("\n");
 return 0;
}
