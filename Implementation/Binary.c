#include<stdio.h>

int main(){
    int n,i=0;
    scanf("%d",&n);
    int a[100];

    while(n>0){
        a[i] = n%2;
        n = n/2;
        i++;
    }
    for(int j = i-1;j>=0;j--){
        printf("%d",a[j]);
    }

    return 0;
}