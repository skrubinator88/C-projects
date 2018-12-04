#include<stdio.h>
#define N 50
int main(){
int arr[N], *i;
i=&arr[0];
char ch;
 printf("Enter a message: ");
 while((ch=getchar()) != '\n'){
    *i = ch;
    i++;
 }
printf("Reversal is: ");

 /* Put code here to print out the reversal by using putchar()*/
for(int x=sizeof(arr)/sizeof(int); x>0; x--){
  putchar(arr[x]);
}

 printf("\n");
 return 0;
}
