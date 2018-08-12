#include<stdio.h>

int main()
{
    int n;

    scanf("%d",&n);

    int binaryArray[100];
    int i =0;
    while(n>0){
        binaryArray[i] = n%2;
        n = n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",binaryArray[j]);
    }

    return 0;
}
