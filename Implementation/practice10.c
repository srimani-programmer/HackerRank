//Day02 coding challenge


#include<stdio.h>
#include<string.h>

char a[1000];
int i =4;
double d =4.0;

int main(){

    int new;
    double new1;

    //printf("enter the string:\n");
    //scanf("%[^\n]",a);

    //printf("enter the integer value:\n");
    scanf("%d",&new);

    //printf("enter the decimal value:\n");
    scanf("%lf",&new1);

    scanf("%*[\n] %[^\n]",a);

     i = i + new;

     d = d + new1;

    printf("%d\n",i);

    printf("%lf\n",d);

    printf("HackerRank ");

    printf("%s",a);

    return 0;

}