/*Hacker rank coding challenge question that 
prints the string dynamically*/


#include<stdio.h>
#include<string.h>
int main(){

    char a[1000];
   //the below statement is used to print string with spaces
    scanf("%[^\n]", a);
    
   printf("Hello, World.\n");
   printf("%s\n",a);
    return 0;
}