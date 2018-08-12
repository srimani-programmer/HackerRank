#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{   
    char first;
    char second[20];
    char third[1000];
    
    scanf("%c",&first);
    scanf("%s",second);
    scanf("%*[\n]%[^\n]",third);
    
    
    printf("%c\n",first);
    printf("%s\n",second);
    printf("%s\n",third);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}